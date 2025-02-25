// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "ui.h"

void ui_Menu_Screen_screen_init(void)
{
    ui_Menu_Screen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Menu_Screen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_flex_flow(ui_Menu_Screen, LV_FLEX_FLOW_COLUMN_WRAP);
    lv_obj_set_flex_align(ui_Menu_Screen, LV_FLEX_ALIGN_SPACE_EVENLY, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_SPACE_AROUND);
    lv_obj_set_style_radius(ui_Menu_Screen, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Menu_Screen, lv_color_hex(0x28D567), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Menu_Screen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Menu_Screen, lv_color_hex(0x28518E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_Menu_Screen, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_Menu_Screen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Menu_Screen, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Device1_Panel = ui_config_create(ui_Menu_Screen);
    lv_obj_set_x(ui_Device1_Panel, 0);
    lv_obj_set_y(ui_Device1_Panel, 0);


    lv_label_set_text(ui_comp_get_child(ui_Device1_Panel, UI_COMP_CONFIG_OBJECT), "Device 1");

    ui_fan_image1 = lv_img_create(ui_Device1_Panel);
    lv_img_set_src(ui_fan_image1, &ui_img_fan_png);
    lv_obj_set_width(ui_fan_image1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_fan_image1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_fan_image1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_fan_image1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_fan_image1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Light1_Panel = ui_config_create(ui_Menu_Screen);
    lv_obj_set_x(ui_Light1_Panel, 0);
    lv_obj_set_y(ui_Light1_Panel, 0);


    lv_label_set_text(ui_comp_get_child(ui_Light1_Panel, UI_COMP_CONFIG_OBJECT), "Light 1");

    ui_light_image1 = lv_img_create(ui_Light1_Panel);
    lv_img_set_src(ui_light_image1, &ui_img_light_png);
    lv_obj_set_width(ui_light_image1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_light_image1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_light_image1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_light_image1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_light_image1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Device2_Panel = ui_config_create(ui_Menu_Screen);
    lv_obj_set_x(ui_Device2_Panel, 0);
    lv_obj_set_y(ui_Device2_Panel, 0);


    lv_label_set_text(ui_comp_get_child(ui_Device2_Panel, UI_COMP_CONFIG_OBJECT), "Device 2");

    ui_fan_image2 = lv_img_create(ui_Device2_Panel);
    lv_img_set_src(ui_fan_image2, &ui_img_fan_png);
    lv_obj_set_width(ui_fan_image2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_fan_image2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_fan_image2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_fan_image2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_fan_image2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Light2_Panel = ui_config_create(ui_Menu_Screen);
    lv_obj_set_x(ui_Light2_Panel, 0);
    lv_obj_set_y(ui_Light2_Panel, 0);


    lv_label_set_text(ui_comp_get_child(ui_Light2_Panel, UI_COMP_CONFIG_OBJECT), "Light 2");

    ui_light_image2 = lv_img_create(ui_Light2_Panel);
    lv_img_set_src(ui_light_image2, &ui_img_light_png);
    lv_obj_set_width(ui_light_image2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_light_image2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_light_image2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_light_image2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_light_image2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_RGB1_Panel = ui_config_create(ui_Menu_Screen);
    lv_obj_set_x(ui_RGB1_Panel, 0);
    lv_obj_set_y(ui_RGB1_Panel, 0);


    lv_label_set_text(ui_comp_get_child(ui_RGB1_Panel, UI_COMP_CONFIG_OBJECT), "RGB 1");

    ui_rgb_image1 = lv_img_create(ui_RGB1_Panel);
    lv_img_set_src(ui_rgb_image1, &ui_img_color_png);
    lv_obj_set_width(ui_rgb_image1, 80);
    lv_obj_set_height(ui_rgb_image1, 80);
    lv_obj_set_align(ui_rgb_image1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_rgb_image1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_rgb_image1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Light3_Panel = ui_config_create(ui_Menu_Screen);
    lv_obj_set_x(ui_Light3_Panel, 0);
    lv_obj_set_y(ui_Light3_Panel, 0);


    lv_label_set_text(ui_comp_get_child(ui_Light3_Panel, UI_COMP_CONFIG_OBJECT), "Light 3");

    ui_light_image3 = lv_img_create(ui_Light3_Panel);
    lv_img_set_src(ui_light_image3, &ui_img_light_png);
    lv_obj_set_width(ui_light_image3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_light_image3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_light_image3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_light_image3, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_light_image3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Rgb2_Panel = ui_config_create(ui_Menu_Screen);
    lv_obj_set_x(ui_Rgb2_Panel, -2);
    lv_obj_set_y(ui_Rgb2_Panel, -7);


    lv_label_set_text(ui_comp_get_child(ui_Rgb2_Panel, UI_COMP_CONFIG_OBJECT), "RGB 2");

    ui_rgb_image2 = lv_img_create(ui_Rgb2_Panel);
    lv_img_set_src(ui_rgb_image2, &ui_img_color_png);
    lv_obj_set_width(ui_rgb_image2, 80);
    lv_obj_set_height(ui_rgb_image2, 80);
    lv_obj_set_align(ui_rgb_image2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_rgb_image2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_rgb_image2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Light_4_Panel = ui_config_create(ui_Menu_Screen);
    lv_obj_set_x(ui_Light_4_Panel, 0);
    lv_obj_set_y(ui_Light_4_Panel, 0);


    lv_label_set_text(ui_comp_get_child(ui_Light_4_Panel, UI_COMP_CONFIG_OBJECT), "Light 4");

    ui_light_image_4 = lv_img_create(ui_Light_4_Panel);
    lv_img_set_src(ui_light_image_4, &ui_img_light_png);
    lv_obj_set_width(ui_light_image_4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_light_image_4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_light_image_4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_light_image_4, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_light_image_4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_light_image_4, 15, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_comp_get_child(ui_Device1_Panel, UI_COMP_CONFIG_IMGBUTTON1),
                        ui_event_Device1_Panel_Device1_Panel_Bat_Tat_Device1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_comp_get_child(ui_Light1_Panel, UI_COMP_CONFIG_IMGBUTTON1),
                        ui_event_Light1_Panel_Light1_Panel_Bat_Tat_Light1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Light1_Panel, ui_event_Light1_Panel_config, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_comp_get_child(ui_Device2_Panel, UI_COMP_CONFIG_IMGBUTTON1),
                        ui_event_Device2_Panel_Device2_Panel_Bat_Tat_Device2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_comp_get_child(ui_Light2_Panel, UI_COMP_CONFIG_IMGBUTTON1),
                        ui_event_Light2_Panel_Light2_Panel_Bat_Tat_Light2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Light2_Panel, ui_event_Light2_Panel_config, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_comp_get_child(ui_RGB1_Panel, UI_COMP_CONFIG_IMGBUTTON1),
                        ui_event_RGB1_Panel_RGB1_Panel_Bat_Tat_RGB1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_RGB1_Panel, ui_event_RGB1_Panel_config, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_comp_get_child(ui_Light3_Panel, UI_COMP_CONFIG_IMGBUTTON1),
                        ui_event_Light3_Panel_Light3_Panel_Bat_Tat_Light3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Light3_Panel, ui_event_Light3_Panel_config, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_comp_get_child(ui_Rgb2_Panel, UI_COMP_CONFIG_IMGBUTTON1),
                        ui_event_Rgb2_Panel_Rgb2_Panel_Bat_Tat_RGB2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Rgb2_Panel, ui_event_Rgb2_Panel_config, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_comp_get_child(ui_Light_4_Panel, UI_COMP_CONFIG_IMGBUTTON1),
                        ui_event_Light_4_Panel_Light_4_Panel_Bat_Tat_Light4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Light_4_Panel, ui_event_Light_4_Panel_config, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Menu_Screen, ui_event_Menu_Screen, LV_EVENT_ALL, NULL);

}
