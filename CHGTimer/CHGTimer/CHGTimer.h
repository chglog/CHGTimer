//
//  CHGTimer.h
//  CHGTimer
//
//  Created by chenhongen on 2018/9/6.
//  Copyright © 2018年 陈弘根. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CHGTimer : NSObject

/**
 block方式创建GCD定时器 返回一个定时器标识
 @param task 回调
 @param start 开始时间
 @param interval 每隔多少秒回调一次
 @param repeats 是否要重复
 @param async 是否异步执行
 */
+ (NSString *)execTask:(void(^)(void))task
                 start:(NSTimeInterval)start
              interval:(NSTimeInterval)interval
               repeats:(BOOL)repeats
                 async:(BOOL)async;
/**
 target-selector方式创建GCD定时器 返回一个定时器标识
 @param target 调用者
 @param selector 调用的方法
 @param start 开始时间
 @param interval 每隔多少秒回调一次
 @param repeats 是否要重复
 @param async 是否异步执行
 */
+ (NSString *)execTask:(id)target
              selector:(SEL)selector
                 start:(NSTimeInterval)start
              interval:(NSTimeInterval)interval
               repeats:(BOOL)repeats
                 async:(BOOL)async;


/**
 传入定时器标识  取消定时器
 
 @param name 定时器标识
 */
+ (void)cancelTask:(NSString *)name;

@end
