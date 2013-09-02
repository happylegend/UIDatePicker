//
//  ViewController.m
//  UIDatePicker
//
//  Created by 紫冬 on 13-9-2.
//  Copyright (c) 2013年 qsji. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController
@synthesize datePicker = _datePicker;

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    UIDatePicker *aDatePicker = [[UIDatePicker alloc] init];
    self.datePicker = aDatePicker;
    self.datePicker.datePickerMode = UIDatePickerModeCountDownTimer;
    self.datePicker.center = self.view.center;
    
    //设置显示模式
    self.datePicker.datePickerMode=UIDatePickerModeCountDownTimer;
    self.datePicker.minuteInterval = 5;
    
    //设置时间
    [self.datePicker setDate:[NSDate date] animated:YES];
    
    [self.view addSubview:self.datePicker];
    [aDatePicker release];
    aDatePicker = nil;
    
    if (iPhone5)
    {
        NSLog(@"iphone5");
    }
    else
    {
        NSLog(@"not iphone5");
    }
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
