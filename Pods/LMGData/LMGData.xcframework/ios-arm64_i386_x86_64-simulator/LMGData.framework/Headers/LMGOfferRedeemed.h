//
//  LMGOfferRedeemed.h
//  LMGDomain
//
//  Created by Cayley Humphries on 2019-06-06.
//  Copyright © 2019 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGPlatformId.h"
#import "LMGNotification.h"
#import "LMGOfferStateMeta.h"

@interface LMGOfferRedeemed : NSObject<LMGNotification>

@property (nonnull, nonatomic, readonly) LMGPlatformId *offerId;
@property (nonnull, nonatomic, readonly) LMGPlatformId *businessId;
@property (nullable, nonatomic, readonly) NSArray<LMGPlatformId *> *locationIds;
@property (nonatomic, readonly) LMGOfferStateActionType action;

- (nonnull instancetype)initWithOfferId:(nonnull LMGPlatformId *)offerId
                             businessId:(nonnull LMGPlatformId *)businessId
                           locationIds:(nullable NSArray<LMGPlatformId *> *)locationIds
                                 action:(LMGOfferStateActionType)action NS_DESIGNATED_INITIALIZER;

- (nonnull instancetype)init NS_UNAVAILABLE;

@end
