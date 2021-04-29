//
//  C2DBManager.h
//  C2-iOS-Base
//
//  Created by watson on 2020/6/29.
//  Copyright © 2020 watson. All rights reserved.
//

#import <YTKKeyValueStore.h>

NS_ASSUME_NONNULL_BEGIN

extern NSString *const kTableName_UserInfo;
extern NSString *const kTableName_StaticFiles;
extern NSString *const kTableName_RequestCache;
extern NSString *const kTableName_HybridCache;

/**
所有数据库操作类
*/
@interface C2DBManager : NSObject

+ (instancetype)sharedInstance;

+ (long long)dbFileSize;

/**
 清除数据库用于缓存的数据（不包含用户数据）
 */
+ (void)clearAllCacheTables;

- (void)createTable:(NSString *)tableName;

- (void)clearTable:(NSString *)tableName;

- (void)insertReplaceModel:(id)model withKey:(NSString *)key toTable:(NSString *)tableName;

- (void)deleteModelWithKey:(NSString *)key inTable:(NSString *)tableName;

- (id)fetchModelWithKey:(NSString *)key fromTable:(NSString *)tableName;

- (NSArray *)fetchAllModelsFromTable:(NSString *)tableName;

- (void)insertTempData:(NSString *)data isTemp:(BOOL)isTemp toTable:(NSString *)tableName;

- (void)clearTempDataInTable:(NSString *)tableName;

@end

NS_ASSUME_NONNULL_END
