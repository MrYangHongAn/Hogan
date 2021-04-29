//
//  UIBarButtonItem+Extension.h
//  CommonFramework
//
//  Created by Watson on 2015/9/23.
//  Copyright © 2015年 Watson. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIBarButtonItem (Extension)

/**
 创建一个item

 @param target 点击item后调用哪个对象的方法
 @param action 点击item后调用target的哪个方法
 @param image 图片
 @param highImage 高亮的图片
 @param width item宽度
 @param height item高度
 @return 创建完的item
 */
+ (UIBarButtonItem *)itemWithTarget:(id)target action:(SEL)action image:(NSString *)image highImage:(NSString *)highImage width:(NSInteger)width height:(NSInteger)height;

+ (UIBarButtonItem *)itemWithTarget:(id)target action:(SEL)action title:(NSString*)title andHeight:(NSInteger)height;

+ (UIBarButtonItem *)itemWithTarget:(id)target action:(SEL)action blackTitle:(NSString*)title andHeight:(NSInteger)height;

+ (UIBarButtonItem *)itemWithTarget:(id)target action:(SEL)action title:(NSString*)title andHeight:(NSInteger)height andFontSize:(CGFloat)fontSize;

+ (UIBarButtonItem *)itemWithTarget:(id)target action:(SEL)action blackTitle:(NSString*)title andHeight:(NSInteger)height andFontSize:(CGFloat)fontSize;

+ (UIBarButtonItem *)itemWithTarget:(id)target action:(SEL)action title:(NSString*)title andHeight:(NSInteger)height andFontSize:(CGFloat)fontSize andTitleColor:(UIColor *)titleColor;

+ (UIBarButtonItem *)itemWithTarget:(id)target action:(SEL)action title:(NSString*)title image:(NSString *)image highImage:(NSString *)highImage height:(NSInteger)height fontSize:(CGFloat)fontSize titleColor:(UIColor *)titleColor;

@end
