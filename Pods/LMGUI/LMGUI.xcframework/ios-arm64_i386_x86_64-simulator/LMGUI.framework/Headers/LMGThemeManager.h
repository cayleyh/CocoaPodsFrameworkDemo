//
//  LMGThemeManager.h
//  Platform Client UI
//
//  Created by Myroslav Pomazan on 2018-08-15.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LMGTheme.h"

NS_ASSUME_NONNULL_BEGIN

/// LMGThemeManager implements the global SDK theme management
@interface LMGThemeManager : NSObject

+ (nonnull LMGTheme *)currentTheme;
+ (void)applyTheme:(nonnull LMGTheme *)theme;
+ (void)applyDefaultTheme;

#pragma mark Helper methods

+ (UIBarButtonItem *)getBarButtonItemWithIcon:(NSString *)icon forState:(UIControlState)state;

@end

NS_ASSUME_NONNULL_END
