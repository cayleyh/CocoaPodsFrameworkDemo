//
//  LMGDADeviceLocationRepository.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-28.
//

#import <Foundation/Foundation.h>
#import "LMGDADeviceLocationStoreFactory.h"
#import "LMGDeviceLocationRepository.h"

@interface LMGDADeviceLocationRepository : NSObject<LMGDeviceLocationRepository>

- (nonnull instancetype)initWithFactory:(nonnull LMGDADeviceLocationStoreFactory *)factory NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
