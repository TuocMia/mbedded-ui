// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////


// SCREEN: ui_info
void ui_info_screen_init(void);
void ui_event_info(lv_event_t * e);
lv_obj_t * ui_info;
lv_obj_t * ui_weather;
lv_obj_t * ui_Today;
lv_obj_t * ui_CurrentWeather;
lv_obj_t * ui_TempToday;
lv_obj_t * ui_HumidBox;
lv_obj_t * ui_HumidIcon;
lv_obj_t * ui_HumidText;
lv_obj_t * ui_AQI;
lv_obj_t * ui_aqi;
lv_obj_t * ui_AQItext;
lv_obj_t * ui_Panel5;
lv_obj_t * ui_ddmmyy;
lv_obj_t * ui_Label12;
lv_obj_t * ui_tomorrow1;
lv_obj_t * ui_date1;
lv_obj_t * ui_forecast1;
lv_obj_t * ui_Tempforecast1;
lv_obj_t * ui_tomorrow2;
lv_obj_t * ui_date2;
lv_obj_t * ui_forecast2;
lv_obj_t * ui_Tempforecast2;
lv_obj_t * ui_tomorrow3;
lv_obj_t * ui_date3;
lv_obj_t * ui_forecast3;
lv_obj_t * ui_Tempforecast3;
lv_obj_t * ui_tomorrow4;
lv_obj_t * ui_date4;
lv_obj_t * ui_forecast4;
lv_obj_t * ui_Tempforecast4;
lv_obj_t * ui_tomorrow5;
lv_obj_t * ui_date5;
lv_obj_t * ui_forecast5;
lv_obj_t * ui_Tempforecast5;
lv_obj_t * ui_tomorrow6;
lv_obj_t * ui_date6;
lv_obj_t * ui_forecast6;
lv_obj_t * ui_Tempforecast6;
// CUSTOM VARIABLES


// SCREEN: ui_menu
void ui_menu_screen_init(void);
void ui_event_menu(lv_event_t * e);
lv_obj_t * ui_menu;
lv_obj_t * ui_device1;
void ui_event_device1_ImgButton1(lv_event_t * e);
lv_obj_t * ui_Image8;
void ui_event_light1_config(lv_event_t * e);
lv_obj_t * ui_light1;
void ui_event_light1_ImgButton1(lv_event_t * e);
lv_obj_t * ui_Image4;
lv_obj_t * ui_device2;
void ui_event_device2_ImgButton1(lv_event_t * e);
lv_obj_t * ui_Image7;
void ui_event_light2_config(lv_event_t * e);
lv_obj_t * ui_light2;
void ui_event_light2_ImgButton1(lv_event_t * e);
lv_obj_t * ui_Image3;
void ui_event_rgb3_config(lv_event_t * e);
lv_obj_t * ui_rgb3;
void ui_event_rgb3_ImgButton1(lv_event_t * e);
lv_obj_t * ui_Image5;
void ui_event_light3_config(lv_event_t * e);
lv_obj_t * ui_light3;
void ui_event_light3_ImgButton1(lv_event_t * e);
lv_obj_t * ui_Image2;
void ui_event_rgb4_config(lv_event_t * e);
lv_obj_t * ui_rgb4;
void ui_event_rgb4_ImgButton1(lv_event_t * e);
lv_obj_t * ui_Image6;
void ui_event_light4_config(lv_event_t * e);
lv_obj_t * ui_light4;
void ui_event_light4_ImgButton1(lv_event_t * e);
lv_obj_t * ui_Image1;
// CUSTOM VARIABLES


// SCREEN: ui_rgb1
void ui_rgb1_screen_init(void);
lv_obj_t * ui_rgb1;
lv_obj_t * ui_RGB11;
void ui_event_Colorwheel1(lv_event_t * e);
lv_obj_t * ui_Colorwheel1;
lv_obj_t * ui_rgbcolor1;
lv_obj_t * ui_RGB12;
void ui_event_Brightness1(lv_event_t * e);
lv_obj_t * ui_Brightness1;
lv_obj_t * ui_rgbbrightness1;
void ui_event_ImgButton2(lv_event_t * e);
lv_obj_t * ui_ImgButton2;
void ui_event_ImgButton3(lv_event_t * e);
lv_obj_t * ui_ImgButton3;
void ui_event_ImgButton4(lv_event_t * e);
lv_obj_t * ui_ImgButton4;
lv_obj_t * ui_RGBtext1;
// CUSTOM VARIABLES


