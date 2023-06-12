//
//  NSDictionary+DataAccess.h
//  LMGData
//
//  Created by Cayley Humphries on 2019-08-07.
//  Copyright © 2019 GetintheLoop Marketing Ltd. All rights reserved.
//

#import "LMGBusiness.h"
#import "LMGLocation.h"
#import "LMGLocationCategory.h"
#import "LMGCoordinate.h"
#import "LMGAddress.h"
#import "LMGOffer.h"
#import "LMGOfferLimits.h"
#import "LMGRedemptionState.h"
#import "LMGRedemptionStateTransition.h"
#import "LMGRedemptionTransitionArgument.h"
#import "LMGSession.h"

@class LMGOfferStateMeta;

NS_ASSUME_NONNULL_BEGIN

@interface NSDictionary (DataAccess)

- (LMGAddress *)toLMGAddress;

- (LMGLocation *)toLMGLocationWithBusiness:(nullable LMGBusiness *)business;

- (LMGBusiness *)toLMGBusiness;

- (LMGFlagType)getLMGFlagType;

- (LMGOffer *)toLMGOfferWithBusiness:(nullable LMGBusiness *)business;

- (LMGLocationCategory *)toLMGLocationCategory;

- (LMGOfferStateMeta *)toLMGOfferStateMeta;

- (LMGOfferLimits *)toLMGOfferLimits;

- (LMGRedemptionState *)toLMGRedemptionState;

- (LMGRedemptionStateTransition *)toLMGRedemptionStateTransition;

- (LMGRedemptionTransitionArgument *)toLMGRedemptionTransitionArgument;

- (LMGSession *)toLMGSession:(nullable LMGSession *)session
                      userId:(nullable LMGUserId *)userId
                        hmac:(nullable LMGUserHMAC *)hmac;

@end

NS_ASSUME_NONNULL_END
