//
//  C2HybridReq.h
//  C2-iOS-Base
//
//  Created by watson on 2020/7/29.
//  Copyright © 2020 watson. All rights reserved.
//

#import "C2BaseRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface C2HybridReq : C2BaseRequest

- (instancetype)initWithMethod:(NSString *)method url:(NSString *)url queryParams:(NSDictionary *)queryParams bodyParams:(NSDictionary *)bodyParams headers:(NSDictionary *)headers;

@end

NS_ASSUME_NONNULL_END
