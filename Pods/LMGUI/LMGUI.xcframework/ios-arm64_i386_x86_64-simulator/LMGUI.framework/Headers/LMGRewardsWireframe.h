//
//  LMGRewardsWireframe.h
//  LMGUI
//
//  Created by Esteban Vallejo - GITL on 17/04/2020.
//  Copyright © 2020 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LMGRewardsViewControllerConfiguration.h"

NS_ASSUME_NONNULL_BEGIN

@interface LMGRewardsWireframe : NSObject

+ (nonnull UIViewController *)inProgressRewardsViewControllerWithConfiguration:(nullable LMGRewardsViewControllerConfiguration *)configuration
                                                     enableBackgroundReloading:(BOOL)enableBackgroundReloading;
+ (nonnull UIViewController *)inProgressRewardsViewControllerWithConfiguration:(nullable LMGRewardsViewControllerConfiguration *)configuration;

+ (nonnull UIViewController *)earnedRewardsViewControllerWithConfiguration:(nullable LMGRewardsViewControllerConfiguration *)configuration
                                                 enableBackgroundReloading:(BOOL)enableBackgroundReloading;
+ (nonnull UIViewController *)earnedRewardsViewControllerWithConfiguration:(nullable LMGRewardsViewControllerConfiguration *)configuration;

@end

NS_ASSUME_NONNULL_END
