//
//  C2FileHandler.h
//  C2-iOS-Base
//
//  Created by watson on 2020/12/14.
//  Copyright © 2020 watson. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^C2FileCompletionBlock)(BOOL isSuccess, id _Nullable resultObj);

@interface C2FileHandler : NSObject

+ (void)uploadFileWithFileType:(NSString *)type data:(NSData *)data fileName:(NSString *)fileName url:(NSString *)url headers:(NSDictionary *)headers formdata:(NSDictionary *)formdata name:(NSString *)name completionHandler:(C2FileCompletionBlock)completionHandler;
+ (void)downloadFileWithUrl:(NSString *)url completionHandler:(C2FileCompletionBlock)completionHandler;
+ (void)uploadImageWithFileType:(NSString *)type data:(NSData *)data fileName:(NSString *)fileName completionHandler:(C2FileCompletionBlock)completionHandler;

@end

NS_ASSUME_NONNULL_END
