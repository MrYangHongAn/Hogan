//
//  UIBarButtonItem+block.h
//  iOS-Base
//
//  Created by watson on 2020/6/11.
//  Copyright © 2020 watson. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIBarButtonItem (block)

/** Creates and returns a configured item containing the specified system item.

 @return Newly initialized item with the specified properties.
 @param systemItem The system item to use as the item representation. One of the constants defined in UIBarButtonSystemItem.
 @param action The block that gets fired on the button press.
 */
- (id)bk_initWithBarButtonSystemItem:(UIBarButtonSystemItem)systemItem handler:(void (^)(id sender))action NS_REPLACES_RECEIVER;

/** Creates and returns a configured item using the specified image and style.
 
 @return Newly initialized item with the specified properties.
 @param image The item’s image. If nil an image is not displayed.
 If this image is too large to fit on the bar, it is scaled to fit
 The size of a toolbar and navigation bar image is 20 x 20 points.
 @param style The style of the item. One of the constants defined in UIBarButtonItemStyle.
 @param action The block that gets fired on the button press.
 */
- (id)bk_initWithImage:(UIImage *)image style:(UIBarButtonItemStyle)style handler:(void (^)(id sender))action NS_REPLACES_RECEIVER;

/** Creates and returns a configured item using the specified image and style.

 @return Newly initialized item with the specified properties.
 @param image The item’s image. If nil an image is not displayed.
 @param landscapeImagePhone The image to be used for the item in landscape bars in the UIUserInterfaceIdiomPhone idiom.
 @param style The style of the item. One of the constants defined in UIBarButtonItemStyle.
 @param action The block that gets fired on the button press.
 */
- (id)bk_initWithImage:(UIImage *)image landscapeImagePhone:(UIImage *)landscapeImagePhone style:(UIBarButtonItemStyle)style handler:(void (^)(id sender))action NS_REPLACES_RECEIVER NS_AVAILABLE_IOS(5_0);

/** Creates and returns a configured item using the specified text and style.
 
 @return Newly initialized item with the specified properties.
 @param title The text displayed on the button item.
 @param style The style of the item. One of the constants defined in UIBarButtonItemStyle.
 @param action The block that gets fired on the button press.
 */
- (id)bk_initWithTitle:(NSString *)title style:(UIBarButtonItemStyle)style handler:(void (^)(id sender))action NS_REPLACES_RECEIVER;

@end

NS_ASSUME_NONNULL_END
