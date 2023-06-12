//
//  LMGDASearchTermsStore.h
//  LMGData
//
//  Created by Róbert Grešo on 01/11/2018.
//

#import <Foundation/Foundation.h>
#import "LMGPagedResult.h"

NS_ASSUME_NONNULL_BEGIN

@protocol LMGDASearchTermsStore <NSObject>

- (nullable NSArray<NSString *> *)recentTerms;
- (void)save:(NSString *)term;
- (void)reset;

@end

NS_ASSUME_NONNULL_END
