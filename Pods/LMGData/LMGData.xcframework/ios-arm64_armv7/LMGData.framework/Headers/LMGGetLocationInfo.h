//
//  LMGGetLocationInfo.h
//  LMGData
//
//  Created by Esteban Vallejo - GITL on 28/04/2020.
//  Copyright © 2020 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGSessionRequiredUseCase.h"
#import "LMGLocationsRepository.h"

@class LMGGetDeviceLocation;
@class LMGDetailsRequestParams;

NS_ASSUME_NONNULL_BEGIN

@interface LMGGetLocationInfo : LMGSessionRequiredUseCase<LMGDetailsRequestParams *, LMGLocation *>

- (instancetype)initWithNotificationCenter:(id<LMGNotificationCenter>)notificationCenter getSession:(LMGGetSession *)getSession restartSession:(LMGRestartSession *)restartSession renewSession:(LMGRenewSession *)renewSession getLocation:(LMGGetDeviceLocation *)getDeviceLocation locationsRepository:(id<LMGLocationsRepository>)locationsRepository NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithNotificationCenter:(id<LMGNotificationCenter>)notificationCenter getSession:(LMGGetSession *)getSession restartSession:(LMGRestartSession *)restartSession renewSession:(LMGRenewSession *)renewSession NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
