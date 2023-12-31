//
//  LMGDADeviceLocationSensorStore.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-28.
//

#import <Foundation/Foundation.h>
#import "LMGDADeviceLocationStore.h"

@protocol LMGDADeviceLocationSensorSource <NSObject>

- (nullable LMGCoordinate *)getDeviceCoordinateExpect:(NSError * _Nullable * _Nullable)error preciseLocation:(BOOL)preciseLocation;

- (BOOL)hasDevicePermissions;

@end

@interface LMGDADeviceLocationSensorStore : NSObject<LMGDADeviceLocationStore>

- (nonnull instancetype)initWithSource:(nonnull id<LMGDADeviceLocationSensorSource>)sensorSource NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
