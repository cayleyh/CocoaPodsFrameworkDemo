//
//  LMGDASessionRepository.h
//  Apollo
//
//  Created by Myroslav Pomazan on 2018-09-07.
//

#import <Foundation/Foundation.h>
#import "LMGDASessionStoreFactory.h"
#import "LMGDAUserStoreFactory.h"
#import "LMGSessionRepository.h"

NS_ASSUME_NONNULL_BEGIN

@interface LMGDASessionRepository : NSObject<LMGSessionRepository>

- (nonnull instancetype)initWithSessionStoreFactory:(LMGDASessionStoreFactory *)sessionStorefactory
                                   userStoreFactory:(LMGDAUserStoreFactory *)userStoreFactory NS_DESIGNATED_INITIALIZER;

- (nonnull instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
