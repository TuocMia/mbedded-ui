// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "ui.h"

void ui_Light4_screen_init(void)
{
    ui_Light4 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Light4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_flex_flow(ui_Light4, LV_FLEX_FLOW_ROW_WRAP);
    lv_obj_set_flex_align(ui_Light4, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Light4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Light4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_light41 = lv_obj_create(ui_Light4);
    lv_obj_remove_style_all(ui_light41);
    lv_obj_set_width(ui_light41, 790);
    lv_obj_set_height(ui_light41, 100);
    lv_obj_set_x(ui_light41, 20);
    lv_obj_set_y(ui_light41, -85);
    lv_obj_set_align(ui_light41, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_light41, LV_FLEX_FLOW_COLUMN_WRAP);
    lv_obj_set_flex_align(ui_light41, LV_FLEX_ALIGN_SPACE_EVENLY, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_SPACE_BETWEEN);
    lv_obj_clear_flag(ui_light41, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_light41, 40, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_light41, lv_color_hex(0x414041), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_light41, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_mau4 = lv_label_create(ui_light41);
    lv_obj_set_width(ui_mau4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_mau4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_mau4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_mau4, "Color");
    lv_obj_set_style_text_font(ui_mau4, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_mau41 = lv_slider_create(ui_light41);
    lv_slider_set_value(ui_mau41, 0, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_mau41) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_mau41, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_mau41, 700);
    lv_obj_set_height(ui_mau41, 15);
    lv_obj_set_align(ui_mau41, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_mau41, lv_color_hex(0xDBDBDB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_mau41, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_mau41, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_mau41, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_mau41, lv_color_hex(0xFFA200), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_mau41, LV_GRAD_DIR_HOR, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_mau41, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_mau41, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_light42 = lv_obj_create(ui_Light4);
    lv_obj_remove_style_all(ui_light42);
    lv_obj_set_width(ui_light42, 790);
    lv_obj_set_height(ui_light42, 100);
    lv_obj_set_x(ui_light42, 20);
    lv_obj_set_y(ui_light42, -85);
    lv_obj_set_align(ui_light42, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_light42, LV_FLEX_FLOW_COLUMN_WRAP);
    lv_obj_set_flex_align(ui_light42, LV_FLEX_ALIGN_SPACE_EVENLY, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_SPACE_BETWEEN);
    lv_obj_clear_flag(ui_light42, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_light42, 40, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_light42, lv_color_hex(0x414041), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_light42, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_dosang4 = lv_label_create(ui_light42);
    lv_obj_set_width(ui_dosang4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_dosang4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_dosang4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_dosang4, "Brightness");
    lv_obj_set_style_text_font(ui_dosang4, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_dosang41 = lv_slider_create(ui_light42);
    lv_slider_set_value(ui_dosang41, 0, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_dosang41) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_dosang41, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_dosang41, 700);
    lv_obj_set_height(ui_dosang41, 15);
    lv_obj_set_align(ui_dosang41, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_dosang41, lv_color_hex(0xDBDBDB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_dosang41, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_dosang41, lv_color_hex(0x2F2F2F), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_dosang41, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_dosang41, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_dosang41, LV_GRAD_DIR_HOR, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_dosang41, 20, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_dosang41, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_dosang41, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_mau41, ui_event_mau41, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_dosang41, ui_event_dosang41, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Light4, ui_event_Light4, LV_EVENT_ALL, NULL);

}