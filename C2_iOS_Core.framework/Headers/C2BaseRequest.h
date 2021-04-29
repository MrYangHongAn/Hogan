//
//  C2BaseRequest.h
//  C2-iOS-Base
//
//  Created by watson on 2020/7/7.
//  Copyright © 2020 watson. All rights reserved.
//

#import <YTKNetwork/YTKNetwork.h>
#import "C2ReqError.h"
#import <YYModel.h>
#import "C2Common.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^C2ResultBlock)(id resultObj);
typedef void(^C2ErrorBlock) (id resultObj);

@interface C2BaseRequest : YTKRequest
/**
 *  发起请求
 *
 *  @param sucBlock  成功之后返回的数据字典
 *  @param failBlock  失败返回ErrorReason
 */
- (void)C2_startRequestWithSucBlock:(void(^)(id resultObj))sucBlock
                            failBlock:(C2ErrorBlock)failBlock;


#pragma mark - 子类实现禁用网络请求时的返回
- (void)copeWithSucBloc:(C2ResultBlock)sucBlock;

/**
 host 地址

 @return NSString
 */
+ (NSString *)baseUrl;

+ (void)clearCookie;

@property (nonatomic, assign) BOOL isFromCache;

@end

NS_ASSUME_NONNULL_END
