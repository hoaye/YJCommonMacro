//
//  YJCommonLogging.h
//  YJCommonMacroGather
//
//  Created by YJHou on 2014/11/10.
//  Copyright © 2014年 https://github.com/stackhou . All rights reserved.
//

#ifndef YJCommonLogging_h
#define YJCommonLogging_h

#ifdef __OBJC__
/** 日志Log */
#ifdef DEBUG
#   define YJLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
#   define YJLog(...)
#endif

// COLog,Debug模式下打印日志和当前行数
#if DEBUG
#define COLog(FORMAT, ...) fprintf(stderr,"Function:%s Line:%d\n Content:%s\n\n", __FUNCTION__, __LINE__, [[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String]);
#else
#define COLog(FORMAT, ...) nil
#endif

//DEBUG  模式下打印日志,当前行 并弹出一个警告
#ifdef DEBUG
#   define YJAlertLog(fmt, ...)  { UIAlertView *alert = [[UIAlertView alloc] initWithTitle:[NSString stringWithFormat:@"%s\n [Line %d] ", __PRETTY_FUNCTION__, __LINE__] message:[NSString stringWithFormat:fmt, ##__VA_ARGS__]  delegate:nil cancelButtonTitle:@"Ok" otherButtonTitles:nil]; [alert show]; }
#else
#   define YJAlertLog(...)
#endif

#endif
#endif /* YJCommonLogging_h */
