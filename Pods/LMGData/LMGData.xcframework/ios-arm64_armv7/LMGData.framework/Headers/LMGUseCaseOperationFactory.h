//
//  LMGUseCaseOperationFactory.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-19.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGOperationFactory.h"

@protocol LMGSessionRepository;
@protocol LMGOfferRepository;
@protocol LMGBusinessRepository;
@protocol LMGCollectionRepository;
@protocol LMGDeviceLocationRepository;
@protocol LMGLocationsRepository;
@protocol LMGSearchTermsRepository;

NS_ASSUME_NONNULL_BEGIN

@interface LMGUseCaseOperationFactory : NSObject<LMGOperationFactory>

- (instancetype)initWithNotificationCenter:(id<LMGNotificationCenter>)notificationCenter
                         sessionRepository:(id<LMGSessionRepository>)sessionRepository
                           offerRepository:(id<LMGOfferRepository>)offerRepository
                        businessRepository:(id<LMGBusinessRepository>)businessRepository
                      collectionRepository:(id<LMGCollectionRepository>)collectionRepository
                       locationsRepository:(id<LMGLocationsRepository>)locationsRepository
                  deviceLocationRepository:(id<LMGDeviceLocationRepository>)deviceLocationRepository
                     searchTermsRepository:(id<LMGSearchTermsRepository>)searchTermsRepository NS_DESIGNATED_INITIALIZER;

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
