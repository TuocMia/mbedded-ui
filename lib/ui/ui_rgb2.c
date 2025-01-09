// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "ui.h"

void ui_rgb2_screen_init(void)
{
    ui_rgb2 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_rgb2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_flex_flow(ui_rgb2, LV_FLEX_FLOW_COLUMN_WRAP);
    lv_obj_set_flex_align(ui_rgb2, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_SPACE_EVENLY);
    lv_obj_set_style_bg_color(ui_rgb2, lv_color_hex(0xFF00EE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_rgb2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_rgb2, lv_color_hex(0x2400FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_rgb2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_rgb2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_rgb2, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RGB1 = lv_obj_create(ui_rgb2);
    lv_obj_remove_style_all(ui_RGB1);
    lv_obj_set_width(ui_RGB1, 300);
    lv_obj_set_height(ui_RGB1, 240);
    lv_obj_set_x(ui_RGB1, -32);
    lv_obj_set_y(ui_RGB1, 33);
    lv_obj_set_align(ui_RGB1, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_RGB1, LV_FLEX_FLOW_COLUMN_WRAP);
    lv_obj_set_flex_align(ui_RGB1, LV_FLEX_ALIGN_SPACE_AROUND, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_RGB1, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_RGB1, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_RGB1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_RGB1, 200, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Colorwheel2 = lv_colorwheel_create(ui_RGB1, true);
    lv_obj_set_width(ui_Colorwheel2, 150);
    lv_obj_set_height(ui_Colorwheel2, 150);
    lv_obj_set_align(ui_Colorwheel2, LV_ALIGN_CENTER);
    lv_obj_set_scrollbar_mode(ui_Colorwheel2, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_scroll_dir(ui_Colorwheel2, LV_DIR_TOP);

    ui_rgbcolor2 = lv_label_create(ui_RGB1);
    lv_obj_set_width(ui_rgbcolor2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_rgbcolor2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_rgbcolor2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_rgbcolor2, "Color");
    lv_obj_set_style_text_color(ui_rgbcolor2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_rgbcolor2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_rgbcolor2, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RGB2 = lv_obj_create(ui_rgb2);
    lv_obj_remove_style_all(ui_RGB2);
    lv_obj_set_width(ui_RGB2, 300);
    lv_obj_set_height(ui_RGB2, 240);
    lv_obj_set_x(ui_RGB2, -32);
    lv_obj_set_y(ui_RGB2, 33);
    lv_obj_set_align(ui_RGB2, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_RGB2, LV_FLEX_FLOW_COLUMN_WRAP);
    lv_obj_set_flex_align(ui_RGB2, LV_FLEX_ALIGN_SPACE_EVENLY, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_SPACE_EVENLY);
    lv_obj_clear_flag(ui_RGB2, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_RGB2, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_RGB2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_RGB2, 200, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_RGB2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Brightness2 = lv_arc_create(ui_RGB2);
    lv_obj_set_width(ui_Brightness2, 150);
    lv_obj_set_height(ui_Brightness2, 150);
    lv_obj_set_x(ui_Brightness2, -16);
    lv_obj_set_y(ui_Brightness2, -143);
    lv_obj_set_align(ui_Brightness2, LV_ALIGN_CENTER);
    lv_arc_set_value(ui_Brightness2, 0);
    lv_obj_set_style_arc_color(ui_Brightness2, lv_color_hex(0x838383), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Brightness2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Brightness2, 8, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_Brightness2, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Brightness2, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Brightness2, 10, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Brightness2, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Brightness2, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_rgbbrightness2 = lv_label_create(ui_RGB2);
    lv_obj_set_width(ui_rgbbrightness2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_rgbbrightness2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_rgbbrightness2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_rgbbrightness2, "Brightness");
    lv_obj_set_style_text_color(ui_rgbbrightness2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_rgbbrightness2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_rgbbrightness2, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ImgButton5 = lv_imgbtn_create(ui_rgb2);
    lv_imgbtn_set_src(ui_ImgButton5, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_2001105536, NULL);
    lv_imgbtn_set_src(ui_ImgButton5, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_2001105536, NULL);
    lv_imgbtn_set_src(ui_ImgButton5, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui_img_2001105536, NULL);
    lv_obj_set_width(ui_ImgButton5, 50);
    lv_obj_set_height(ui_ImgButton5, 50);
    lv_obj_set_x(ui_ImgButton5, 0);
    lv_obj_set_y(ui_ImgButton5, -5);
    lv_obj_set_align(ui_ImgButton5, LV_ALIGN_BOTTOM_LEFT);
    lv_obj_add_flag(ui_ImgButton5, LV_OBJ_FLAG_IGNORE_LAYOUT);     /// Flags
    lv_obj_set_style_radius(ui_ImgButton5, 10, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_ImgButton5, lv_color_hex(0xD3D3D3), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_ImgButton5, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_ImgButton6 = lv_imgbtn_create(ui_rgb2);
    lv_imgbtn_set_src(ui_ImgButton6, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_1987010666, NULL);
    lv_imgbtn_set_src(ui_ImgButton6, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_1987010666, NULL);
    lv_imgbtn_set_src(ui_ImgButton6, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui_img_1987010666, NULL);
    lv_obj_set_width(ui_ImgButton6, 60);
    lv_obj_set_height(ui_ImgButton6, 60);
    lv_obj_set_align(ui_ImgButton6, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_ImgButton6, LV_OBJ_FLAG_IGNORE_LAYOUT);     /// Flags
    lv_obj_set_style_radius(ui_ImgButton6, 10, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_ImgButton6, lv_color_hex(0xD3D3D3), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_ImgButton6, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_ImgButton7 = lv_imgbtn_create(ui_rgb2);
    lv_imgbtn_set_src(ui_ImgButton7, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_115668498, NULL);
    lv_imgbtn_set_src(ui_ImgButton7, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_115668498, NULL);
    lv_imgbtn_set_src(ui_ImgButton7, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui_img_115668498, NULL);
    lv_obj_set_width(ui_ImgButton7, 50);
    lv_obj_set_height(ui_ImgButton7, 50);
    lv_obj_set_x(ui_ImgButton7, 0);
    lv_obj_set_y(ui_ImgButton7, -5);
    lv_obj_set_align(ui_ImgButton7, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_add_flag(ui_ImgButton7, LV_OBJ_FLAG_IGNORE_LAYOUT);     /// Flags
    lv_obj_set_style_radius(ui_ImgButton7, 10, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_ImgButton7, lv_color_hex(0xD3D3D3), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_ImgButton7, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_RGBtext2 = lv_label_create(ui_rgb2);
    lv_obj_set_width(ui_RGBtext2, 150);
    lv_obj_set_height(ui_RGBtext2, 50);
    lv_obj_set_x(ui_RGBtext2, 0);
    lv_obj_set_y(ui_RGBtext2, 20);
    lv_obj_set_align(ui_RGBtext2, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_RGBtext2, "RGB 2");
    lv_obj_add_flag(ui_RGBtext2, LV_OBJ_FLAG_IGNORE_LAYOUT);     /// Flags
    lv_obj_set_style_text_align(ui_RGBtext2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_RGBtext2, &lv_font_montserrat_44, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_RGBtext2, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_RGBtext2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_RGBtext2, 150, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Colorwheel2, ui_event_Colorwheel2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Brightness2, ui_event_Brightness2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ImgButton5, ui_event_ImgButton5, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ImgButton6, ui_event_ImgButton6, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ImgButton7, ui_event_ImgButton7, LV_EVENT_ALL, NULL);

}
