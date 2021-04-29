//
//  C2AppModel.h
//  C2-iOS-Base
//
//  Created by watson on 2020/9/25.
//  Copyright © 2020 watson. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, C2AppLevel) {
    C2AppLevel_System = 0,// 系统应用
    C2AppLevel_Business// 业务应用
};

typedef NS_ENUM(NSUInteger, C2AppType) {
    C2AppType_Applets = 3,// 小程序
    C2AppType_MicroApp,// 微应用
    C2AppType_H5,// H5应用(外部链接)
    C2AppType_Module,// 内置原生Module应用
};

NS_ASSUME_NONNULL_BEGIN

@interface C2AppDetailModel : NSObject

@property (nonatomic, copy) NSString *name;//应用名称
@property (nonatomic, copy) NSString *code;//应用编码
@property (nonatomic, assign) NSInteger level;//应用级别
@property (nonatomic, assign) C2AppType type;//应用类型

@end

// 包含小程序、微应用、APP
@interface C2AppModel : NSObject

@property (nonatomic, strong) C2AppDetailModel *app;

@property (nonatomic, copy) NSString *ID;
@property (nonatomic, copy) NSString *appId;//应用ID
@property (nonatomic, copy) NSString *name;//应用版本号
@property (nonatomic, copy) NSString *url;//应用下载地址
@property (nonatomic, assign) NSInteger versionCode;//应用版本
@property (nonatomic, copy) NSString *onlineAddress;//应用线上地址
@property (nonatomic, copy) NSString *hashCode;//MD5值
@property (nonatomic, copy) NSString *updateInfo;//更新说明

@property (nonatomic, copy) NSString *localPath;//本地路径
@property (nonatomic, copy) NSString *tempPath;//临时路径
@property (nonatomic, copy) NSString *filePath;//文件路径

@end

NS_ASSUME_NONNULL_END
