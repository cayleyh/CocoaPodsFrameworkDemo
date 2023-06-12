//
//  LMGSDDeviceLocationSource.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-28.
//

#import <Foundation/Foundation.h>
#import "LMGDADeviceLocationSensorStore.h"
#import "LMGSDCLLocationManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface LMGSDDeviceLocationSource : NSObject<LMGDADeviceLocationSensorSource>

- (nonnull instancetype)initWithManager:(nonnull LMGSDCLLocationManager *)locationManager NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end

@interface NSError (Location)

+ (instancetype)locationServiceDisable;
+ (instancetype)locationServiceNotDetermined;
+ (instancetype)locationServiceRestricted;
+ (instancetype)locationServiceDenied;
+ (instancetype)preciseLocationDisable;

@end

NS_ASSUME_NONNULL_END
