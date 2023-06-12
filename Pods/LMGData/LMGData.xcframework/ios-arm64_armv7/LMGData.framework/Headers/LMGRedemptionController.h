//
//  LMGRedemptionController.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-01.
//

#import <Foundation/Foundation.h>
#import "LMGRedemptionObserver.h"
#import "LMGOperationFactory.h"
#import "LMGCancellable.h"

NS_ASSUME_NONNULL_BEGIN

extern NSString * const LMGRedemptionControllerErrorDomain;
extern NSInteger const LMGRedemptionControllerErrorRequestCancelled;
extern NSInteger const LMGRedemptionControllerErrorInvalidLocation;
extern NSInteger const LMGRedemptionControllerErrorInvalidPIN;
extern NSString * const LMGRedemptionControllerErrorInvalidLocationState;

@class LMGClient;
@class LMGRedemptionState;

@interface LMGRedemptionController : NSObject

@property (nonatomic, copy, readonly) LMGPlatformId *offerId;
@property (nonatomic, copy, readonly) LMGPlatformId *businessId;
@property (nonatomic, copy, readonly) LMGPlatformId *locationId;
@property (nullable, nonatomic, copy, readonly) LMGRedemptionState *currentState;

- (instancetype)initWith:(id<LMGOfferRedemptionOperationsFactory,LMGDeviceLocationOperationsFactory>)operationFactory
                           queue:(NSOperationQueue *)queue
                         offerId:(LMGPlatformId *)offerId
                      businessId:(LMGPlatformId *)businessId
                      locationId:(LMGPlatformId *)locationId NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;

- (id<LMGCancellable>)refresh;
- (nullable id<LMGCancellable>)transitionToNextState;

- (void)addObserver:(id<LMGRedemptionObserver>)observer;
- (void)removeObserver:(id<LMGRedemptionObserver>)observer;
- (void)invalidateTimer;

@end

@interface NSError (LMGRedemptionOperationsFactory)

+ (instancetype)redemptionCancelled;
+ (instancetype)invalidLocationWithState:(nullable LMGRedemptionState *)state;
+ (instancetype)invalidPIN;
+ (instancetype)lowAccuracy;

@end

NS_ASSUME_NONNULL_END
