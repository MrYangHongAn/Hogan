//
//  C2UpdateCheck.h
//  C2-iOS-Base
//
//  Created by watson on 2020/9/18.
//  Copyright © 2020 watson. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol C2UpdateCheckDelegate<NSObject>

- (BOOL)willShowUpdateAlert;

- (void)didDismissUpdateAlert;

@end

@interface C2UpdateCheck : NSObject

+ (instancetype)sharedInstance;

+ (void)checkUpdateWithAppId:(NSString *)appId;

+ (void)jumpToItunes;

+ (void)refuseAndCloseAlert;

@property (nonatomic, assign) BOOL showing;

@property (nonatomic, weak) id<C2UpdateCheckDelegate>delegate;

@property (nonatomic, copy) NSString *itunesUrl;

@end

NS_ASSUME_NONNULL_END
