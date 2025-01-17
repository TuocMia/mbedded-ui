// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "ui.h"

void ui_Light3_screen_init(void)
{
    ui_Light3 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Light3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Light3, lv_color_hex(0xFFD72C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Light3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Light3, lv_color_hex(0xFF7500), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Light3, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_chinhdosang2 = lv_arc_create(ui_Light3);
    lv_obj_set_width(ui_chinhdosang2, 200);
    lv_obj_set_height(ui_chinhdosang2, 200);
    lv_obj_set_x(ui_chinhdosang2, 0);
    lv_obj_set_y(ui_chinhdosang2, -50);
    lv_obj_set_align(ui_chinhdosang2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_chinhdosang2, LV_OBJ_FLAG_IGNORE_LAYOUT);     /// Flags
    lv_arc_set_value(ui_chinhdosang2, 0);
    lv_arc_set_bg_angles(ui_chinhdosang2, 110, 70);

    lv_obj_set_style_arc_color(ui_chinhdosang2, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_chinhdosang2, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_chinhdosang2, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_chinhdosang2, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_dosang2 = lv_label_create(ui_Light3);
    lv_obj_set_width(ui_dosang2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_dosang2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_dosang2, 0);
    lv_obj_set_y(ui_dosang2, -65);
    lv_obj_set_align(ui_dosang2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_dosang2, "0%");
    lv_obj_add_flag(ui_dosang2, LV_OBJ_FLAG_IGNORE_LAYOUT);     /// Flags
    lv_obj_set_style_text_font(ui_dosang2, &lv_font_montserrat_40, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Bright2 = lv_label_create(ui_Light3);
    lv_obj_set_width(ui_Bright2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Bright2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Bright2, 0);
    lv_obj_set_y(ui_Bright2, -25);
    lv_obj_set_align(ui_Bright2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Bright2, "Brightness");
    lv_obj_add_flag(ui_Bright2, LV_OBJ_FLAG_IGNORE_LAYOUT);     /// Flags
    lv_obj_set_style_text_font(ui_Bright2, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_before3 = lv_imgbtn_create(ui_Light3);
    lv_imgbtn_set_src(ui_before3, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_2001105536, NULL);
    lv_imgbtn_set_src(ui_before3, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_2001105536, NULL);
    lv_imgbtn_set_src(ui_before3, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui_img_2001105536, NULL);
    lv_obj_set_width(ui_before3, 50);
    lv_obj_set_height(ui_before3, 50);
    lv_obj_set_x(ui_before3, 0);
    lv_obj_set_y(ui_before3, -5);
    lv_obj_set_align(ui_before3, LV_ALIGN_BOTTOM_LEFT);
    lv_obj_add_flag(ui_before3, LV_OBJ_FLAG_IGNORE_LAYOUT);     /// Flags
    lv_obj_set_style_radius(ui_before3, 10, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_before3, lv_color_hex(0xD3D3D3), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_before3, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_menu3 = lv_imgbtn_create(ui_Light3);
    lv_imgbtn_set_src(ui_menu3, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_1987010666, NULL);
    lv_imgbtn_set_src(ui_menu3, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_1987010666, NULL);
    lv_obj_set_width(ui_menu3, 60);
    lv_obj_set_height(ui_menu3, 60);
    lv_obj_set_align(ui_menu3, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_menu3, LV_OBJ_FLAG_IGNORE_LAYOUT);     /// Flags
    lv_obj_set_style_radius(ui_menu3, 10, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_menu3, lv_color_hex(0xD3D3D3), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_menu3, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_next3 = lv_imgbtn_create(ui_Light3);
    lv_imgbtn_set_src(ui_next3, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_115668498, NULL);
    lv_imgbtn_set_src(ui_next3, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_115668498, NULL);
    lv_imgbtn_set_src(ui_next3, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui_img_115668498, NULL);
    lv_obj_set_width(ui_next3, 50);
    lv_obj_set_height(ui_next3, 50);
    lv_obj_set_x(ui_next3, 0);
    lv_obj_set_y(ui_next3, -5);
    lv_obj_set_align(ui_next3, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_add_flag(ui_next3, LV_OBJ_FLAG_IGNORE_LAYOUT);     /// Flags
    lv_obj_set_style_radius(ui_next3, 10, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_next3, lv_color_hex(0xD3D3D3), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_next3, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_mau7 = lv_btn_create(ui_Light3);
    lv_obj_set_width(ui_mau7, 50);
    lv_obj_set_height(ui_mau7, 50);
    lv_obj_set_x(ui_mau7, -180);
    lv_obj_set_y(ui_mau7, 110);
    lv_obj_set_align(ui_mau7, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_mau7, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_mau7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_mau7, 25, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_mau7, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_mau7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_mau7, lv_color_hex(0xDBDBDB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_mau7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_mau7, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_mau8 = lv_btn_create(ui_Light3);
    lv_obj_set_width(ui_mau8, 50);
    lv_obj_set_height(ui_mau8, 50);
    lv_obj_set_x(ui_mau8, 0);
    lv_obj_set_y(ui_mau8, 110);
    lv_obj_set_align(ui_mau8, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_mau8, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_mau8, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_mau8, 25, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_mau8, lv_color_hex(0xFFE300), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_mau8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_mau8, lv_color_hex(0xDBDBDB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_mau8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_mau8, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_mau9 = lv_btn_create(ui_Light3);
    lv_obj_set_width(ui_mau9, 50);
    lv_obj_set_height(ui_mau9, 50);
    lv_obj_set_x(ui_mau9, 180);
    lv_obj_set_y(ui_mau9, 110);
    lv_obj_set_align(ui_mau9, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_mau9, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_mau9, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_mau9, 25, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_mau9, lv_color_hex(0xFF9600), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_mau9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_mau9, lv_color_hex(0xDBDBDB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_mau9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_mau9, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LIGHT3 = lv_label_create(ui_Light3);
    lv_obj_set_width(ui_LIGHT3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LIGHT3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LIGHT3, 0);
    lv_obj_set_y(ui_LIGHT3, -190);
    lv_obj_set_align(ui_LIGHT3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LIGHT3, "Light 3");
    lv_obj_set_style_text_font(ui_LIGHT3, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_chinhdosang2, ui_event_chinhdosang2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_before3, ui_event_before3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_menu3, ui_event_menu3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_next3, ui_event_next3, LV_EVENT_ALL, NULL);

}
