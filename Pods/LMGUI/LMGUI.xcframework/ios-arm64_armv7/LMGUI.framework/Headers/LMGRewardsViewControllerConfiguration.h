//
//  LMGRewardsViewControllerConfiguration.h
//  LMGUI
//
//  Created by Esteban Vallejo - GITL on 17/04/2020.
//  Copyright © 2020 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGRewardsType.h"

@class LMGRewardsViewControllerConfigurationBuilder;

NS_ASSUME_NONNULL_BEGIN

typedef void (^LMGRewardsViewControllerConfigurationBuildBlock)(LMGRewardsViewControllerConfigurationBuilder  * _Nonnull builder);

@interface LMGRewardsViewControllerConfiguration : NSObject

@property (nonatomic, readonly, getter=isContentAreaIgnored) BOOL ignoreContentArea;
@property (nonatomic, readonly) LMGRewardsType rewardsType;

- (nonnull instancetype)initWithBuilder:(nonnull LMGRewardsViewControllerConfigurationBuilder *)builder NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

+ (nonnull instancetype)configurationWith:(nullable LMGRewardsViewControllerConfigurationBuildBlock)block;

@end

@interface LMGRewardsViewControllerConfigurationBuilder: NSObject

@property (nonatomic, getter=isContentAreaIgnored) BOOL ignoreContentArea;
@property (nonatomic) LMGRewardsType rewardsType;

- (nonnull instancetype)initWithRewardsType:(LMGRewardsType)rewardsType NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithConfiguration:(LMGRewardsViewControllerConfiguration *)configuration;
- (nonnull instancetype)init NS_UNAVAILABLE;

- (nonnull LMGRewardsViewControllerConfiguration *)build;

@end

NS_ASSUME_NONNULL_END
