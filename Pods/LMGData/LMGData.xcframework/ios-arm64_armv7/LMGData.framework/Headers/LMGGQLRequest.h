//
//  LMGGQLRequest.h
//  LMGData
//
//  Created by Cayley Humphries on 2019-08-01.
//  Copyright © 2019 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
@class LMGGraphQuery;

NS_ASSUME_NONNULL_BEGIN

@interface LMGGQLRequest : NSObject

- (instancetype)initWithGraphQuery:(LMGGraphQuery *)query;
- (instancetype)initWithGraphQuery:(LMGGraphQuery *)query variables:(NSDictionary *)variables;
- (instancetype)initWithGraphQuery:(LMGGraphQuery *)query operationName:(nullable NSString *)operationName variables:(nullable NSDictionary *)variables NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;

- (NSMutableArray *)serializeToQueryItems:(out NSError **)error;
- (NSData *)serializeToBody:(out NSError **)error;

@end

NS_ASSUME_NONNULL_END
