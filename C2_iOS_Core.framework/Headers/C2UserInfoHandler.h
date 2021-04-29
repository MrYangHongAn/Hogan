//
//  C2UserInfoHandler.h
//  C2-iOS-Base
//
//  Created by watson on 2020/12/1.
//  Copyright © 2020 watson. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^C2UserInfoCompletionBlock)(BOOL isSuccess, NSDictionary * _Nullable resultObj);

@interface C2UserInfoHandler : NSObject

+ (void)loginWithUsername:(NSString *)username password:(NSString *)password type:(NSString *)type isAutoLogin:(BOOL)isAutoLogin completionHandler:(C2UserInfoCompletionBlock)completionHandler;
+ (void)logout;
+ (void)registerWithUsername:(NSString *)username password:(NSString *)password phone:(NSString *)phone verifyCode:(NSString *)verifyCode completionHandler:(C2UserInfoCompletionBlock)completionHandler;
+ (void)getUserInfoWithCompletionHandler:(C2UserInfoCompletionBlock)completionHandler;
+ (void)updateUserInfoWithCompletionHandler:(C2UserInfoCompletionBlock)completionHandler;
+ (void)modifyPasswordWithOldPassword:(NSString *)oldPassword currentPassword:(NSString *)currentPassword completionHandler:(C2UserInfoCompletionBlock)completionHandler;
+ (void)refreshUserToken;
+ (void)getOrgsInfo;

@end

NS_ASSUME_NONNULL_END
