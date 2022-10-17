// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.5
// LVGL VERSION: 8.2
// PROJECT: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_HOME;
lv_obj_t * ui_FAN;
lv_obj_t * ui_TIME;
lv_obj_t * ui_Label1;
lv_obj_t * ui_Label2;
lv_obj_t * ui_WATER;
lv_obj_t * ui_TIME1;
lv_obj_t * ui_Label3;
lv_obj_t * ui_Label4;
lv_obj_t * ui_LIGHT;
lv_obj_t * ui_TIME2;
lv_obj_t * ui_Label5;
lv_obj_t * ui_Label6;
lv_obj_t * ui_BLOOD;
lv_obj_t * ui_TIME3;
lv_obj_t * ui_Label7;
lv_obj_t * ui_Label8;
lv_obj_t * ui_Label16;
lv_obj_t * ui_PAGE1;
lv_obj_t * ui_Time;
lv_obj_t * ui_Roller1;
lv_obj_t * ui_Label13;
lv_obj_t * ui_Label14;
lv_obj_t * ui_Button2;
lv_obj_t * ui_Label10;
lv_obj_t * ui_Panel5;
lv_obj_t * ui_Label11;
lv_obj_t * ui_Panel7;
lv_obj_t * ui_Label15;
lv_obj_t * ui_Panel6;
lv_obj_t * ui_Label12;
lv_obj_t * ui_Slider1;
lv_obj_t * ui_Label17;
lv_obj_t * ui_Switch1;
lv_obj_t * ui_PAGE2;
lv_obj_t * ui_Time1;
lv_obj_t * ui_Roller2;
lv_obj_t * ui_Label18;
lv_obj_t * ui_Label19;
lv_obj_t * ui_Button1;
lv_obj_t * ui_Label21;
lv_obj_t * ui_Panel1;
lv_obj_t * ui_Label22;
lv_obj_t * ui_Panel2;
lv_obj_t * ui_Label23;
lv_obj_t * ui_Label25;
lv_obj_t * ui_Switch2;
lv_obj_t * ui_PAGE3;
lv_obj_t * ui_Time2;
lv_obj_t * ui_Roller3;
lv_obj_t * ui_Label9;
lv_obj_t * ui_Label20;
lv_obj_t * ui_Button3;
lv_obj_t * ui_Label24;
lv_obj_t * ui_Panel3;
lv_obj_t * ui_Label26;
lv_obj_t * ui_Panel4;
lv_obj_t * ui_Label27;
lv_obj_t * ui_Label28;
lv_obj_t * ui_Switch3;
lv_obj_t * ui_Panel8;
lv_obj_t * ui_Label29;
lv_obj_t * ui_Button4;
lv_obj_t * ui_COLORPAGE_;
lv_obj_t * ui_Colorwheel1;
lv_obj_t * ui_Button5;
lv_obj_t * ui_Label30;
lv_obj_t * ui_PAGE4;
lv_obj_t * ui_Button6;
lv_obj_t * ui_Label33;
lv_obj_t * ui_Label36;
lv_obj_t * ui_Switch4;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "#error LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

// ui_EloAnimation0
// FUNCTION HEADER
void ANM1_Animation(lv_obj_t * TargetObject, int delay);

// FUNCTION
void ANM1_Animation(lv_obj_t * TargetObject, int delay)
{

}

///////////////////// FUNCTIONS ////////////////////
static void ui_event_FAN(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_PAGE1, LV_SCR_LOAD_ANIM_MOVE_BOTTOM, 500, 0);
    }
}
static void ui_event_TIME(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_PAGE1, LV_SCR_LOAD_ANIM_MOVE_BOTTOM, 500, 0);
    }
}
static void ui_event_Label2(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_PAGE1, LV_SCR_LOAD_ANIM_MOVE_BOTTOM, 500, 0);
    }
}
static void ui_event_WATER(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_PAGE2, LV_SCR_LOAD_ANIM_MOVE_BOTTOM, 500, 0);
    }
}
static void ui_event_TIME1(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_PAGE2, LV_SCR_LOAD_ANIM_MOVE_BOTTOM, 500, 0);
    }
}
static void ui_event_LIGHT(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_PAGE3, LV_SCR_LOAD_ANIM_MOVE_BOTTOM, 500, 0);
    }
}
static void ui_event_TIME2(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_PAGE3, LV_SCR_LOAD_ANIM_MOVE_BOTTOM, 500, 0);
    }
}
static void ui_event_BLOOD(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_PAGE4, LV_SCR_LOAD_ANIM_MOVE_BOTTOM, 500, 0);
    }
}
static void ui_event_TIME3(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_PAGE4, LV_SCR_LOAD_ANIM_MOVE_BOTTOM, 500, 0);
    }
}
static void ui_event_Button2(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_HOME, LV_SCR_LOAD_ANIM_MOVE_TOP, 500, 0);
    }
}
static void ui_event_Button1(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_HOME, LV_SCR_LOAD_ANIM_MOVE_TOP, 500, 0);
    }
}
static void ui_event_Button3(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_HOME, LV_SCR_LOAD_ANIM_MOVE_TOP, 500, 0);
    }
}
static void ui_event_Button4(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_COLORPAGE_, LV_SCR_LOAD_ANIM_MOVE_BOTTOM, 500, 0);
    }
}
static void ui_event_Button5(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_PAGE3, LV_SCR_LOAD_ANIM_MOVE_TOP, 500, 0);
    }
}
static void ui_event_Button6(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_HOME, LV_SCR_LOAD_ANIM_MOVE_TOP, 500, 0);
    }
}

