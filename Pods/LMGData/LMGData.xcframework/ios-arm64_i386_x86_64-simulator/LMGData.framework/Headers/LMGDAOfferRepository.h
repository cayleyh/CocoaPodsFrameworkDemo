//
//  LMGDAOfferRepository.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-12.
//

#import "LMGDAOfferStoreFactory.h"
#import "LMGOfferRepository.h"
#import "NSArray+Monads.h"
@class LMGConfig;

@interface LMGDAOfferRepository : NSObject<LMGOfferRepository>

- (nonnull instancetype)initWithFactory:(nonnull LMGDAOfferStoreFactory *)factory configuration:(nonnull LMGConfig *)configuration NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
