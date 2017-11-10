//
//  YJCommonMacro.h
//  YJCommonMacroGather
//
//  Created by YJHou on 2014/11/10.
//  Copyright © 2014年 https://github.com/stackhou . All rights reserved.
//  iOS ObJective-C 开发常用的宏

#ifndef YJCommonMacro_h
#define YJCommonMacro_h

/** 当前版本: 0.0.6 */

#ifdef __OBJC__

#import "YJCommonSize.h"
#import "YJCommonVerification.h"
#import "YJCommonLogging.h"
#import "YJCommonFont.h"
#import "YJCommonColor.h"
#import "YJCommonTools.h"

//////////// 版本 /////////////
#define kYJSYSTEM_VERSION [[[UIDevice currentDevice] systemVersion] floatValue]
#define kYJAPP_BUILD_VERSION [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleVersion"]
#define kYJAPP_VERSION [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]

////////// 方法宏 //////////////
#pragma mark - Funtion Method (宏 方法)

#define kYJIMAGE_NANMED(imgName) [UIImage imageNamed:imgName]

// 读取本地图片 性能更高
#define kYJLOAD_LOCAL_IMAGE(file, ext) [UIImage imageWithContentsOfFile:[[NSBundle mainBundle] pathForResource:file ofType:ext]]
// 获取当前语言
#define kYJCURRENT_LANGUAGE ([[NSLocale preferredLanguages] objectAtIndex:0])

//判断是真机还是模拟器
#if TARGET_OS_IPHONE
//iPhone Device
#endif

#if TARGET_IPHONE_SIMULATOR
//iPhone Simulator
#endif

//----------------------内存----------------------------

//使用ARC和不使用ARC
#if __has_feature(objc_arc)
//compiling with ARC
#else
// compiling without ARC
#endif

//-------------------- GCD -------------------------
//G－C－D
#define kGCD_BACK(block) dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), block)
#define kGCD_MAIN(block) dispatch_async(dispatch_get_main_queue(),block)

//------------------- 转换 ---------------
//由角度获取弧度 有弧度获取角度
#define kDEGREES_TO_RADIAN(x) (M_PI * (x) / 180.0)
#define kRADIAN_TO_DEGREES(radian) (radian*180.0)/(M_PI)

//------------------ 单例 -----------------
//单例化一个类
#define kSYNTHESIZE_SINGLETON_FOR_CLASS(classname) \
\
static classname *shared##classname = nil; \
\
+ (classname *)shared##classname \
{ \
@synchronized(self) \
{ \
if (shared##classname == nil) \
{ \
shared##classname = [[self alloc] init]; \
} \
} \
\
return shared##classname; \
} \
\
+ (id)allocWithZone:(NSZone *)zone \
{ \
@synchronized(self) \
{ \
if (shared##classname == nil) \
{ \
shared##classname = [super allocWithZone:zone]; \
return shared##classname; \
} \
} \
\
return nil; \
} \
\
- (id)copyWithZone:(NSZone *)zone \
{ \
return self; \
}




#endif

#endif /* YJCommonMacro_h */