static void ui_event_Switch1(lv_event_t * e)
{
	lv_event_code_t event = lv_event_get_code(e);
	lv_obj_t * ta = lv_event_get_target(e);
	if(event == LV_EVENT_VALUE_CHANGED)
	{
		if(lv_obj_has_state(ui_Switch1,LV_STATE_CHECKED)== true)	//当开关被打开
		{
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_SET);
		}
		else	//当开关被关闭
		{
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_RESET);
		}
	}
}

///////////////////// SCREENS ////////////////////
void ui_HOME_screen_init(void)
{

    // ui_HOME

    ui_HOME = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_HOME, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_HOME, lv_color_hex(0x3F4857), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_HOME, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_FAN

    ui_FAN = lv_obj_create(ui_HOME);

    lv_obj_set_width(ui_FAN, 120);
    lv_obj_set_height(ui_FAN, 120);

    lv_obj_set_x(ui_FAN, -60);
    lv_obj_set_y(ui_FAN, -120);

    lv_obj_set_align(ui_FAN, LV_ALIGN_BOTTOM_MID);

    lv_obj_clear_flag(ui_FAN, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_FAN, ui_event_FAN, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_FAN, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_FAN, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_TIME

    ui_TIME = lv_obj_create(ui_FAN);

    lv_obj_set_width(ui_TIME, 108);
    lv_obj_set_height(ui_TIME, 50);

    lv_obj_set_x(ui_TIME, 0);
    lv_obj_set_y(ui_TIME, -30);

    lv_obj_set_align(ui_TIME, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_TIME, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_TIME, ui_event_TIME, LV_EVENT_ALL, NULL);

    // ui_Label1

    ui_Label1 = lv_label_create(ui_TIME);

    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label1, 0);
    lv_obj_set_y(ui_Label1, 0);

    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label1, "00:00:00");

    lv_obj_set_style_text_font(ui_Label1, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label2

    ui_Label2 = lv_label_create(ui_FAN);

    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label2, 0);
    lv_obj_set_y(ui_Label2, 20);

    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label2, "热风");

    lv_obj_add_event_cb(ui_Label2, ui_event_Label2, LV_EVENT_ALL, NULL);
    lv_obj_set_style_text_color(ui_Label2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label2, &ui_font_Font1, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_WATER

    ui_WATER = lv_obj_create(ui_HOME);

    lv_obj_set_width(ui_WATER, 120);
    lv_obj_set_height(ui_WATER, 120);

    lv_obj_set_x(ui_WATER, 60);
    lv_obj_set_y(ui_WATER, -120);

    lv_obj_set_align(ui_WATER, LV_ALIGN_BOTTOM_MID);

    lv_obj_clear_flag(ui_WATER, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_WATER, ui_event_WATER, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_WATER, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_WATER, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_TIME1

    ui_TIME1 = lv_obj_create(ui_WATER);

    lv_obj_set_width(ui_TIME1, 108);
    lv_obj_set_height(ui_TIME1, 50);

    lv_obj_set_x(ui_TIME1, 0);
    lv_obj_set_y(ui_TIME1, -30);

    lv_obj_set_align(ui_TIME1, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_TIME1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_TIME1, ui_event_TIME1, LV_EVENT_ALL, NULL);

    // ui_Label3

    ui_Label3 = lv_label_create(ui_TIME1);

    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label3, 0);
    lv_obj_set_y(ui_Label3, 0);

    lv_obj_set_align(ui_Label3, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label3, "00:00:00");

    lv_obj_set_style_text_font(ui_Label3, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label4

    ui_Label4 = lv_label_create(ui_WATER);

    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label4, 0);
    lv_obj_set_y(ui_Label4, 20);

    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label4, "雾化");

    lv_obj_set_style_text_color(ui_Label4, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label4, &ui_font_Font1, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_LIGHT

    ui_LIGHT = lv_obj_create(ui_HOME);

    lv_obj_set_width(ui_LIGHT, 120);
    lv_obj_set_height(ui_LIGHT, 120);

    lv_obj_set_x(ui_LIGHT, -60);
    lv_obj_set_y(ui_LIGHT, 0);

    lv_obj_set_align(ui_LIGHT, LV_ALIGN_BOTTOM_MID);

    lv_obj_clear_flag(ui_LIGHT, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_LIGHT, ui_event_LIGHT, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_LIGHT, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_LIGHT, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_TIME2

    ui_TIME2 = lv_obj_create(ui_LIGHT);

    lv_obj_set_width(ui_TIME2, 108);
    lv_obj_set_height(ui_TIME2, 50);

    lv_obj_set_x(ui_TIME2, 0);
    lv_obj_set_y(ui_TIME2, -30);

    lv_obj_set_align(ui_TIME2, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_TIME2, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_TIME2, ui_event_TIME2, LV_EVENT_ALL, NULL);

    // ui_Label5

    ui_Label5 = lv_label_create(ui_TIME2);

    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label5, 0);
    lv_obj_set_y(ui_Label5, 0);

    lv_obj_set_align(ui_Label5, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label5, "00:00:00");

    lv_obj_set_style_text_font(ui_Label5, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label6

    ui_Label6 = lv_label_create(ui_LIGHT);

    lv_obj_set_width(ui_Label6, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label6, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label6, 0);
    lv_obj_set_y(ui_Label6, 20);

    lv_obj_set_align(ui_Label6, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label6, "光照");

    lv_obj_set_style_text_color(ui_Label6, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label6, &ui_font_Font1, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_BLOOD

    ui_BLOOD = lv_obj_create(ui_HOME);

    lv_obj_set_width(ui_BLOOD, 120);
    lv_obj_set_height(ui_BLOOD, 120);

    lv_obj_set_x(ui_BLOOD, 60);
    lv_obj_set_y(ui_BLOOD, 0);

    lv_obj_set_align(ui_BLOOD, LV_ALIGN_BOTTOM_MID);

    lv_obj_clear_flag(ui_BLOOD, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_BLOOD, ui_event_BLOOD, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_BLOOD, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BLOOD, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_TIME3

    ui_TIME3 = lv_obj_create(ui_BLOOD);

    lv_obj_set_width(ui_TIME3, 108);
    lv_obj_set_height(ui_TIME3, 50);

    lv_obj_set_x(ui_TIME3, 0);
    lv_obj_set_y(ui_TIME3, -30);

    lv_obj_set_align(ui_TIME3, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_TIME3, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_TIME3, ui_event_TIME3, LV_EVENT_ALL, NULL);

    // ui_Label7

    ui_Label7 = lv_label_create(ui_TIME3);

    lv_obj_set_width(ui_Label7, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label7, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label7, 0);
    lv_obj_set_y(ui_Label7, 0);

    lv_obj_set_align(ui_Label7, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label7, "00:00:00");

    lv_obj_set_style_text_font(ui_Label7, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label8

    ui_Label8 = lv_label_create(ui_BLOOD);

    lv_obj_set_width(ui_Label8, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label8, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label8, 0);
    lv_obj_set_y(ui_Label8, 20);

    lv_obj_set_align(ui_Label8, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label8, "血压");

    lv_obj_set_style_text_color(ui_Label8, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label8, &ui_font_Font1, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label16

    ui_Label16 = lv_label_create(ui_HOME);

    lv_obj_set_width(ui_Label16, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label16, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label16, 0);
    lv_obj_set_y(ui_Label16, 20);

    lv_obj_set_align(ui_Label16, LV_ALIGN_TOP_MID);

    lv_label_set_text(ui_Label16, "主页");

    lv_obj_set_style_text_font(ui_Label16, &ui_font_Font1, LV_PART_MAIN | LV_STATE_DEFAULT);

}
void ui_PAGE1_screen_init(void)
{

    // ui_PAGE1

    ui_PAGE1 = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_PAGE1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_PAGE1, lv_color_hex(0x394852), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PAGE1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Time

    ui_Time = lv_obj_create(ui_PAGE1);

    lv_obj_set_width(ui_Time, 240);
    lv_obj_set_height(ui_Time, 102);

    lv_obj_set_x(ui_Time, 0);
    lv_obj_set_y(ui_Time, -60);

    lv_obj_set_align(ui_Time, LV_ALIGN_BOTTOM_MID);

    lv_obj_clear_flag(ui_Time, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_Time, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Time, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Time, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Time, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Roller1

    ui_Roller1 = lv_roller_create(ui_Time);
    lv_roller_set_options(ui_Roller1, "0\n10\n20\n30\n40\n50\n60", LV_ROLLER_MODE_NORMAL);

    lv_obj_set_width(ui_Roller1, 80);
    lv_obj_set_height(ui_Roller1, 100);

    lv_obj_set_x(ui_Roller1, 0);
    lv_obj_set_y(ui_Roller1, 0);

    lv_obj_set_align(ui_Roller1, LV_ALIGN_CENTER);

    lv_obj_set_style_text_font(ui_Roller1, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Roller1, lv_color_hex(0x394852), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Roller1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label13

    ui_Label13 = lv_label_create(ui_Time);

    lv_obj_set_width(ui_Label13, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label13, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label13, 0);
    lv_obj_set_y(ui_Label13, 0);

    lv_obj_set_align(ui_Label13, LV_ALIGN_LEFT_MID);

    lv_label_set_text(ui_Label13, "定时");

    lv_obj_set_style_text_font(ui_Label13, &ui_font_Font1, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label14

    ui_Label14 = lv_label_create(ui_Time);

    lv_obj_set_width(ui_Label14, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label14, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label14, 0);
    lv_obj_set_y(ui_Label14, 0);

    lv_obj_set_align(ui_Label14, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_Label14, "分钟");

    lv_obj_set_style_text_font(ui_Label14, &ui_font_Font1, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Button2

    ui_Button2 = lv_btn_create(ui_PAGE1);

    lv_obj_set_width(ui_Button2, 80);
    lv_obj_set_height(ui_Button2, 40);

    lv_obj_set_x(ui_Button2, 60);
    lv_obj_set_y(ui_Button2, -10);

    lv_obj_set_align(ui_Button2, LV_ALIGN_BOTTOM_MID);

    lv_obj_add_flag(ui_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Button2, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Button2, ui_event_Button2, LV_EVENT_ALL, NULL);

    // ui_Label10

    ui_Label10 = lv_label_create(ui_Button2);

    lv_obj_set_width(ui_Label10, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label10, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label10, 0);
    lv_obj_set_y(ui_Label10, 0);

    lv_obj_set_align(ui_Label10, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label10, "返回");

    lv_obj_set_style_text_font(ui_Label10, &ui_font_Font1, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Panel5

    ui_Panel5 = lv_obj_create(ui_PAGE1);

    lv_obj_set_width(ui_Panel5, 240);
    lv_obj_set_height(ui_Panel5, 50);

    lv_obj_set_x(ui_Panel5, 0);
    lv_obj_set_y(ui_Panel5, 50);

    lv_obj_set_align(ui_Panel5, LV_ALIGN_TOP_MID);

    lv_obj_clear_flag(ui_Panel5, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Panel5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label11

    ui_Label11 = lv_label_create(ui_Panel5);

    lv_obj_set_width(ui_Label11, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label11, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label11, 0);
    lv_obj_set_y(ui_Label11, 0);

    lv_obj_set_align(ui_Label11, LV_ALIGN_LEFT_MID);

    lv_label_set_text(ui_Label11, "当前时间");

    lv_obj_set_style_text_color(ui_Label11, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label11, &ui_font_Font1, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Panel7

    ui_Panel7 = lv_obj_create(ui_Panel5);

    lv_obj_set_width(ui_Panel7, 120);
    lv_obj_set_height(ui_Panel7, 40);

    lv_obj_set_x(ui_Panel7, 0);
    lv_obj_set_y(ui_Panel7, 0);

    lv_obj_set_align(ui_Panel7, LV_ALIGN_RIGHT_MID);

    lv_obj_clear_flag(ui_Panel7, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Label15

    ui_Label15 = lv_label_create(ui_Panel7);

    lv_obj_set_width(ui_Label15, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label15, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label15, 0);
    lv_obj_set_y(ui_Label15, 0);

    lv_obj_set_align(ui_Label15, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label15, "00:00:00");

    lv_obj_set_style_text_font(ui_Label15, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Panel6

    ui_Panel6 = lv_obj_create(ui_PAGE1);

    lv_obj_set_width(ui_Panel6, 240);
    lv_obj_set_height(ui_Panel6, 50);

    lv_obj_set_x(ui_Panel6, 0);
    lv_obj_set_y(ui_Panel6, 105);

    lv_obj_set_align(ui_Panel6, LV_ALIGN_TOP_MID);

    lv_obj_clear_flag(ui_Panel6, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Panel6, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label12

    ui_Label12 = lv_label_create(ui_Panel6);

    lv_obj_set_width(ui_Label12, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label12, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label12, 0);
    lv_obj_set_y(ui_Label12, 0);

    lv_obj_set_align(ui_Label12, LV_ALIGN_LEFT_MID);

    lv_label_set_text(ui_Label12, "风速");

    lv_obj_set_style_text_color(ui_Label12, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label12, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label12, &ui_font_Font1, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Slider1

    ui_Slider1 = lv_slider_create(ui_Panel6);
    lv_slider_set_range(ui_Slider1, 0, 100);

    lv_obj_set_width(ui_Slider1, 140);
    lv_obj_set_height(ui_Slider1, 20);

    lv_obj_set_x(ui_Slider1, 0);
    lv_obj_set_y(ui_Slider1, 0);

    lv_obj_set_align(ui_Slider1, LV_ALIGN_RIGHT_MID);

    // ui_Label17

    ui_Label17 = lv_label_create(ui_PAGE1);

    lv_obj_set_width(ui_Label17, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label17, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label17, 0);
    lv_obj_set_y(ui_Label17, 20);

    lv_obj_set_align(ui_Label17, LV_ALIGN_TOP_MID);

    lv_label_set_text(ui_Label17, "热风设置");

    lv_obj_set_style_text_font(ui_Label17, &ui_font_Font1, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Switch1

    ui_Switch1 = lv_switch_create(ui_PAGE1);

    lv_obj_set_width(ui_Switch1, 100);
    lv_obj_set_height(ui_Switch1, 40);

    lv_obj_set_x(ui_Switch1, -60);
    lv_obj_set_y(ui_Switch1, 130);

    lv_obj_set_align(ui_Switch1, LV_ALIGN_CENTER);
	lv_obj_add_event_cb(ui_Switch1,ui_event_Switch1,LV_EVENT_VALUE_CHANGED,NULL);

}
void ui_PAGE2_screen_init(void)
{

    // ui_PAGE2

    ui_PAGE2 = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_PAGE2, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_PAGE2, lv_color_hex(0x394852), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PAGE2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Time1

    ui_Time1 = lv_obj_create(ui_PAGE2);

    lv_obj_set_width(ui_Time1, 240);
    lv_obj_set_height(ui_Time1, 102);

    lv_obj_set_x(ui_Time1, 0);
    lv_obj_set_y(ui_Time1, -60);

    lv_obj_set_align(ui_Time1, LV_ALIGN_BOTTOM_MID);

    lv_obj_clear_flag(ui_Time1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_Time1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Time1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Time1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Time1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Roller2

    ui_Roller2 = lv_roller_create(ui_Time1);
    lv_roller_set_options(ui_Roller2, "0\n10\n20\n30\n40\n50\n60", LV_ROLLER_MODE_NORMAL);

    lv_obj_set_width(ui_Roller2, 80);
    lv_obj_set_height(ui_Roller2, 100);

    lv_obj_set_x(ui_Roller2, 0);
    lv_obj_set_y(ui_Roller2, 0);

    lv_obj_set_align(ui_Roller2, LV_ALIGN_CENTER);

    lv_obj_set_style_text_font(ui_Roller2, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Roller2, lv_color_hex(0x394852), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Roller2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label18

    ui_Label18 = lv_label_create(ui_Time1);

    lv_obj_set_width(ui_Label18, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label18, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label18, 0);
    lv_obj_set_y(ui_Label18, 0);

    lv_obj_set_align(ui_Label18, LV_ALIGN_LEFT_MID);

    lv_label_set_text(ui_Label18, "定时");

    lv_obj_set_style_text_font(ui_Label18, &ui_font_Font1, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label19

    ui_Label19 = lv_label_create(ui_Time1);

    lv_obj_set_width(ui_Label19, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label19, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label19, 0);
    lv_obj_set_y(ui_Label19, 0);

    lv_obj_set_align(ui_Label19, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_Label19, "分钟");

    lv_obj_set_style_text_font(ui_Label19, &ui_font_Font1, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Button1

    ui_Button1 = lv_btn_create(ui_PAGE2);

    lv_obj_set_width(ui_Button1, 80);
    lv_obj_set_height(ui_Button1, 40);

    lv_obj_set_x(ui_Button1, 60);
    lv_obj_set_y(ui_Button1, -10);

    lv_obj_set_align(ui_Button1, LV_ALIGN_BOTTOM_MID);

    lv_obj_add_flag(ui_Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Button1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Button1, ui_event_Button1, LV_EVENT_ALL, NULL);

    // ui_Label21

    ui_Label21 = lv_label_create(ui_Button1);

    lv_obj_set_width(ui_Label21, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label21, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label21, 0);
    lv_obj_set_y(ui_Label21, 0);

    lv_obj_set_align(ui_Label21, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label21, "返回");

    lv_obj_set_style_text_font(ui_Label21, &ui_font_Font1, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Panel1

    ui_Panel1 = lv_obj_create(ui_PAGE2);

    lv_obj_set_width(ui_Panel1, 240);
    lv_obj_set_height(ui_Panel1, 100);

    lv_obj_set_x(ui_Panel1, 0);
    lv_obj_set_y(ui_Panel1, 50);

    lv_obj_set_align(ui_Panel1, LV_ALIGN_TOP_MID);

    lv_obj_clear_flag(ui_Panel1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Panel1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label22

    ui_Label22 = lv_label_create(ui_Panel1);

    lv_obj_set_width(ui_Label22, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label22, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label22, 0);
    lv_obj_set_y(ui_Label22, 0);

    lv_obj_set_align(ui_Label22, LV_ALIGN_LEFT_MID);

    lv_label_set_text(ui_Label22, "当前时间");

    lv_obj_set_style_text_color(ui_Label22, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label22, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label22, &ui_font_Font1, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Panel2

    ui_Panel2 = lv_obj_create(ui_Panel1);

    lv_obj_set_width(ui_Panel2, 120);
    lv_obj_set_height(ui_Panel2, 40);

    lv_obj_set_x(ui_Panel2, 0);
    lv_obj_set_y(ui_Panel2, 0);

    lv_obj_set_align(ui_Panel2, LV_ALIGN_RIGHT_MID);

    lv_obj_clear_flag(ui_Panel2, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Label23

    ui_Label23 = lv_label_create(ui_Panel2);

    lv_obj_set_width(ui_Label23, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label23, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label23, 0);
    lv_obj_set_y(ui_Label23, 0);

    lv_obj_set_align(ui_Label23, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label23, "00:00:00");

    lv_obj_set_style_text_font(ui_Label23, LV_FONT_MONTSERRAT_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label25

    ui_Label25 = lv_label_create(ui_PAGE2);

    lv_obj_set_width(ui_Label25, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label25, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label25, 0);
    lv_obj_set_y(ui_Label25, 20);

    lv_obj_set_align(ui_Label25, LV_ALIGN_TOP_MID);

    lv_label_set_text(ui_Label25, "雾化设置");

    lv_obj_set_style_text_font(ui_Label25, &ui_font_Font1, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Switch2

    ui_Switch2 = lv_switch_create(ui_PAGE2);

    lv_obj_set_width(ui_Switch2, 100);
    lv_obj_set_height(ui_Switch2, 40);

    lv_obj_set_x(ui_Switch2, -60);
    lv_obj_set_y(ui_Switch2, 130);

    lv_obj_set_align(ui_Switch2, LV_ALIGN_CENTER);

}
void ui_PAGE3_screen_init(void)
{

    // ui_PAGE3

    ui_PAGE3 = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_PAGE3, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_PAGE3, lv_color_hex(0x394852), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PAGE3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Time2

    ui_Time2 = lv_obj_create(ui_PAGE3);

    lv_obj_set_width(ui_Time2, 240);
    lv_obj_set_height(ui_Time2, 102);

    lv_obj_set_x(ui_Time2, 0);
    lv_obj_set_y(ui_Time2, -60);

    lv_obj_set_align(ui_Time2, LV_ALIGN_BOTTOM_MID);

    lv_obj_clear_flag(ui_Time2, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_Time2, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Time2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Time2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Time2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Roller3

    ui_Roller3 = lv_roller_create(ui_Time2);
    lv_roller_set_options(ui_Roller3, "0\n10\n20\n30\n40\n50\n60", LV_ROLLER_MODE_NORMAL);

    lv_obj_set_width(ui_Roller3, 80);
    lv_obj_set_height(ui_Roller3, 100);

    lv_obj_set_x(ui_Roller3, 0);
    lv_obj_set_y(ui_Roller3, 0);

    lv_obj_set_align(ui_Roller3, LV_ALIGN_CENTER);

    lv_obj_set_style_text_font(ui_Roller3, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Roller3, lv_color_hex(0x394852), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Roller3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label9

    ui_Label9 = lv_label_create(ui_Time2);

    lv_obj_set_width(ui_Label9, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label9, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label9, 0);
    lv_obj_set_y(ui_Label9, 0);

    lv_obj_set_align(ui_Label9, LV_ALIGN_LEFT_MID);

    lv_label_set_text(ui_Label9, "定时");

    lv_obj_set_style_text_font(ui_Label9, &ui_font_Font1, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label20

    ui_Label20 = lv_label_create(ui_Time2);

    lv_obj_set_width(ui_Label20, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label20, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label20, 0);
    lv_obj_set_y(ui_Label20, 0);

    lv_obj_set_align(ui_Label20, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_Label20, "分钟");

    lv_obj_set_style_text_font(ui_Label20, &ui_font_Font1, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Button3

    ui_Button3 = lv_btn_create(ui_PAGE3);

    lv_obj_set_width(ui_Button3, 80);
    lv_obj_set_height(ui_Button3, 40);

    lv_obj_set_x(ui_Button3, 60);
    lv_obj_set_y(ui_Button3, -10);

    lv_obj_set_align(ui_Button3, LV_ALIGN_BOTTOM_MID);

    lv_obj_add_flag(ui_Button3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Button3, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Button3, ui_event_Button3, LV_EVENT_ALL, NULL);

    // ui_Label24

    ui_Label24 = lv_label_create(ui_Button3);

    lv_obj_set_width(ui_Label24, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label24, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label24, 0);
    lv_obj_set_y(ui_Label24, 0);

    lv_obj_set_align(ui_Label24, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label24, "返回");

    lv_obj_set_style_text_font(ui_Label24, &ui_font_Font1, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Panel3

    ui_Panel3 = lv_obj_create(ui_PAGE3);

    lv_obj_set_width(ui_Panel3, 240);
    lv_obj_set_height(ui_Panel3, 50);

    lv_obj_set_x(ui_Panel3, 0);
    lv_obj_set_y(ui_Panel3, 50);

    lv_obj_set_align(ui_Panel3, LV_ALIGN_TOP_MID);

    lv_obj_clear_flag(ui_Panel3, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Panel3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label26

    ui_Label26 = lv_label_create(ui_Panel3);

    lv_obj_set_width(ui_Label26, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label26, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label26, 0);
    lv_obj_set_y(ui_Label26, 0);

    lv_obj_set_align(ui_Label26, LV_ALIGN_LEFT_MID);

    lv_label_set_text(ui_Label26, "当前时间");

    lv_obj_set_style_text_color(ui_Label26, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label26, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label26, &ui_font_Font1, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Panel4

    ui_Panel4 = lv_obj_create(ui_Panel3);

    lv_obj_set_width(ui_Panel4, 120);
    lv_obj_set_height(ui_Panel4, 40);

    lv_obj_set_x(ui_Panel4, 0);
    lv_obj_set_y(ui_Panel4, 0);

    lv_obj_set_align(ui_Panel4, LV_ALIGN_RIGHT_MID);

    lv_obj_clear_flag(ui_Panel4, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Label27

    ui_Label27 = lv_label_create(ui_Panel4);

    lv_obj_set_width(ui_Label27, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label27, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label27, 0);
    lv_obj_set_y(ui_Label27, 0);

    lv_obj_set_align(ui_Label27, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label27, "00:00:00");

    lv_obj_set_style_text_font(ui_Label27, LV_FONT_MONTSERRAT_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label28

    ui_Label28 = lv_label_create(ui_PAGE3);

    lv_obj_set_width(ui_Label28, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label28, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label28, 0);
    lv_obj_set_y(ui_Label28, 20);

    lv_obj_set_align(ui_Label28, LV_ALIGN_TOP_MID);

    lv_label_set_text(ui_Label28, "光照设置");

    lv_obj_set_style_text_font(ui_Label28, &ui_font_Font1, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Switch3

    ui_Switch3 = lv_switch_create(ui_PAGE3);

    lv_obj_set_width(ui_Switch3, 100);
    lv_obj_set_height(ui_Switch3, 40);

    lv_obj_set_x(ui_Switch3, -60);
    lv_obj_set_y(ui_Switch3, 130);

    lv_obj_set_align(ui_Switch3, LV_ALIGN_CENTER);

    // ui_Panel8

    ui_Panel8 = lv_obj_create(ui_PAGE3);

    lv_obj_set_width(ui_Panel8, 240);
    lv_obj_set_height(ui_Panel8, 50);

    lv_obj_set_x(ui_Panel8, 0);
    lv_obj_set_y(ui_Panel8, 105);

    lv_obj_set_align(ui_Panel8, LV_ALIGN_TOP_MID);

    lv_obj_clear_flag(ui_Panel8, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Panel8, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label29

    ui_Label29 = lv_label_create(ui_Panel8);

    lv_obj_set_width(ui_Label29, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label29, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label29, 0);
    lv_obj_set_y(ui_Label29, 0);

    lv_obj_set_align(ui_Label29, LV_ALIGN_LEFT_MID);

    lv_label_set_text(ui_Label29, "颜色设置");

    lv_obj_set_style_text_color(ui_Label29, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label29, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label29, &ui_font_Font1, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Button4

    ui_Button4 = lv_btn_create(ui_Panel8);

    lv_obj_set_width(ui_Button4, 100);
    lv_obj_set_height(ui_Button4, 40);

    lv_obj_set_x(ui_Button4, 0);
    lv_obj_set_y(ui_Button4, 0);

    lv_obj_set_align(ui_Button4, LV_ALIGN_RIGHT_MID);

    lv_obj_add_flag(ui_Button4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Button4, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Button4, ui_event_Button4, LV_EVENT_ALL, NULL);

}
void ui_COLORPAGE__screen_init(void)
{

    // ui_COLORPAGE_

    ui_COLORPAGE_ = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_COLORPAGE_, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_COLORPAGE_, lv_color_hex(0x394852), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_COLORPAGE_, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Colorwheel1

    ui_Colorwheel1 = lv_colorwheel_create(ui_COLORPAGE_, true);

    lv_obj_set_width(ui_Colorwheel1, 180);
    lv_obj_set_height(ui_Colorwheel1, 180);

    lv_obj_set_x(ui_Colorwheel1, 0);
    lv_obj_set_y(ui_Colorwheel1, -50);

    lv_obj_set_align(ui_Colorwheel1, LV_ALIGN_CENTER);

    lv_obj_set_style_arc_width(ui_Colorwheel1, 15, LV_PART_MAIN | LV_STATE_DEFAULT);


    // ui_Button5

    ui_Button5 = lv_btn_create(ui_COLORPAGE_);

    lv_obj_set_width(ui_Button5, 100);
    lv_obj_set_height(ui_Button5, 50);

    lv_obj_set_x(ui_Button5, 0);
    lv_obj_set_y(ui_Button5, 120);

    lv_obj_set_align(ui_Button5, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Button5, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Button5, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Button5, ui_event_Button5, LV_EVENT_ALL, NULL);

    // ui_Label30

    ui_Label30 = lv_label_create(ui_Button5);

    lv_obj_set_width(ui_Label30, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label30, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label30, 0);
    lv_obj_set_y(ui_Label30, 0);

    lv_obj_set_align(ui_Label30, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label30, "确认");

    lv_obj_set_style_text_font(ui_Label30, &ui_font_Font1, LV_PART_MAIN | LV_STATE_DEFAULT);

}
void ui_PAGE4_screen_init(void)
{

    // ui_PAGE4

    ui_PAGE4 = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_PAGE4, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_PAGE4, lv_color_hex(0x394852), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PAGE4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Button6

    ui_Button6 = lv_btn_create(ui_PAGE4);

    lv_obj_set_width(ui_Button6, 80);
    lv_obj_set_height(ui_Button6, 40);

    lv_obj_set_x(ui_Button6, 60);
    lv_obj_set_y(ui_Button6, -10);

    lv_obj_set_align(ui_Button6, LV_ALIGN_BOTTOM_MID);

    lv_obj_add_flag(ui_Button6, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Button6, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Button6, ui_event_Button6, LV_EVENT_ALL, NULL);

    // ui_Label33

    ui_Label33 = lv_label_create(ui_Button6);

    lv_obj_set_width(ui_Label33, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label33, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label33, 0);
    lv_obj_set_y(ui_Label33, 0);

    lv_obj_set_align(ui_Label33, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label33, "返回");

    lv_obj_set_style_text_font(ui_Label33, &ui_font_Font1, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label36

    ui_Label36 = lv_label_create(ui_PAGE4);

    lv_obj_set_width(ui_Label36, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label36, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label36, 0);
    lv_obj_set_y(ui_Label36, 20);

    lv_obj_set_align(ui_Label36, LV_ALIGN_TOP_MID);

    lv_label_set_text(ui_Label36, "血压设置");

    lv_obj_set_style_text_font(ui_Label36, &ui_font_Font1, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Switch4

    ui_Switch4 = lv_switch_create(ui_PAGE4);

    lv_obj_set_width(ui_Switch4, 100);
    lv_obj_set_height(ui_Switch4, 40);

    lv_obj_set_x(ui_Switch4, -60);
    lv_obj_set_y(ui_Switch4, 130);

    lv_obj_set_align(ui_Switch4, LV_ALIGN_CENTER);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_HOME_screen_init();
    ui_PAGE1_screen_init();
    ui_PAGE2_screen_init();
    ui_PAGE3_screen_init();
    ui_COLORPAGE__screen_init();
    ui_PAGE4_screen_init();
    lv_disp_load_scr(ui_HOME);
}

