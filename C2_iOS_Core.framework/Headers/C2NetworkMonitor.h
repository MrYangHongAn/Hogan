//
//  C2NetworkMonitor.h
//  C2-iOS-Base
//
//  Created by watson on 2020/6/29.
//  Copyright © 2020 watson. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#define kNotificationNetworkChanged @"kNotificationNetworkChanged"

typedef NS_ENUM(NSInteger, C2NetworkStatus) {
    C2NetworkStatusUnknown            = -1,
    C2NetworkStatusNotReachable       = 0,
    C2NetworkStatusViaWWAN            = 1,
    C2NetworkStatusViaWiFi            = 2,
};

/**
 * 本地wifi变化时代理
 */
@class C2NetworkMonitor;
@protocol C2NetworkMonitorDelegate <NSObject>
@optional
- (void)monitor:(C2NetworkMonitor *)monitor reachabilityChanged:(C2NetworkStatus)status;
@end

@interface C2NetworkMonitor : NSObject

+ (void)startMonitoring;

+ (C2NetworkStatus)currentStatus;

@end

NS_ASSUME_NONNULL_END
