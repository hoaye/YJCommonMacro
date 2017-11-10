//
//  YJCommonSize.h
//  YJCommonMacroGather
//
//  Created by YJHou on 2014/11/10.
//  Copyright © 2014年 https://github.com/stackhou . All rights reserved.
//

#ifndef YJCommonSize_h
#define YJCommonSize_h

#ifdef __OBJC__

//------------------- 获取设备大小 -------------------------
#define kYJSCREEN_WIDTH  ([UIScreen mainScreen].bounds.size.width)
#define kYJSCREEN_HEIGHT ([UIScreen mainScreen].bounds.size.height)

#define kYJSTATUS_BAR_HEIGHT ([UIApplication sharedApplication].statusBarFrame.size.height)
#define kYJNAVIGATION_BAR_HEIGHT  (kYJSTATUS_BAR_HEIGHT + 44.0f)

#define kYJTAB_BAR_HEIGHT         49.0f
#define kYJMINFLOAT                0.000001


#endif

#endif /* YJCommonSize_h */
