//
//  YJCommonTools.h
//  YJCommonMacroGather
//
//  Created by YJHou on 2014/11/10.
//  Copyright © 2014年 https://github.com/stackhou . All rights reserved.
//

#ifndef YJCommonTools_h
#define YJCommonTools_h

#ifdef __OBJC__

/** 转换为OC NSString */
#define kYJOCNSString(str) [NSString stringWithCString:(str) encoding:NSUTF8StringEncoding]

#endif
#endif /* YJCommonTools_h */
