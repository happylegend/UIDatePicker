//
//  ViewController.h
//  UIDatePicker
//
//  Created by 紫冬 on 13-9-2.
//  Copyright (c) 2013年 qsji. All rights reserved.
//

/*
 关于UIDatePicker的一些使用说明：
 默认大小是：宽度是320，高度是216，可以通过修改frame来改变
 显示模式：
 typedef enum { 
 UIDatePickerModeTime,           //用来显示时间
 UIDatePickerModeDate,           //用来显示日期
 UIDatePickerModeDateAndTime,    //用来显示日期和时间，
 UIDatePickerModeCountDownTimer, //显示小时和分钟
 } UIDatePickerMode;
 注意：无论采用如何显示模式，仅仅是显示的UI不同，datePicker的date的值格式仍然如下
 几个重要的属性：
 calendar  property
 date  property    获得日期，显示格式  Date = 2013-09-02 02:11:04 +0000
 locale  property
 – setDate:animated:
 timeZone  property

 datePickerMode  property

 你可以通过设置mininumDate 和 maxinumDate 属性，来指定使用的日期范围。如果用户试图滚动到超出这一范围的日期，
 表盘会回滚到最近的有效日期。两个方法都需要NSDate 对象作参数：
 maximumDate  property
 minimumDate  property
 NSDate* minDate = [[NSDate alloc]initWithString:@"1900-01-01 00:00:00 -0500"];
 NSDate* maxDate = [[NSDate alloc]initWithString:@"2099-01-01 00:00:00 -0500"];
 
 datePicker.minimumDate = minDate;
 datePicker.maximumDate = maxDate;
 
 
 你可以将分钟表盘设置为以不同的时间间隔来显示分钟，前提是该间隔要能够让60整除。默认间隔是一分钟。
 如果要使用不同的间隔，需要改变 minuteInterval属性：
 datePicker.minuteInterval = 5;  
 minuteInterval  property      设置分钟之间的间隔.间隔必须均匀的分为60.默认为1.最小为1,最大为30
 countDownDuration  property   用于模式UIDatePickerModeCountDownTimer,否则忽略.默认为0.0.最大限制为23:59 (86,399秒)
 
 UIDatePicker的事件：
 当UIDatePicker的值发生改变的时候，将会触发UIControlEventValueChanged,[self.myDatePicker addTarget:self action:@selector(datePickerDateChanged:) forControlEvents:UIControlEventValueChanged];
 */


#define iPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
{
    UIDatePicker *_datePicker;
}

@property(nonatomic, retain)UIDatePicker *datePicker;

@end
