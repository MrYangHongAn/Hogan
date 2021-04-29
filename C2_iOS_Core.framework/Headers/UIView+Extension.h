//
//  UIView+Extension.h
//  CommonFramework
//
//  Created by Watson on 2015/9/23.
//  Copyright © 2015年 Watson. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Extension)

@property (nonatomic, assign) CGFloat x;
@property (nonatomic, assign) CGFloat y;
@property (nonatomic, assign) CGFloat centerX;
@property (nonatomic, assign) CGFloat centerY;
@property (nonatomic, assign) CGFloat width;
@property (nonatomic, assign) CGFloat height;
@property (nonatomic, assign) CGSize size;
@property (nonatomic, assign) CGPoint origin;
@property (nonatomic, assign) CGFloat left;
@property (nonatomic, assign) CGFloat right;
@property (nonatomic, assign) CGFloat top;
@property (nonatomic, assign) CGFloat bottom;

@property (nonatomic, assign, readonly, getter=getMinY) CGFloat minY;

@property (nonatomic, assign, readonly, getter=getMidY) CGFloat midY;

@property (nonatomic, assign, readonly, getter=getMaxY) CGFloat maxY;

@property (nonatomic, assign, readonly, getter=getMinX) CGFloat minX;

@property (nonatomic, assign, readonly, getter=getMidX) CGFloat midX;

@property (nonatomic, assign, readonly, getter=getMaxX) CGFloat maxX;

@end
