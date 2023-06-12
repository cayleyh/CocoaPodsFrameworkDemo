//
//  LMGDASaveableParams.h
//  Apollo
//
//  Created by Myroslav Pomazan on 2018-09-18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol LMGDASaveableParams <NSObject>

- (nullable NSString *)nextPage;
- (NSString *)saveableKey;

@end

@protocol LMGDASaveableListParams <LMGDASaveableParams>

- (NSString *)saveableKeyForNextPage:(NSString *)nextPage;

@end

NS_ASSUME_NONNULL_END
