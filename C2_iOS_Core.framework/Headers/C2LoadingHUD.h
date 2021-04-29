//
//  C2LoadingHUD.h
//  C2-iOS-Base
//
//  Created by watson on 2020/7/14.
//  Copyright © 2020 watson. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^LoadingCompletion)(void);

@interface C2LoadingHUD : NSObject

+ (void)showLoding;
+ (void)showLodingWithTip:(NSString *)tip;

+ (void)showTip:(NSString*)tip;
+ (void)showTip:(NSString *)tip completion:(LoadingCompletion)completion;

+ (void)dismissLoadingView;

@end

NS_ASSUME_NONNULL_END
