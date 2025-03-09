SET(SOURCES ui_comp_box.c
    ui_comp.c
    ui_Screen1.c
    ui.c
    ui_comp_hook.c
    ui_helpers.c
    ui_img_background_png.c
    ui_img_logoptit_png.c
    ui_img_doam_png.c
    ui_img_nhietdo_png.c
    ui_img_powerbutton_png.c
    ui_img_lightoff_png.c
    ui_img_lighton_png.c
    ui_img_brightness_png.c
    fonts/ui_font_dmsans32.c
    fonts/ui_font_dmsans40.c
    fonts/ui_font_time.c)

add_library(ui ${SOURCES})
