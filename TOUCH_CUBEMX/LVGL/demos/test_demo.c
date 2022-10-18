#include "test_demo.h"

//static void event_cb(lv_event_t* e)
//{
//    LV_LOG_USER("Clicked");
//
//    static uint32_t cnt = 1;
//    lv_obj_t* btn = lv_event_get_target(e);
//    lv_obj_t* label = lv_obj_get_child(btn, 0);
//    lv_label_set_text_fmt(label, "%d", cnt);
//    cnt++;
//}
static void my_event_cb(lv_event_t *e)
{
    static uint32_t cnt = 1;
    lv_obj_t *obj = lv_event_get_target(e);
    lv_obj_t *label = lv_obj_get_child(obj,0);
    lv_label_set_text_fmt(label,"cnt:%d",cnt);
    cnt++;

}


void UI_test(void)
{
    static lv_style_t style1;
    lv_style_init(&style1);
    lv_style_set_bg_color(&style1, lv_color_hex(0x848487));
    lv_style_set_text_color(&style1, lv_color_hex(0xffffff));
    //lv_style_set_outline_color(&style1, lv_color_hex(0x000000));
    //lv_style_set_outline_width(&style1, 2);
    lv_style_set_border_color(&style1, lv_color_hex(0x848487));
    lv_style_set_shadow_ofs_x(&style1, 5);
    lv_style_set_shadow_ofs_y(&style1, 5);
    lv_style_set_shadow_width(&style1, 25);
    lv_style_set_shadow_color(&style1, lv_color_hex(0x009EC5));

    lv_obj_t* desk = lv_obj_create(lv_scr_act());     //建立桌面画布
    lv_obj_set_size(desk, 240, 320);
    lv_obj_align(desk, LV_ALIGN_BOTTOM_MID, 0, 0);

    lv_obj_t* top_block  = lv_obj_create(lv_scr_act());     //顶部区域
    lv_obj_set_size(top_block,240,80);
    lv_obj_align(top_block, LV_ALIGN_TOP_MID,0,0);
    lv_obj_set_style_bg_color(top_block, lv_color_hex(0xff0000),0);
    lv_obj_set_style_radius(top_block,0,0);

    lv_obj_t *block1 = lv_obj_create(top_block);   //块1（置于顶部，点击跳转桌面）
    lv_obj_set_size(block1,100,50);
    lv_obj_align(block1,LV_ALIGN_TOP_LEFT,0,0);

    lv_obj_add_style(block1,&style1,LV_STATE_PRESSED);  //当block1按下，颜色反转
    lv_obj_add_event_cb(block1,my_event_cb,LV_EVENT_CLICKED,NULL);  //添加事件回调函数

    lv_obj_t* label1 = lv_label_create(block1);
    lv_label_set_text(label1,"block1");
    lv_obj_set_align(label1,LV_ALIGN_CENTER);

    lv_obj_t *block2 = lv_obj_create(top_block); //块2 （置于顶部，点击跳转）
    lv_obj_set_size(block2, 100, 50);
    lv_obj_align_to(block2,block1,LV_ALIGN_OUT_RIGHT_MID,0,0);
    lv_obj_add_style(block2, &style1, LV_STATE_PRESSED);  //当block2按下，颜色反转

    lv_obj_t* label2 = lv_label_create(block2);
    lv_label_set_text(label2, "block2");
    lv_obj_set_align(label2, LV_ALIGN_CENTER);

    lv_obj_t* block3 = lv_obj_create(top_block); //块3 （置于顶部，点击跳转）
    lv_obj_set_size(block3, 100, 50);
    lv_obj_align_to(block3, block2, LV_ALIGN_OUT_RIGHT_MID, 0, 0);
    lv_obj_add_style(block3, &style1, LV_STATE_PRESSED);  //当block2按下，颜色反转

    lv_obj_t* label3 = lv_label_create(block3);
    lv_label_set_text(label3, "block3");
    lv_obj_set_align(label3, LV_ALIGN_CENTER);


}
