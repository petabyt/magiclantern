#ifndef __GPS_H_
#define __GPS_H_

uint32_t gps_get_state();
void gps_disable();
void gps_re_enable();

#ifdef FEATURE_GPS_TWEAKS
void gps_tweaks_startup_hook();
void gps_tweaks_shutdown_hook();
#endif

#endif // __GPS_H_
