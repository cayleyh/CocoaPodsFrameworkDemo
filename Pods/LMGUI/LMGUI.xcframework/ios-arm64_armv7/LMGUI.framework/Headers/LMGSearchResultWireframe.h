//
//  LMGSearchResultWireframe.h
//  LMGUI
//
//  Created by Róbert Grešo on 22/10/2018.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LMGSearchResultWireframe : NSObject

+ (UIViewController *)searchResultViewController;
+ (UIViewController *)searchResultViewControllerWithEnabledBackgroundReloading:(BOOL)enableBackgroundReloading;

@end

NS_ASSUME_NONNULL_END
