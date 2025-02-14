// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "ui.h"

void ui_RGB1_Screen_screen_init(void)
{
    ui_RGB1_Screen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_RGB1_Screen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_flex_flow(ui_RGB1_Screen, LV_FLEX_FLOW_COLUMN_WRAP);
    lv_obj_set_flex_align(ui_RGB1_Screen, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_SPACE_EVENLY);
    lv_obj_set_style_bg_color(ui_RGB1_Screen, lv_color_hex(0xFF00EE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_RGB1_Screen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_RGB1_Screen, lv_color_hex(0x2400FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_RGB1_Screen, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RGB1_Color_Container = lv_obj_create(ui_RGB1_Screen);
    lv_obj_remove_style_all(ui_RGB1_Color_Container);
    lv_obj_set_width(ui_RGB1_Color_Container, 300);
    lv_obj_set_height(ui_RGB1_Color_Container, 240);
    lv_obj_set_x(ui_RGB1_Color_Container, -32);
    lv_obj_set_y(ui_RGB1_Color_Container, 33);
    lv_obj_set_align(ui_RGB1_Color_Container, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_RGB1_Color_Container, LV_FLEX_FLOW_COLUMN_WRAP);
    lv_obj_set_flex_align(ui_RGB1_Color_Container, LV_FLEX_ALIGN_SPACE_AROUND, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_RGB1_Color_Container, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_RGB1_Color_Container, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_RGB1_Color_Container, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_RGB1_Color_Container, 200, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RGB1_Colorwheel = lv_colorwheel_create(ui_RGB1_Color_Container, true);
    lv_obj_set_width(ui_RGB1_Colorwheel, 150);
    lv_obj_set_height(ui_RGB1_Colorwheel, 150);
    lv_obj_set_align(ui_RGB1_Colorwheel, LV_ALIGN_CENTER);
    lv_obj_set_scrollbar_mode(ui_RGB1_Colorwheel, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_scroll_dir(ui_RGB1_Colorwheel, LV_DIR_TOP);

    ui_Color1_Label = lv_label_create(ui_RGB1_Color_Container);
    lv_obj_set_width(ui_Color1_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Color1_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Color1_Label, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Color1_Label, "Color");
    lv_obj_set_style_text_color(ui_Color1_Label, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Color1_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Color1_Label, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RGB1_Brightness_Container = lv_obj_create(ui_RGB1_Screen);
    lv_obj_remove_style_all(ui_RGB1_Brightness_Container);
    lv_obj_set_width(ui_RGB1_Brightness_Container, 300);
    lv_obj_set_height(ui_RGB1_Brightness_Container, 240);
    lv_obj_set_x(ui_RGB1_Brightness_Container, -32);
    lv_obj_set_y(ui_RGB1_Brightness_Container, 33);
    lv_obj_set_align(ui_RGB1_Brightness_Container, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_RGB1_Brightness_Container, LV_FLEX_FLOW_COLUMN_WRAP);
    lv_obj_set_flex_align(ui_RGB1_Brightness_Container, LV_FLEX_ALIGN_SPACE_EVENLY, LV_FLEX_ALIGN_CENTER,
                          LV_FLEX_ALIGN_SPACE_EVENLY);
    lv_obj_clear_flag(ui_RGB1_Brightness_Container, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_RGB1_Brightness_Container, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_RGB1_Brightness_Container, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_RGB1_Brightness_Container, 200, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RGB1_Brightness_Arc = lv_arc_create(ui_RGB1_Brightness_Container);
    lv_obj_set_width(ui_RGB1_Brightness_Arc, 150);
    lv_obj_set_height(ui_RGB1_Brightness_Arc, 150);
    lv_obj_set_x(ui_RGB1_Brightness_Arc, -16);
    lv_obj_set_y(ui_RGB1_Brightness_Arc, -143);
    lv_obj_set_align(ui_RGB1_Brightness_Arc, LV_ALIGN_CENTER);
    lv_arc_set_value(ui_RGB1_Brightness_Arc, 0);
    lv_obj_set_style_arc_color(ui_RGB1_Brightness_Arc, lv_color_hex(0x838383), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_RGB1_Brightness_Arc, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_RGB1_Brightness_Arc, 8, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_RGB1_Brightness_Arc, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_RGB1_Brightness_Arc, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_RGB1_Brightness_Arc, 10, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_RGB1_Brightness_Arc, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_RGB1_Brightness_Arc, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_RGB1_Brightness_Label = lv_label_create(ui_RGB1_Brightness_Container);
    lv_obj_set_width(ui_RGB1_Brightness_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_RGB1_Brightness_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_RGB1_Brightness_Label, LV_ALIGN_CENTER);
    lv_label_set_text(ui_RGB1_Brightness_Label, "Brightness");
    lv_obj_set_style_text_color(ui_RGB1_Brightness_Label, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_RGB1_Brightness_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_RGB1_Brightness_Label, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RGB1_Back = lv_imgbtn_create(ui_RGB1_Screen);
    lv_imgbtn_set_src(ui_RGB1_Back, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_2001105536, NULL);
    lv_imgbtn_set_src(ui_RGB1_Back, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_2001105536, NULL);
    lv_imgbtn_set_src(ui_RGB1_Back, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui_img_2001105536, NULL);
    lv_obj_set_width(ui_RGB1_Back, 50);
    lv_obj_set_height(ui_RGB1_Back, 50);
    lv_obj_set_x(ui_RGB1_Back, 0);
    lv_obj_set_y(ui_RGB1_Back, -5);
    lv_obj_set_align(ui_RGB1_Back, LV_ALIGN_BOTTOM_LEFT);
    lv_obj_add_flag(ui_RGB1_Back, LV_OBJ_FLAG_IGNORE_LAYOUT);     /// Flags
    lv_obj_set_style_radius(ui_RGB1_Back, 10, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_RGB1_Back, lv_color_hex(0xD3D3D3), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_RGB1_Back, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_RGB1_Menu = lv_imgbtn_create(ui_RGB1_Screen);
    lv_imgbtn_set_src(ui_RGB1_Menu, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_1987010666, NULL);
    lv_imgbtn_set_src(ui_RGB1_Menu, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_1987010666, NULL);
    lv_imgbtn_set_src(ui_RGB1_Menu, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui_img_1987010666, NULL);
    lv_obj_set_width(ui_RGB1_Menu, 60);
    lv_obj_set_height(ui_RGB1_Menu, 60);
    lv_obj_set_align(ui_RGB1_Menu, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_RGB1_Menu, LV_OBJ_FLAG_IGNORE_LAYOUT);     /// Flags
    lv_obj_set_style_radius(ui_RGB1_Menu, 10, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_RGB1_Menu, lv_color_hex(0xD3D3D3), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_RGB1_Menu, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_RGB1_Next = lv_imgbtn_create(ui_RGB1_Screen);
    lv_imgbtn_set_src(ui_RGB1_Next, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_115668498, NULL);
    lv_imgbtn_set_src(ui_RGB1_Next, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_115668498, NULL);
    lv_imgbtn_set_src(ui_RGB1_Next, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui_img_115668498, NULL);
    lv_obj_set_width(ui_RGB1_Next, 50);
    lv_obj_set_height(ui_RGB1_Next, 50);
    lv_obj_set_x(ui_RGB1_Next, 0);
    lv_obj_set_y(ui_RGB1_Next, -5);
    lv_obj_set_align(ui_RGB1_Next, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_add_flag(ui_RGB1_Next, LV_OBJ_FLAG_IGNORE_LAYOUT);     /// Flags
    lv_obj_set_style_radius(ui_RGB1_Next, 10, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_RGB1_Next, lv_color_hex(0xD3D3D3), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_RGB1_Next, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_RGB1_Text = lv_label_create(ui_RGB1_Screen);
    lv_obj_set_width(ui_RGB1_Text, 150);
    lv_obj_set_height(ui_RGB1_Text, 50);
    lv_obj_set_x(ui_RGB1_Text, 0);
    lv_obj_set_y(ui_RGB1_Text, 20);
    lv_obj_set_align(ui_RGB1_Text, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_RGB1_Text, "RGB 1");
    lv_obj_add_flag(ui_RGB1_Text, LV_OBJ_FLAG_IGNORE_LAYOUT);     /// Flags
    lv_obj_set_style_text_color(ui_RGB1_Text, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_RGB1_Text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_RGB1_Text, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_RGB1_Text, &lv_font_montserrat_44, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_RGB1_Text, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_RGB1_Text, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_RGB1_Text, 150, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_RGB1_Colorwheel, ui_event_RGB1_Colorwheel, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_RGB1_Brightness_Arc, ui_event_RGB1_Brightness_Arc, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_RGB1_Back, ui_event_RGB1_Back, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_RGB1_Menu, ui_event_RGB1_Menu, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_RGB1_Next, ui_event_RGB1_Next, LV_EVENT_ALL, NULL);

}
