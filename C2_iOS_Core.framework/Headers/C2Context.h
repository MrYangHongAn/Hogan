//
//  C2Context.h
//  C2-iOS-Base
//
//  Created by watson on 2020/6/17.
//  Copyright © 2020 watson. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "C2UserInfoModel.h"
//#import "C2UpdateInfoModel.h"

NS_ASSUME_NONNULL_BEGIN

/**
全局单例
*/
@interface C2Context : NSObject

+ (instancetype)sharedInstance;

+ (BOOL)isIPhoneXSeries;

/** CurUser 当前登录用户 */
@property(nonatomic, strong) C2UserInfoModel *curUser;
/** UserDefaults 中记录最后一个登陆用户 userID*/
@property(nonatomic, copy) NSString *lastLoginUserID;

@property (nonatomic, copy) NSString *baseUrl;

/** 用户退出登录时调用 */
- (void)clearLastLoginUser;
- (BOOL)hasLoginUser;
- (BOOL)isAutoLogin;

- (BOOL)isFirstRun;

#pragma mark - device info

+ (NSDictionary *)appInfo;
+ (NSString *)deviceType;
+ (NSString *)appVersion;
+ (NSString *)appName;
+ (NSString *)systemVersion;

+ (UINavigationController *)currentNavi;
- (BOOL)isIpad;
- (UIWindow *)keyWindow;

/**
 当前展示的导航控制器最顶上的VC
 */
@property (nonatomic, weak) UIViewController *currentTopVCInNavi;

/**
 版本信息
 */
//@property (nonatomic, strong) C2UpdateInfoModel *updateInfoModel;

@end

NS_ASSUME_NONNULL_END