// SCREEN: ui_rgb2
void ui_rgb2_screen_init(void);
lv_obj_t * ui_rgb2;
lv_obj_t * ui_RGB1;
void ui_event_Colorwheel2(lv_event_t * e);
lv_obj_t * ui_Colorwheel2;
lv_obj_t * ui_rgbcolor2;
lv_obj_t * ui_RGB2;
void ui_event_Brightness2(lv_event_t * e);
lv_obj_t * ui_Brightness2;
lv_obj_t * ui_rgbbrightness2;
void ui_event_ImgButton5(lv_event_t * e);
lv_obj_t * ui_ImgButton5;
void ui_event_ImgButton6(lv_event_t * e);
lv_obj_t * ui_ImgButton6;
void ui_event_ImgButton7(lv_event_t * e);
lv_obj_t * ui_ImgButton7;
lv_obj_t * ui_RGBtext2;
// CUSTOM VARIABLES


// SCREEN: ui_Light1
void ui_Light1_screen_init(void);
lv_obj_t * ui_Light1;
void ui_event_chinhdosang(lv_event_t * e);
lv_obj_t * ui_chinhdosang;
lv_obj_t * ui_dosang;
lv_obj_t * ui_Bright1;
void ui_event_before1(lv_event_t * e);
lv_obj_t * ui_before1;
void ui_event_menu1(lv_event_t * e);
lv_obj_t * ui_menu1;
void ui_event_next1(lv_event_t * e);
lv_obj_t * ui_next1;
lv_obj_t * ui_mau1;
lv_obj_t * ui_mau2;
lv_obj_t * ui_mau3;
lv_obj_t * ui_LIGHT1;
// CUSTOM VARIABLES


// SCREEN: ui_Light2
void ui_Light2_screen_init(void);
lv_obj_t * ui_Light2;
void ui_event_chinhdosang1(lv_event_t * e);
lv_obj_t * ui_chinhdosang1;
lv_obj_t * ui_dosang1;
lv_obj_t * ui_Bright3;
void ui_event_before2(lv_event_t * e);
lv_obj_t * ui_before2;
void ui_event_menu2(lv_event_t * e);
lv_obj_t * ui_menu2;
void ui_event_next2(lv_event_t * e);
lv_obj_t * ui_next2;
lv_obj_t * ui_mau4;
lv_obj_t * ui_mau5;
lv_obj_t * ui_mau6;
lv_obj_t * ui_LIGHT2;
// CUSTOM VARIABLES


// SCREEN: ui_Light3
void ui_Light3_screen_init(void);
lv_obj_t * ui_Light3;
void ui_event_chinhdosang2(lv_event_t * e);
lv_obj_t * ui_chinhdosang2;
lv_obj_t * ui_dosang2;
lv_obj_t * ui_Bright2;
void ui_event_before3(lv_event_t * e);
lv_obj_t * ui_before3;
void ui_event_menu3(lv_event_t * e);
lv_obj_t * ui_menu3;
void ui_event_next3(lv_event_t * e);
lv_obj_t * ui_next3;
lv_obj_t * ui_mau7;
lv_obj_t * ui_mau8;
lv_obj_t * ui_mau9;
lv_obj_t * ui_LIGHT3;
// CUSTOM VARIABLES


// SCREEN: ui_Light4
void ui_Light4_screen_init(void);
lv_obj_t * ui_Light4;
void ui_event_chinhdosang3(lv_event_t * e);
lv_obj_t * ui_chinhdosang3;
lv_obj_t * ui_dosang3;
lv_obj_t * ui_Bright4;
void ui_event_before4(lv_event_t * e);
lv_obj_t * ui_before4;
void ui_event_menu4(lv_event_t * e);
lv_obj_t * ui_menu4;
void ui_event_next4(lv_event_t * e);
lv_obj_t * ui_next4;
lv_obj_t * ui_mau10;
lv_obj_t * ui_mau11;
lv_obj_t * ui_mau12;
lv_obj_t * ui_LIGHT4;
// CUSTOM VARIABLES

// EVENTS
lv_obj_t * ui____initial_actions0;

// IMAGES AND IMAGE SETS

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_info(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT) {
        lv_indev_wait_release(lv_indev_get_act());
        _ui_screen_change(&ui_menu, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 500, 200, &ui_menu_screen_init);
    }
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT) {
        lv_indev_wait_release(lv_indev_get_act());
        _ui_screen_change(&ui_menu, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 200, &ui_menu_screen_init);
    }
}

void ui_event_menu(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT) {
        lv_indev_wait_release(lv_indev_get_act());
        _ui_screen_change(&ui_info, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 200, &ui_info_screen_init);
    }
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT) {
        lv_indev_wait_release(lv_indev_get_act());
        _ui_screen_change(&ui_info, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 500, 200, &ui_info_screen_init);
    }
}

void ui_event_device1_ImgButton1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_CLICKED) {
        OnOffDev1(e);
    }
}

