//
//  C2UserInfoModel.h
//  C2-iOS-Base
//
//  Created by watson on 2020/6/29.
//  Copyright © 2020 watson. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "C2OrgModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface C2UserInfoModel : NSObject

@property (nonatomic, copy) NSString *userId;

@property (nonatomic, copy) NSString *username;

@property (nonatomic, copy) NSString *avatar;

@property (nonatomic, copy) NSString *phone;

@property (nonatomic, copy) NSString *nickname;

@property (nonatomic, assign) NSInteger sex;

@property (nonatomic, copy) NSString *accessToken;

@property (nonatomic, copy) NSString *refreshToken;

@property (nonatomic, copy) NSDictionary *user;

@property (nonatomic, copy) NSArray<C2OrgModel *> *orgs;

@property (nonatomic, assign) BOOL isAutoLogin;

- (instancetype)updateModelWithDictionary:(NSDictionary *)dict completionHandler:(void (^)(void))completionHandler;

@end

NS_ASSUME_NONNULL_END
