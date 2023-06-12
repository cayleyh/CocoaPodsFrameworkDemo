//
//  LMGCoordinate+CoreLocation.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-28.
//

#import <CoreLocation/CoreLocation.h>
#import "LMGCoordinate.h"

@interface LMGCoordinate (CoreLocation)

+ (nonnull instancetype)coordinateFrom:(nonnull CLLocation *)location;
- (nonnull CLLocation *)toCLLocation;

@end
