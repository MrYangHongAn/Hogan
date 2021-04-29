//
//  C2TabbarController.h
//  C2-iOS-Base
//
//  Created by watson on 2020/6/17.
//  Copyright © 2020 watson. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface C2TabbarController : UITabBarController

@property (nonatomic, strong) NSMutableArray *VCs;

- (void)setUpChildViewController:(UIViewController*)controller title:(NSString *)title imageName:(NSString *)imageName seleceImageName:(NSString *)selectImageName;

@end

NS_ASSUME_NONNULL_END
