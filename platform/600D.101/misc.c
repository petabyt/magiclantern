// misc functions specific to 60D/109

#include <dryos.h>
#include <property.h>
#include <bmp.h>
#include <config.h>
#include <consts.h>
#include <lens.h>

void display_shooting_info() // called from debug task
{
	if (lv) return;
	
	int bg = bmp_getpixel(314, 260);
	uint32_t fnt = FONT(FONT_MED, COLOR_FG_NONLV, bg);

	if (lens_info.wb_mode == WB_KELVIN)
	{
		bmp_printf(fnt, 185, 250, "%5dK", lens_info.kelvin);
	}
	if (lens_info.wbs_gm || lens_info.wbs_ba)
	{
		bg = bmp_getpixel(380, 250);
		fnt = FONT(FONT_MED, COLOR_FG_NONLV, bg);

		int ba = lens_info.wbs_ba;
		if (ba) bmp_printf(fnt, 380 + 2 * font_med.width, 250, "%s%d", ba > 0 ? "A" : "B", ABS(ba));
		else    bmp_printf(fnt, 380 + 2 * font_med.width, 250, "  ");

		int gm = lens_info.wbs_gm;
		if (gm) bmp_printf(fnt, 380, 250, "%s%d", gm > 0 ? "G" : "M", ABS(gm));
		else    bmp_printf(fnt, 380, 250, "  ");
	}

	iso_refresh_display();

	bg = bmp_getpixel(15, 430);
	fnt = FONT(FONT_MED, COLOR_FG_NONLV, bg);
	
	extern int hdr_steps, hdr_stepsize;
	if (hdr_steps > 1)
		bmp_printf(fnt, 190, 450, "HDR %dx%dEV", hdr_steps, hdr_stepsize/8);
	else
		bmp_printf(fnt, 190, 450, "         ");

	//~ bmp_printf(fnt, 400, 450, "Flash:%s", 
		//~ strobo_firing == 0 ? " ON" : 
		//~ strobo_firing == 1 ? "OFF" : "Auto"
		//~ strobo_firing < 2 && flash_and_no_flash ? "/T" : "  "
		//~ );

	bmp_printf(fnt, 40, 460, get_mlu() ? "MLU" : "   ");

	//~ display_lcd_remote_info();
	display_trap_focus_info();
}


// some dummy stubs
int lcd_release_running = 0;
void lcd_release_step() {};
int get_lcd_sensor_shortcuts() { return 0; }
void display_lcd_remote_icon(int x0, int y0) {}

// image buffers
// http://magiclantern.wikia.com/wiki/VRAM

PROP_INT(PROP_DIGITAL_ZOOM_RATIO, digital_zoom_ratio);

struct vram_info * get_yuv422_hd_vram()
{
	static struct vram_info _vram_info;
	_vram_info.vram = YUV422_HD_BUFFER_DMA_ADDR;
	_vram_info.width =			 lv_dispsize > 1 ? 1024
								  : !is_movie_mode() ? 1056
								  : (video_mode_resolution == 0 ? (digital_zoom_ratio >= 300 ? 1728 : 1680) : 
								  	video_mode_resolution == 1 ? 1280 :
									 video_mode_resolution == 2 ? (video_mode_crop? 640:1024) : 0);
	_vram_info.pitch = _vram_info.width << 1; 
	_vram_info.height =			lv_dispsize > 1 ? 680
								  : !is_movie_mode() ? 704
								  : (video_mode_resolution == 0 ? (digital_zoom_ratio >= 300 ? 972 : 945) : 
								  	video_mode_resolution == 1 ? 560 :
									 video_mode_resolution == 2 ? (video_mode_crop? 480:680) : 0);

	return &_vram_info;
}
