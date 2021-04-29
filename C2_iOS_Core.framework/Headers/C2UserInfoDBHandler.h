//
//  C2UserInfoDBHandler.h
//  C2-iOS-Base
//
//  Created by watson on 2020/6/29.
//  Copyright © 2020 watson. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "C2UserInfoModel.h"

NS_ASSUME_NONNULL_BEGIN

/**
用户数据表操作类
*/
@interface C2UserInfoDBHandler : NSObject

+ (void)insertReplaceUserModel:(C2UserInfoModel *)model;

+ (C2UserInfoModel *)fetchUserModelWithUserID:(NSString *)userID;

+ (BOOL)isUserExist:(NSString *)userID;

+ (void)deleteUserModelWithID:(NSString *)userID;

+ (void)deleteAllUser;

@end

NS_ASSUME_NONNULL_END
