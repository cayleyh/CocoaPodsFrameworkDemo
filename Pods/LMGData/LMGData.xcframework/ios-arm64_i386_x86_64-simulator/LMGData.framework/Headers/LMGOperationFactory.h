//
//  LMGOperationFactory.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-20.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGUseCaseOperation.h"
#import "LMGUser.h"
#import "LMGIdentifyUser.h"
#import "LMGBusinessesListRequestParams.h"
#import "LMGCollectionRequestParams.h"
#import "LMGDetailsRequestParams.h"
#import "LMGBookmarkOffer.h"
#import "LMGJoinRewards.h"
#import "LMGRedemptionTransitionRequestParams.h"
#import "LMGCollectionsListRequestParams.h"
#import "LMGLocationsMapRequestParams.h"
#import "LMGSearchTermsRequestParams.h"
#import "LMGLocationRequestParams.h"

NS_ASSUME_NONNULL_BEGIN

@protocol LMGIdentificationOperationsFactory <NSObject>

- (LMGUseCaseOperation<NoParams *, LMGUser *> *)getUser;
- (LMGUseCaseOperation<LMGIdentifyUserParams *, LMGUser *> *)identifyUser;
- (LMGUseCaseOperation<LMGIntegrationKey *, LMGSession *> *)startSession;
- (LMGUseCaseOperation<LMGIntegrationKey *, LMGSession *> *)renewOrStartSession;
- (LMGUseCaseOperation<NoParams *, NoParams *> *)logout;

@end

@protocol LMGBusinessOperationsFactory <NSObject>

- (LMGUseCaseOperation<LMGBusinessesListRequestParams *, LMGPagedResult<LMGBusiness *> *> *)getBusinessList;
- (LMGUseCaseOperation<LMGCollectionRequestParams *, LMGPagedResult<LMGBusiness *> *> *)getCollectionBusinessesList;
- (LMGUseCaseOperation<LMGDetailsRequestParams *, LMGBusiness *> *)getBusinessDetails;

@end

@protocol LMGOfferOperationsFactory <NSObject>

- (LMGUseCaseOperation<LMGDetailsRequestParams *, LMGOffer *> *)getOfferDetails;
- (LMGUseCaseOperation<LMGBookmarkOfferParams *, NoParams *> *)bookmarkOffer;
- (LMGUseCaseOperation<LMGJoinRewardsParams *, NoParams *> *)joinRewards;

@end

@protocol LMGOfferRedemptionOperationsFactory <NSObject>

- (LMGUseCaseOperation<LMGDetailsRequestParams *, LMGRedemptionState *> *)getRedemptionState;
- (LMGUseCaseOperation<LMGRedemptionTransitionRequestParams *, LMGRedemptionState *> *)transitionToNextState;

@end

@protocol LMGCollectionOperationsFactory <NSObject>

- (LMGUseCaseOperation<LMGDetailsRequestParams *, LMGCollection *> *)getCollectionDetails;
- (LMGUseCaseOperation<LMGCollectionsListRequestParams *, LMGPagedResult<LMGCollection *> *> *)getCollectionsList;

@end

@protocol LMGLocationOperationsFactory <NSObject>

- (LMGUseCaseOperation<LMGLocationsMapRequestParams *, LMGPagedResult<LMGLocation *> *> *)getMapLocations;
- (LMGUseCaseOperation<LMGDetailsRequestParams *, LMGLocation *> *)getLocationDetails;
- (LMGUseCaseOperation<LMGOffersListRequestParams *, NSArray<LMGOffer *> *> *)getOffersByLocation;

@end

@protocol LMGSearchTermsOperationsFactory <NSObject>

- (LMGUseCaseOperation<NoParams *, NSArray<NSString *> *> *)getSearchTerms;
- (LMGUseCaseOperation<LMGSearchTermsRequestParams *, NoParams *> *)saveSearchTerm;

@end

@protocol LMGDeviceLocationOperationsFactory <NSObject>

- (LMGUseCaseOperation<LMGLocationRequestParams *, LMGCoordinate *> *)getCurrentLocation;

@end

@protocol LMGOperationFactory <LMGIdentificationOperationsFactory, LMGBusinessOperationsFactory, LMGOfferOperationsFactory, LMGOfferRedemptionOperationsFactory, LMGCollectionOperationsFactory, LMGLocationOperationsFactory, LMGDeviceLocationOperationsFactory, LMGSearchTermsOperationsFactory>
@end

NS_ASSUME_NONNULL_END
