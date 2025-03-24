// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "ui.h"

void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_flex_flow(ui_Screen1, LV_FLEX_FLOW_COLUMN_WRAP);
    lv_obj_set_flex_align(ui_Screen1, LV_FLEX_ALIGN_END, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_SPACE_EVENLY);
    lv_obj_set_style_bg_img_src(ui_Screen1, &ui_img_background_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MaiTruongToiYeu = lv_obj_create(ui_Screen1);
    lv_obj_remove_style_all(ui_MaiTruongToiYeu);
    lv_obj_set_width(ui_MaiTruongToiYeu, 800);
    lv_obj_set_height(ui_MaiTruongToiYeu, 80);
    lv_obj_set_x(ui_MaiTruongToiYeu, 0);
    lv_obj_set_y(ui_MaiTruongToiYeu, -200);
    lv_obj_set_align(ui_MaiTruongToiYeu, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_MaiTruongToiYeu, LV_OBJ_FLAG_IGNORE_LAYOUT);     /// Flags
    lv_obj_clear_flag(ui_MaiTruongToiYeu,
                      LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_MaiTruongToiYeu, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MaiTruongToiYeu, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PTIT = lv_img_create(ui_MaiTruongToiYeu);
    lv_img_set_src(ui_PTIT, &ui_img_logoptit_png);
    lv_obj_set_width(ui_PTIT, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PTIT, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PTIT, -128);
    lv_obj_set_y(ui_PTIT, -2);
    lv_obj_set_align(ui_PTIT, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_PTIT, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_PTIT, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_menu = lv_obj_create(ui_Screen1);
    lv_obj_remove_style_all(ui_menu);
    lv_obj_set_width(ui_menu, 800);
    lv_obj_set_height(ui_menu, 400);
    lv_obj_set_x(ui_menu, 15);
    lv_obj_set_y(ui_menu, 35);
    lv_obj_set_align(ui_menu, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_menu, LV_FLEX_FLOW_COLUMN_WRAP);
    lv_obj_set_flex_align(ui_menu, LV_FLEX_ALIGN_SPACE_EVENLY, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_SPACE_EVENLY);
    lv_obj_clear_flag(ui_menu, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Humid_Temp = lv_obj_create(ui_menu);
    lv_obj_set_width(ui_Humid_Temp, 300);
    lv_obj_set_height(ui_Humid_Temp, 374);
    lv_obj_set_x(ui_Humid_Temp, -205);
    lv_obj_set_y(ui_Humid_Temp, -53);
    lv_obj_set_align(ui_Humid_Temp, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Humid_Temp, LV_FLEX_FLOW_COLUMN_WRAP);
    lv_obj_set_flex_align(ui_Humid_Temp, LV_FLEX_ALIGN_END, LV_FLEX_ALIGN_END, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Humid_Temp, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Humid_Temp, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Humid_Temp, 125, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Humid_Temp, lv_color_hex(0xAAAAAA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Humid_Temp, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Humid_Container = lv_obj_create(ui_Humid_Temp);
    lv_obj_remove_style_all(ui_Humid_Container);
    lv_obj_set_width(ui_Humid_Container, 200);
    lv_obj_set_height(ui_Humid_Container, 70);
    lv_obj_set_x(ui_Humid_Container, 0);
    lv_obj_set_y(ui_Humid_Container, -5);
    lv_obj_set_align(ui_Humid_Container, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Humid_Container, LV_FLEX_FLOW_ROW_WRAP_REVERSE);
    lv_obj_set_flex_align(ui_Humid_Container, LV_FLEX_ALIGN_SPACE_EVENLY, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_SPACE_AROUND);
    lv_obj_clear_flag(ui_Humid_Container, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_humid_unit = lv_label_create(ui_Humid_Container);
    lv_obj_set_width(ui_humid_unit, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_humid_unit, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_humid_unit, LV_ALIGN_CENTER);
    lv_label_set_text(ui_humid_unit, "%");
    lv_obj_set_style_text_color(ui_humid_unit, lv_color_hex(0x0891DE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_humid_unit, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_humid_unit, &ui_font_dmsans40, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Humid_Label = lv_label_create(ui_Humid_Container);
    lv_obj_set_width(ui_Humid_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Humid_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Humid_Label, 101);
    lv_obj_set_y(ui_Humid_Label, 27);
    lv_obj_set_align(ui_Humid_Label, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Humid_Label, "0");
    lv_obj_set_style_text_color(ui_Humid_Label, lv_color_hex(0x0891DE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Humid_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Humid_Label, &ui_font_dmsans40, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Humid_Image = lv_img_create(ui_Humid_Container);
    lv_img_set_src(ui_Humid_Image, &ui_img_doam_png);
    lv_obj_set_width(ui_Humid_Image, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Humid_Image, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Humid_Image, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Humid_Image, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Humid_Image, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Temp_Container = lv_obj_create(ui_Humid_Temp);
    lv_obj_remove_style_all(ui_Temp_Container);
    lv_obj_set_width(ui_Temp_Container, 200);
    lv_obj_set_height(ui_Temp_Container, 70);
    lv_obj_set_x(ui_Temp_Container, 2);
    lv_obj_set_y(ui_Temp_Container, 28);
    lv_obj_set_align(ui_Temp_Container, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Temp_Container, LV_FLEX_FLOW_ROW_REVERSE);
    lv_obj_set_flex_align(ui_Temp_Container, LV_FLEX_ALIGN_SPACE_AROUND, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_SPACE_BETWEEN);
    lv_obj_clear_flag(ui_Temp_Container, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Symbol = lv_label_create(ui_Temp_Container);
    lv_obj_set_width(ui_Symbol, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Symbol, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Symbol, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Symbol, "°C");
    lv_obj_set_style_text_color(ui_Symbol, lv_color_hex(0xFF617B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Symbol, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Symbol, &lv_font_montserrat_40, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Temp_Label = lv_label_create(ui_Temp_Container);
    lv_obj_set_width(ui_Temp_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Temp_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Temp_Label, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Temp_Label, "0");
    lv_obj_set_style_text_color(ui_Temp_Label, lv_color_hex(0xFA637F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Temp_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Temp_Label, &ui_font_dmsans40, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Temp_Image = lv_img_create(ui_Temp_Container);
    lv_img_set_src(ui_Temp_Image, &ui_img_nhietdo_png);
    lv_obj_set_width(ui_Temp_Image, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Temp_Image, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Temp_Image, -14);
    lv_obj_set_y(ui_Temp_Image, -45);
    lv_obj_set_align(ui_Temp_Image, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Temp_Image, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Temp_Image, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Bar1 = lv_bar_create(ui_Humid_Temp);
    lv_bar_set_value(ui_Bar1, 100, LV_ANIM_OFF);
    lv_bar_set_start_value(ui_Bar1, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_Bar1, 240);
    lv_obj_set_height(ui_Bar1, 10);
    lv_obj_set_align(ui_Bar1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Bar1, LV_OBJ_FLAG_IGNORE_LAYOUT);     /// Flags
    lv_obj_clear_flag(ui_Bar1, LV_OBJ_FLAG_CLICK_FOCUSABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Bar1, lv_color_hex(0x0078B1), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Bar1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Bar1, LV_GRAD_DIR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Bar1, lv_color_hex(0x00CDFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Bar1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Bar1, lv_color_hex(0x00FFE9), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Bar1, LV_GRAD_DIR_HOR, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_Time = lv_obj_create(ui_Humid_Temp);
    lv_obj_remove_style_all(ui_Time);
    lv_obj_set_width(ui_Time, 200);
    lv_obj_set_height(ui_Time, 70);
    lv_obj_set_x(ui_Time, 0);
    lv_obj_set_y(ui_Time, 40);
    lv_obj_set_align(ui_Time, LV_ALIGN_TOP_MID);
    lv_obj_set_flex_flow(ui_Time, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Time, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_add_flag(ui_Time, LV_OBJ_FLAG_IGNORE_LAYOUT);     /// Flags
    lv_obj_clear_flag(ui_Time, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Hour = lv_label_create(ui_Time);
    lv_obj_set_width(ui_Hour, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Hour, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Hour, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Hour, "00");
    lv_obj_set_style_text_color(ui_Hour, lv_color_hex(0x6F6F6F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Hour, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Hour, &ui_font_time, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Dots = lv_label_create(ui_Time);
    lv_obj_set_width(ui_Dots, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Dots, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Dots, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Dots, ":");
    lv_obj_set_style_text_color(ui_Dots, lv_color_hex(0x6F6F6F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Dots, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Dots, &ui_font_time, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Min = lv_label_create(ui_Time);
    lv_obj_set_width(ui_Min, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Min, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Min, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Min, "00");
    lv_obj_set_style_text_color(ui_Min, lv_color_hex(0x6F6F6F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Min, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Min, &ui_font_time, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Switch_Panel1 = lv_obj_create(ui_menu);
    lv_obj_set_width(ui_Switch_Panel1, 220);
    lv_obj_set_height(ui_Switch_Panel1, 180);
    lv_obj_set_x(ui_Switch_Panel1, 304);
    lv_obj_set_y(ui_Switch_Panel1, 136);
    lv_obj_set_align(ui_Switch_Panel1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Switch_Panel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Switch_Panel1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Switch_Panel1, 125, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Switch_Panel1, lv_color_hex(0xAAAAAA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Switch_Panel1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_blend_mode(ui_Switch_Panel1, LV_BLEND_MODE_NORMAL, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_OnOff_Button1 = lv_imgbtn_create(ui_Switch_Panel1);
    lv_imgbtn_set_src(ui_OnOff_Button1, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_1324367613, NULL);
    lv_imgbtn_set_src(ui_OnOff_Button1, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_1324367613, NULL);
    lv_imgbtn_set_src(ui_OnOff_Button1, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &ui_img_1324367613, NULL);
    lv_imgbtn_set_src(ui_OnOff_Button1, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui_img_1324367613, NULL);
    lv_obj_set_width(ui_OnOff_Button1, 90);
    lv_obj_set_height(ui_OnOff_Button1, 90);
    lv_obj_set_x(ui_OnOff_Button1, 0);
    lv_obj_set_y(ui_OnOff_Button1, -10);
    lv_obj_set_align(ui_OnOff_Button1, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_OnOff_Button1, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_IGNORE_LAYOUT);     /// Flags
    lv_obj_set_style_radius(ui_OnOff_Button1, 45, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_OnOff_Button1, lv_color_hex(0x919191), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_OnOff_Button1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_OnOff_Button1, 45, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_OnOff_Button1, lv_color_hex(0x00FF07), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_OnOff_Button1, 255, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_Switch_Label1 = lv_label_create(ui_Switch_Panel1);
    lv_obj_set_width(ui_Switch_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Switch_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Switch_Label1, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_Switch_Label1, "Switch 1");
    lv_obj_add_flag(ui_Switch_Label1, LV_OBJ_FLAG_IGNORE_LAYOUT);     /// Flags
    lv_obj_clear_flag(ui_Switch_Label1, LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE |
                      LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_Switch_Label1, lv_color_hex(0x505050), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Switch_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Switch_Label1, &ui_font_dmsans32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Light_Sensor = lv_obj_create(ui_menu);
    lv_obj_set_width(ui_Light_Sensor, 220);
    lv_obj_set_height(ui_Light_Sensor, 180);
    lv_obj_set_x(ui_Light_Sensor, 305);
    lv_obj_set_y(ui_Light_Sensor, 136);
    lv_obj_set_align(ui_Light_Sensor, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Light_Sensor, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Light_Sensor, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Light_Sensor, 125, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Light_Sensor, lv_color_hex(0xAAAAAA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Light_Sensor, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_blend_mode(ui_Light_Sensor, LV_BLEND_MODE_NORMAL, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Lux_Image = lv_img_create(ui_Light_Sensor);
    lv_img_set_src(ui_Lux_Image, &ui_img_brightness_png);
    lv_obj_set_width(ui_Lux_Image, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Lux_Image, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Lux_Image, 0);
    lv_obj_set_y(ui_Lux_Image, -10);
    lv_obj_set_align(ui_Lux_Image, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_Lux_Image, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Lux_Image, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Lux_Image, 255);

    ui_Lux_Container = lv_obj_create(ui_Light_Sensor);
    lv_obj_remove_style_all(ui_Lux_Container);
    lv_obj_set_width(ui_Lux_Container, 200);
    lv_obj_set_height(ui_Lux_Container, 50);
    lv_obj_set_align(ui_Lux_Container, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_flex_flow(ui_Lux_Container, LV_FLEX_FLOW_ROW_WRAP);
    lv_obj_set_flex_align(ui_Lux_Container, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_SPACE_AROUND);
    lv_obj_clear_flag(ui_Lux_Container, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Lux_Label = lv_label_create(ui_Lux_Container);
    lv_obj_set_width(ui_Lux_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Lux_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Lux_Label, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_Lux_Label, "0");
    lv_obj_set_style_text_color(ui_Lux_Label, lv_color_hex(0x505050), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Lux_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Lux_Label, &ui_font_dmsans32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Lux_unit = lv_label_create(ui_Lux_Container);
    lv_obj_set_width(ui_Lux_unit, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Lux_unit, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Lux_unit, 53);
    lv_obj_set_y(ui_Lux_unit, 51);
    lv_obj_set_align(ui_Lux_unit, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Lux_unit, " lux");
    lv_obj_set_style_text_color(ui_Lux_unit, lv_color_hex(0x525052), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Lux_unit, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Lux_unit, &ui_font_dmsans32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Switch_Panel2 = lv_obj_create(ui_menu);
    lv_obj_set_width(ui_Switch_Panel2, 220);
    lv_obj_set_height(ui_Switch_Panel2, 180);
    lv_obj_set_x(ui_Switch_Panel2, 304);
    lv_obj_set_y(ui_Switch_Panel2, 136);
    lv_obj_set_align(ui_Switch_Panel2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Switch_Panel2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Switch_Panel2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Switch_Panel2, 125, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Switch_Panel2, lv_color_hex(0xAAAAAA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Switch_Panel2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_blend_mode(ui_Switch_Panel2, LV_BLEND_MODE_NORMAL, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_OnOff_Button2 = lv_imgbtn_create(ui_Switch_Panel2);
    lv_imgbtn_set_src(ui_OnOff_Button2, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_1324367613, NULL);
    lv_imgbtn_set_src(ui_OnOff_Button2, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_1324367613, NULL);
    lv_imgbtn_set_src(ui_OnOff_Button2, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &ui_img_1324367613, NULL);
    lv_imgbtn_set_src(ui_OnOff_Button2, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui_img_1324367613, NULL);
    lv_obj_set_width(ui_OnOff_Button2, 90);
    lv_obj_set_height(ui_OnOff_Button2, 90);
    lv_obj_set_x(ui_OnOff_Button2, 0);
    lv_obj_set_y(ui_OnOff_Button2, -10);
    lv_obj_set_align(ui_OnOff_Button2, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_OnOff_Button2, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_IGNORE_LAYOUT);     /// Flags
    lv_obj_set_style_radius(ui_OnOff_Button2, 45, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_OnOff_Button2, lv_color_hex(0x919191), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_OnOff_Button2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_OnOff_Button2, 45, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_OnOff_Button2, lv_color_hex(0x00FF07), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_OnOff_Button2, 255, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_Switch_Label2 = lv_label_create(ui_Switch_Panel2);
    lv_obj_set_width(ui_Switch_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Switch_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Switch_Label2, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_Switch_Label2, "Switch 2");
    lv_obj_add_flag(ui_Switch_Label2, LV_OBJ_FLAG_IGNORE_LAYOUT);     /// Flags
    lv_obj_clear_flag(ui_Switch_Label2, LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE |
                      LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_Switch_Label2, lv_color_hex(0x505050), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Switch_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Switch_Label2, &ui_font_dmsans32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Switch_Panel3 = lv_obj_create(ui_menu);
    lv_obj_set_width(ui_Switch_Panel3, 220);
    lv_obj_set_height(ui_Switch_Panel3, 180);
    lv_obj_set_x(ui_Switch_Panel3, 304);
    lv_obj_set_y(ui_Switch_Panel3, 136);
    lv_obj_set_align(ui_Switch_Panel3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Switch_Panel3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Switch_Panel3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Switch_Panel3, 125, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Switch_Panel3, lv_color_hex(0xAAAAAA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Switch_Panel3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_blend_mode(ui_Switch_Panel3, LV_BLEND_MODE_NORMAL, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_OnOff_Button3 = lv_imgbtn_create(ui_Switch_Panel3);
    lv_imgbtn_set_src(ui_OnOff_Button3, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_1324367613, NULL);
    lv_imgbtn_set_src(ui_OnOff_Button3, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_1324367613, NULL);
    lv_imgbtn_set_src(ui_OnOff_Button3, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &ui_img_1324367613, NULL);
    lv_imgbtn_set_src(ui_OnOff_Button3, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui_img_1324367613, NULL);
    lv_obj_set_width(ui_OnOff_Button3, 90);
    lv_obj_set_height(ui_OnOff_Button3, 90);
    lv_obj_set_x(ui_OnOff_Button3, 0);
    lv_obj_set_y(ui_OnOff_Button3, -10);
    lv_obj_set_align(ui_OnOff_Button3, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_OnOff_Button3, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_IGNORE_LAYOUT);     /// Flags
    lv_obj_set_style_radius(ui_OnOff_Button3, 45, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_OnOff_Button3, lv_color_hex(0x919191), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_OnOff_Button3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_OnOff_Button3, 45, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_OnOff_Button3, lv_color_hex(0x00FF07), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_OnOff_Button3, 255, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_Switch_Label3 = lv_label_create(ui_Switch_Panel3);
    lv_obj_set_width(ui_Switch_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Switch_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Switch_Label3, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_Switch_Label3, "Switch 3");
    lv_obj_add_flag(ui_Switch_Label3, LV_OBJ_FLAG_IGNORE_LAYOUT);     /// Flags
    lv_obj_clear_flag(ui_Switch_Label3, LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE |
                      LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_Switch_Label3, lv_color_hex(0x505050), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Switch_Label3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Switch_Label3, &ui_font_dmsans32, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_OnOff_Button1, ui_event_OnOff_Button1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_OnOff_Button2, ui_event_OnOff_Button2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_OnOff_Button3, ui_event_OnOff_Button3, LV_EVENT_ALL, NULL);

}
