//
//  LMGSDCLLocationManager.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-28.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LMGSDCLLocationManager : NSObject

- (instancetype)initWithManager:(CLLocationManager *)locationManager NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;

- (BOOL)isAuthorized;
- (BOOL)isLocationServiceEnabled;
- (CLAuthorizationStatus)authorizationStatus;
- (CLAccuracyAuthorization)accuracyAuthorization;
- (void)getLocationWithCompletion:(void (^)(CLLocation *location, NSError *error))completionBlock;

@end

NS_ASSUME_NONNULL_END
