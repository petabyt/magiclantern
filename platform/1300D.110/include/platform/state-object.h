#ifndef __platform_state_object_h
#define __platform_state_object_h

#define DISPLAY_STATE DISPLAY_STATEOBJ
#define INPUT_ENABLE_IMAGE_PHYSICAL_SCREEN_PARAMETER 20
#define EVF_STATE (*(struct state_object **)0x3737C)
#define MOVREC_STATE (*(struct state_object **)0x38744)
//#define SDS_FRONT3_STATE (*(struct state_object **)0x3B9C) // unknown <- 600D

#endif // __platform_state_object_h
