//
//  LMGMapWireframe.h
//  LMGUI
//
//  Created by Róbert Grešo on 02/10/2018.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface LMGMapWireframe : NSObject

+ (nonnull UIViewController *)mapViewController DEPRECATED_MSG_ATTRIBUTE("Use viewController method instead.");
+ (nonnull UIViewController *)viewController;
+ (nonnull UIViewController *)viewControllerWithEnabledBackgroundReloading:(BOOL)enableBackgroundReloading;

@end
