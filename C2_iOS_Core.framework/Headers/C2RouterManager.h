//
//  C2RouterManager.h
//  C2-iOS-Base
//
//  Created by watson on 2020/9/22.
//  Copyright © 2020 watson. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "C2AppModel.h"

typedef NS_ENUM(NSUInteger, C2Open) {
    C2Open_App,// 打开新应用
    C2Open_Page// 打开新页面
};

typedef void(^C2RouterCompletionBlock)(NSString * _Nonnull url, C2AppModel * _Nullable microApp);

NS_ASSUME_NONNULL_BEGIN

@interface C2RouterManager : NSObject

+ (instancetype)sharedInstance;

@property (nonatomic, strong) C2AppModel *microApp;

- (void)closeMicroApp;
- (void)startUrlWithUrl:(NSString *)url completionHandler:(C2RouterCompletionBlock)completionHandler;
- (void)startAppWithType:(C2Open)type appId:(NSString *)appId url:(NSString *)url completionHandler:(C2RouterCompletionBlock)completionHandler;

@end

NS_ASSUME_NONNULL_END
