//
//  LMGDACollectionRepository.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-19.
//

#import <Foundation/Foundation.h>
#import "LMGDACollectionStoreFactory.h"
#import "LMGCollectionRepository.h"

@interface LMGDACollectionRepository : NSObject<LMGCollectionRepository>

- (nonnull instancetype)initWithFactory:(nonnull LMGDACollectionStoreFactory *)factory NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
