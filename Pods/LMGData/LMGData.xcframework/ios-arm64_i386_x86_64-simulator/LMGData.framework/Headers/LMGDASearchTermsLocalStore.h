//
//  LMGDASearchTermsLocalStore.h
//  LMGData
//
//  Created by Róbert Grešo on 01/11/2018.
//

#import <Foundation/Foundation.h>
#import "LMGDASearchTermsStore.h"

NS_ASSUME_NONNULL_BEGIN

@protocol LMGDASearchTermsLocalSource <NSObject>

- (nullable NSArray<NSString *> *)recentTerms;
- (void)save:(NSString *)term;
- (void)reset;

@end

@interface LMGDASearchTermsLocalStore : NSObject<LMGDASearchTermsStore>

- (instancetype)initWithSource:(id<LMGDASearchTermsLocalSource>)source NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
