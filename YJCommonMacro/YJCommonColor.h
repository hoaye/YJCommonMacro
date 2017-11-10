//
//  YJCommonColor.h
//  YJCommonMacroGather
//
//  Created by YJHou on 2014/11/10.
//  Copyright © 2014年 https://github.com/stackhou . All rights reserved.
//

#ifndef YJCommonColor_h
#define YJCommonColor_h

#ifdef __OBJC__

///////////////// 常用颜色 //////////
#define kYJBLACK_COLOR     [UIColor blackColor]
#define kYJBLUE_COLOR      [UIColor blueColor]
#define kYJBROWN_COLOR     [UIColor brownColor]
#define kYJCLEAR_COLOR     [UIColor clearColor]
#define kYJDARKGRAY_COLOR  [UIColor darkGrayColor]
#define kYJDARKTEXT_COLOR  [UIColor darkTextColor]
#define kYJWHITE_COLOR     [UIColor whiteColor]
#define kYJYELLOW_COLOR    [UIColor yellowColor]
#define kYJRED_COLOR       [UIColor redColor]
#define kYJORANGE_COLOR    [UIColor orangeColor]
#define kYJPURPLE_COLOR    [UIColor purpleColor]
#define kYJLIGHTTEXT_COLOR [UIColor lightTextColor]
#define kYJLIGHTGRAY_COLOR [UIColor lightGrayColor]
#define kYJGREEN_COLOR     [UIColor greenColor]
#define kYJGRAY_COLOR      [UIColor grayColor]
#define kYJMAGENTA_COLOR   [UIColor magentaColor]

// rgb颜色转换（16进制->10进制）
#define kYJUIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
// 设置颜色RGB
#define kYJCOLOR(R, G, B, A) [UIColor colorWithRed:R/255.0 green:G/255.0 blue:B/255.0 alpha:A]

/** 随机色 */
#define kYJRANDOM_COLOR [UIColor colorWithHue:(arc4random() % 255 / 255.0f) saturation:(arc4random() % 255 / 255.0f) brightness:(arc4random() % 255 / 255.0f) alpha:1]

/** 背景色 */
#define kYJBACKGROUND_COLOR [UIColor colorWithRed:242.0/255.0 green:236.0/255.0 blue:231.0/255.0 alpha:1.0]

#endif
#endif /* YJCommonColor_h */
