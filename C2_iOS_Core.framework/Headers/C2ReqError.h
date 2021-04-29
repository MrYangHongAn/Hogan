//
//  C2ReqError.h
//  C2-iOS-Base
//
//  Created by watson on 2020/6/17.
//  Copyright © 2020 watson. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, C2ReqErrorCode) {
    C2ReqErrorCode_NetworkService_Error = 500   //网络服务错误
};

NS_ASSUME_NONNULL_BEGIN

@interface C2ReqError : NSObject

@property (nonatomic, assign) C2ReqErrorCode errorCode;
/** 展示给用户 */
@property(nonatomic, copy) NSString *errorMessage;

+ (instancetype)errorWithCode:(C2ReqErrorCode)errorCode
                   showReason:(NSString *)errorMessage;

@end

NS_ASSUME_NONNULL_END
