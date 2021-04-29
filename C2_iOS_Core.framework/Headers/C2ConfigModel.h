//
//  C2ConfigModel.h
//  C2-iOS-Base
//
//  Created by watson on 2020/9/29.
//  Copyright © 2020 watson. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface C2ConfigModel : NSObject

@property (nonatomic, copy) NSArray *tabbars;
@property (nonatomic, assign) BOOL isAnonymousUse;//匿名使用
@property (nonatomic, copy) NSString *mainColor;//主色
@property (nonatomic, copy) NSString *auxiliaryColor;//辅色
@property (nonatomic, copy) NSString *naviColor;//导航条颜色
@property (nonatomic, copy) NSString *startPicture;//启动图

@end

NS_ASSUME_NONNULL_END
