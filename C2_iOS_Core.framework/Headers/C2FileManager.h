//
//  C2FileManager.h
//  C2-iOS-Base
//
//  Created by watson on 2020/6/17.
//  Copyright © 2020 watson. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface C2FileManager : NSObject

+ (BOOL)creatDirectorys;

+ (BOOL)clearDirectorys;

+ (NSString *)cachePath;

+ (NSString *)h5Directory;

+ (NSString *)tempDirectory;

+ (NSString *)h5FolderWithAppId:(NSString *)appId isTemp:(BOOL)isTemp;

+ (NSString *)h5FilePathWithFileName:(NSString *)fileName;

+ (NSString *)imageDirectory;

+ (NSString *)cacheMemorySize;

+ (BOOL)copyH5ToTempWithAppId:(NSString *)appId;

@end

NS_ASSUME_NONNULL_END
