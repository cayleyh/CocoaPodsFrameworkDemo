//
//  LMGOfferCardSwiped.h
//  LMGDomain
//
//  Created by Róbert Grešo on 03/07/2019.
//  Copyright © 2019 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGPlatformId.h"
#import "LMGNotification.h"

@class LMGOffer;
@class LMGBusiness;
@class LMGLocation;

@interface LMGOfferCardSwiped : NSObject<LMGNotification>

@property (nonnull, nonatomic, copy, readonly) LMGOffer *offer;
@property (nonnull, nonatomic, copy, readonly) LMGBusiness *business;
@property (nullable, nonatomic, copy, readonly) NSArray<LMGLocation *> *locations;

- (nonnull instancetype)initWithOffer:(nonnull LMGOffer *)offer business:(nonnull LMGBusiness *)business locations:(nullable NSArray<LMGLocation *> *)locations NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end

