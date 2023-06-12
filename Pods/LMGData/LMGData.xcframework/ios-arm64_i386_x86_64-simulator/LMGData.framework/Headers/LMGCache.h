//
//  LMGCache.h
//  LMGData
//
//  Created by Cayley Humphries on 2019-11-27.
//  Copyright © 2019 GetintheLoop Marketing Ltd. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN

/**
 A cache object that allow enumeration of keys
 
 Based on https://github.com/ViacheslavSoroka/VSCache
 */
@interface LMGCache <KeyType, ObjectType> : NSObject

@property (nonatomic, readonly) NSUInteger count;
@property (nonatomic, assign) NSUInteger countLimit;

- (instancetype)initWithCountLimit:(NSInteger)countLimit;

- (void)setObject:(nullable ObjectType)object forKey:(KeyType)key;

- (void)removeObjectForKey:(KeyType)key;
- (void)removeObject:(ObjectType)object;
- (void)removeAllObjects;

- (nullable ObjectType)objectForKey:(KeyType)key;
- (BOOL)hasObjectForKey:(nonnull NSString *)key;

- (NSEnumerator<ObjectType> *)objectEnumerator;
- (NSEnumerator<KeyType> *)keyEnumerator;

@end

NS_ASSUME_NONNULL_END