void ui_event_light1_config(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_Light1, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_Light1_screen_init);
    }
}

void ui_event_light1_ImgButton1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_CLICKED) {
        OnOffLight1(e);
    }
}

void ui_event_device2_ImgButton1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_CLICKED) {
        OnOffDev2(e);
    }
}

void ui_event_light2_config(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_Light1, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_Light1_screen_init);
    }
}

void ui_event_light2_ImgButton1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_CLICKED) {
        OnOffLight2(e);
    }
}

void ui_event_rgb3_config(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_rgb1, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_rgb1_screen_init);
    }
}

void ui_event_rgb3_ImgButton1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_CLICKED) {
        OnOffrgb1(e);
    }
}

void ui_event_light3_config(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_Light3, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_Light3_screen_init);
    }
}

void ui_event_light3_ImgButton1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_CLICKED) {
        OnOffLight3(e);
    }
}

void ui_event_rgb4_config(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_rgb2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_rgb2_screen_init);
    }
}

void ui_event_rgb4_ImgButton1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_CLICKED) {
        OnOffrgb2(e);
    }
}

void ui_event_light4_config(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_Light4, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_Light4_screen_init);
    }
}

void ui_event_light4_ImgButton1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_CLICKED) {
        OnOffLight4(e);
    }
}

void ui_event_Colorwheel1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_VALUE_CHANGED) {
        rgbColor1(e);
    }
}

void ui_event_Brightness1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_VALUE_CHANGED) {
        rgbBrightness1(e);
    }
}

void ui_event_ImgButton2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_rgb2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_rgb2_screen_init);
    }
}

void ui_event_ImgButton3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_menu, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_menu_screen_init);
    }
}

void ui_event_ImgButton4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_rgb2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_rgb2_screen_init);
    }
}

void ui_event_Colorwheel2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_VALUE_CHANGED) {
        rgbColor1(e);
    }
}

void ui_event_Brightness2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_VALUE_CHANGED) {
        rgbBrightness1(e);
    }
}

void ui_event_ImgButton5(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_rgb1, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_rgb1_screen_init);
    }
}

void ui_event_ImgButton6(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_menu, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_menu_screen_init);
    }
}

void ui_event_ImgButton7(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_rgb1, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_rgb1_screen_init);
    }
}

void ui_event_chinhdosang(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);

    if(event_code == LV_EVENT_RELEASED) {
        _ui_arc_set_text_value(ui_dosang, target, "", "%");
    }
}

void ui_event_before1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_Light4, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_Light4_screen_init);
    }
}

void ui_event_menu1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_menu, LV_SCR_LOAD_ANIM_NONE, 500, 0, &ui_menu_screen_init);
    }
}

void ui_event_next1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_Light2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_Light2_screen_init);
    }
}

void ui_event_chinhdosang1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);

    if(event_code == LV_EVENT_RELEASED) {
        _ui_arc_set_text_value(ui_dosang1, target, "", "%");
    }
}

void ui_event_before2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_Light1, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_Light1_screen_init);
    }
}

void ui_event_menu2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_menu, LV_SCR_LOAD_ANIM_NONE, 500, 0, &ui_menu_screen_init);
    }
}

void ui_event_next2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_Light3, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_Light3_screen_init);
    }
}

void ui_event_chinhdosang2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);

    if(event_code == LV_EVENT_RELEASED) {
        _ui_arc_set_text_value(ui_dosang2, target, "", "%");
    }
}

void ui_event_before3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_Light2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_Light2_screen_init);
    }
}

void ui_event_menu3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_menu, LV_SCR_LOAD_ANIM_NONE, 500, 0, &ui_menu_screen_init);
    }
}

void ui_event_next3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_Light4, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_Light4_screen_init);
    }
}

void ui_event_chinhdosang3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);

    if(event_code == LV_EVENT_RELEASED) {
        _ui_arc_set_text_value(ui_dosang3, target, "", "%");
    }
}

void ui_event_before4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_Light3, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_Light3_screen_init);
    }
}

void ui_event_menu4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_menu, LV_SCR_LOAD_ANIM_NONE, 500, 0, &ui_menu_screen_init);
    }
}

void ui_event_next4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_Light1, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_Light1_screen_init);
    }
}

///////////////////// SCREENS ////////////////////

void ui_init(void)
{
    LV_EVENT_GET_COMP_CHILD = lv_event_register_id();

    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_info_screen_init();
    ui_menu_screen_init();
    ui_rgb1_screen_init();
    ui_rgb2_screen_init();
    ui_Light1_screen_init();
    ui_Light2_screen_init();
    ui_Light3_screen_init();
    ui_Light4_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_info);
}
