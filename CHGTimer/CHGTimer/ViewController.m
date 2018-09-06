//
//  ViewController.m
//  CHGTimer
//
//  Created by chenhongen on 2018/9/6.
//  Copyright © 2018年 陈弘根. All rights reserved.
//

#import "ViewController.h"
#import "CHGTimer.h"

@interface ViewController ()
@property (copy, nonatomic) NSString *task;
@property (copy, nonatomic) NSString *task1;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    
//    self.task = [CHGTimer execTask:^{
//        // 需要做的事情 ...
//        NSLog(@"doTask - %@", [NSThread currentThread]);
//
//    } start:2.0 interval:1.0 repeats:YES async:YES];
    
    
    self.task1 = [CHGTimer execTask:self
                               selector:@selector(test)
                                  start:2.0 interval:1.0
                                repeats:YES
                                  async:YES];
    
}

- (void)test{
    // 需要做的事情 ...
    NSLog(@"doTask1 - %@", [NSThread currentThread]);
    
}


- (IBAction)cancelTask:(UIButton *)sender {
    [CHGTimer cancelTask:self.task];
}
- (IBAction)cancelTask1:(UIButton *)sender {
    [CHGTimer cancelTask:self.task1];
}

@end
