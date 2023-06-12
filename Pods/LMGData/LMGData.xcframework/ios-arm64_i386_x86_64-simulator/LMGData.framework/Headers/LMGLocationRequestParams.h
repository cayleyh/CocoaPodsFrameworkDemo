//
//  LMGLocationRequestParams.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-28.
//

#import <Foundation/Foundation.h>

@interface LMGLocationRequestParams : NSObject<NSCopying>

@property (nonatomic, readonly) BOOL fetchCurrent;
@property (nonatomic, readonly) BOOL preciseLocation;

- (nonnull instancetype)initWithShouldFetchCurrent:(BOOL)fetchCurrent;
- (nonnull instancetype)initWithShouldFetchCurrent:(BOOL)fetchCurrent preciseLocation:(BOOL)preciseLocation NS_DESIGNATED_INITIALIZER;

@end
