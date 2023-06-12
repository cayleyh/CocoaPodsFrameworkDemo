//
//  LMGBusinessWebsiteVisited.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-23.
//

#import <Foundation/Foundation.h>
#import "LMGNotification.h"

@class LMGBusiness;
@class LMGLocation;

@interface LMGBusinessWebsiteVisited : NSObject<LMGNotification>

@property (nonnull, nonatomic, copy, readonly) LMGBusiness *business;
@property (nullable, nonatomic, copy, readonly) NSArray<LMGLocation *> *locations;

- (nonnull instancetype)initWithBusiness:(nonnull LMGBusiness *)business locations:(nullable NSArray<LMGLocation *> *)locations NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;


@end
