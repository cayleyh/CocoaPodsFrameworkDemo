//
//  LMGBookmarksWireframe.h
//  Platform Client UI
//
//  Created by Myroslav Pomazan on 2018-08-30.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LMGBookmarksViewControllerConfiguration.h"

@interface LMGBookmarksWireframe : NSObject

+ (nonnull UIViewController *)bookmarksViewControllerWithConfiguration:(nullable LMGBookmarksViewControllerConfiguration *)configuration DEPRECATED_MSG_ATTRIBUTE("Use viewControllerWithConfiguration: method instead.");
+ (nonnull UIViewController *)viewControllerWithConfiguration:(nullable LMGBookmarksViewControllerConfiguration *)configuration;
+ (nonnull UIViewController *)viewControllerWithConfiguration:(nullable LMGBookmarksViewControllerConfiguration *)configuration
                                    enableBackgroundReloading:(BOOL)enableBackgroundReloading;

@end
