//
//  UIControl+Block.h
//  iOS-Base
//
//  Created by watson on 2020/6/11.
//  Copyright © 2020 watson. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIControl (Block)

///-----------------------------------
/// @name Block event handling
///-----------------------------------

/** Adds a block for a particular event to an internal dispatch table.

 @param handler A block representing an action message, with an argument for the sender.
 @param controlEvents A bitmask specifying the control events for which the action message is sent.
 @see removeEventHandlersForControlEvents:
 */
- (void)bk_addEventHandler:(void (^)(id sender))handler forControlEvents:(UIControlEvents)controlEvents;

/** Removes all blocks for a particular event combination.
 @param controlEvents A bitmask specifying the control events for which the block will be removed.
 @see addEventHandler:forControlEvents:
 */
- (void)bk_removeEventHandlersForControlEvents:(UIControlEvents)controlEvents;

/** Checks to see if the control has any blocks for a particular event combination.
 @param controlEvents A bitmask specifying the control events for which to check for blocks.
 @see addEventHandler:forControlEvents:
 @return Returns YES if there are blocks for these control events, NO otherwise.
 */
- (BOOL)bk_hasEventHandlersForControlEvents:(UIControlEvents)controlEvents;

@end

NS_ASSUME_NONNULL_END
