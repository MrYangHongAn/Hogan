//
//  C2ConfigManager.h
//  C2-iOS-Base
//
//  Created by watson on 2020/9/29.
//  Copyright © 2020 watson. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "C2ConfigModel.h"
#import "C2AppModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface C2ConfigManager : NSObject

+ (instancetype)sharedInstance;

- (void)checkAppWithClientId:(NSString *)clientId;

- (NSString *)fileUrlWithAppId:(NSString *)appId;

- (C2AppModel *)appWithAppId:(NSString *)appId;

- (BOOL)isSystemAppWithAppId:(NSString *)appId;

@property (nonatomic, strong) C2ConfigModel *appConfig;

@property (nonatomic, copy) NSArray<C2AppModel *> *apps;

@property (nonatomic, copy) NSArray *systemAppIds;

@end

NS_ASSUME_NONNULL_END
