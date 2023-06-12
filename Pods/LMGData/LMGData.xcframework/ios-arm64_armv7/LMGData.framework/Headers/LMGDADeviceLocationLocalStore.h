//
//  LMGDADeviceLocationLocalStore.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-28.
//

#import <Foundation/Foundation.h>
#import "LMGDADeviceLocationStore.h"

@protocol LMGDADeviceLocationLocalSource <NSObject>

- (nullable LMGCoordinate *)getDeviceCoordinateExpect:(NSError * _Nullable * _Nullable)error;


- (BOOL)hasLocation;


- (void)save:(nonnull LMGCoordinate *)coordinate;


@end

@interface LMGDADeviceLocationLocalStore : NSObject<LMGDADeviceLocationStore>

- (nonnull instancetype)initWithSource:(nonnull id<LMGDADeviceLocationLocalSource>)localSource NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
