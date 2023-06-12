//
//  LMGDADeviceLocationStore.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-28.
//

#import <Foundation/Foundation.h>
#import "LMGCoordinate.h"

@protocol LMGDADeviceLocationStore <NSObject>

- (nullable LMGCoordinate *)getDeviceCoordinateExpect:(NSError * _Nullable * _Nullable)error preciseLocation:(BOOL)preciseLocation;


- (BOOL)hasDevicePermissions;


- (void)save:(nonnull LMGCoordinate *)coordinate;


@end
