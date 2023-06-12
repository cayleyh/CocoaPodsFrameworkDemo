//
//  LMGSearchWireframe.h
//  LMGUI
//
//  Created by Róbert Grešo on 24/10/2018.
//

#import <UIKit/UIKit.h>

@interface LMGSearchWireframe : NSObject

+ (nonnull UINavigationController *)searchNavigationController DEPRECATED_MSG_ATTRIBUTE("Use navigationController method instead.");
+ (nonnull UINavigationController *)navigationController;

@end

