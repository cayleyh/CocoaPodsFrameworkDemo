//
//  LMGOfferStateChangeError.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-18.
//

#import <Foundation/Foundation.h>
#import "LMGPlatformId.h"
#import "LMGNotification.h"

@interface LMGOfferStateChangeError : NSObject<LMGNotification>

@property (nonnull, nonatomic, readonly) LMGPlatformId *offerId;
@property (nullable, nonatomic, readonly) NSArray<LMGPlatformId *> *locationIds;
@property (nonnull, nonatomic, readonly) NSString *state;
@property (nullable, nonatomic, readonly) NSString *transition;
@property (nonnull, nonatomic, readonly) NSError *error;

- (nonnull instancetype)initWithOfferId:(nonnull LMGPlatformId *)offerId locationIds:(nullable NSArray<LMGPlatformId *> *)locationIds state:(nonnull NSString *)currentState transition:(nullable NSString *)transition error:(nonnull NSError *)error NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;


@end
