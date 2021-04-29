//
//  NSBundle+Resource.h
//  C2-iOS-Core
//
//  Created by watson on 2020/12/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSBundle (Resource)

+ (UIImage *)bundleImageWithName:(NSString *)imageName;

@end

NS_ASSUME_NONNULL_END
