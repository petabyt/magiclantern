#ifndef _ptp_h_
#define _ptp_h_

#include "dryos.h"
/** \file
 * PTP protocol and interface.
 *
 * The PTP protocol defines how the camera and a host computer communicate
 * over USB.  It defines operations and properties, and is callback driven.
 * Handlers for operations can be registered by calling ptp_register_handler()
 * and will be called when the host initiates that operation.
 */

/** \group PTP IDs
 *
 * These are some of the "well known" Canon PTP commands.
 * @{
 */
#define PTP_FM_OBJECTSIZE       0x910a
#define PTP_SET_DEVICE_PROP     0x9110
#define PTP_HD_CAPACITY         0x911a
#define PTP_GUI_OFF             0x911b
#define PTP_LCD_ON              0x911c
#define PTP_911E                0x911e  // unknown
#define PTP_UPDATE_FIRMARE      0x911f
#define PTP_LV_DATA             0x9153
#define PTP_LV_ZOOM_MAYBE       0x9154
#define PTP_LV_ZOOM             0x9158
#define PTP_LV_AFFRAME          0x915a
#define PTP_AF_START            0x9160
#define PTP_FAPI_MESSAGE_TX     0x91fe

  // results
#define PTP_RC_OK               0x2001
#define PTP_RC_ERROR            0x2002

#define PTP_RC_GeneralError     0x2002
#define PTP_RC_ParameterNotSupported 0x2006

#define BUF_SIZE 128

/** @} */

struct ptp_handle;

/** PTP message on the USB wire.
 *
 */
struct ptp_msg
{
        uint32_t                id;
        uint32_t                session;
        uint32_t                transaction;
        uint32_t                param_count;
        uint32_t                param[ 5 ];
} __PACKED__;

SIZE_CHECK_STRUCT( ptp_msg, 0x24 );


/** DryOS PTP callback context.
 *
 * When a handler is registered it will be called with a ptp_context
 * as its first argument.  These callbacks are to be used to reply
 * to the host.
 */
struct ptp_context
{
        struct ptp_handle *     handle;         // off_0x00;

        int             (*send_data)(
                struct ptp_handle *     handle,
                void *          buf,
                int                     part_size,
                int             total_size,     // total_size should be 0 except for the first call
                int,                        // that's brainfuck for me...
                int,
                int
        );

        // off 0x08
        int             (*recv_data)(
                struct ptp_handle *     handle,
                void *                  buf,
                size_t                  len,
                void                    (*callback)(
                        void *                  cb_priv,
                        int                     status
                ),
                void *                  cb_priv
        );

        // Sends a formatted buffer
        // \note format to be determined
        // off_0x0c
        int             (*send_resp)(
                struct ptp_handle *     handle,
                struct ptp_msg *        msg
        );

        // Returns length of message to receive
        // off 0x10
        int             (*get_data_size)(
                struct ptp_handle *     handle
        );
        // CHDK equiv: int (*get_data_size)(int handle);

        void * off_0x14; // int (*send_err_resp)(int handle, PTPContainer *resp); ?
        void * off_0x18; // priv to close handler?
        void * off_0x1c; // close?
};


/** DryOS function to register a USB PTP handler.
 */
extern void
ptp_register_handler(
        uint32_t                id,
        int                     (*handler)(
                void *                  priv,
                struct ptp_context *    context,
                void *                  r2, // unknown
                void *                  r3 // unknown
        ),
        void *                  priv
);


/** Magic Lantern PTP handler segment.
 *
 * \internal These are generated by the PTP_HANDLER() macro to
 * create a list of handlers that will be automatically registered
 * when Magic Lantern boots.
 */
struct ptp_handler
{
        uint32_t                id;
        void *                  handler;
        void *                  priv;
};


/** Register a compile-time Magic Lantern PTP handler.
 *
 * \internal Typically PTP_HANDLER() is a better choice.
 */
#define REGISTER_PTP_HANDLER( ID, HANDLER, PRIV ) \
struct ptp_handler \
__attribute__((section(".ptp_handlers"))) \
__ptp_handler_##ID = { \
        .id                     = ID, \
        .handler                = HANDLER, \
        .priv                   = PRIV, \
}


/** Register a compile-time Magic Lantern PTP handler.
 *
 * Register a PTP handler with the ID.  Magic Lantern will automatically
 * call the DryOS functions to register all the handlers that are
 * in the .ptp_handlers segment.
 */
#define PTP_HANDLER( ID, PRIV ) \
        static int ptp_handler_##ID(); \
        REGISTER_PTP_HANDLER( ID, ptp_handler_##ID, PRIV ); \
        static int ptp_handler_##ID( \
                void *                  priv, \
                struct ptp_context *    context, \
                uint32_t                opcode, \
                uint32_t                session, \
                uint32_t                transaction, \
                uint32_t                param1, \
                uint32_t                param2, \
                uint32_t                param3, \
                uint32_t                param4, \
                uint32_t                param5 \
        ) \

#endif

int send_ptp_data(struct ptp_context *data, const char *buf, int size);
int recv_ptp_data(struct ptp_context *data, char *buf, int size);
