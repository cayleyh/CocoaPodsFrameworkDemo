//
//  LMGGQLResponse.h
//  LMGData
//
//  Created by Cayley Humphries on 2019-08-01.
//  Copyright © 2019 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LMGGQLResponse : NSObject

@property NSDictionary *data;

- (instancetype)initWithResponse:(NSDictionary *)response NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;

- (nullable id)valueForKeyPathOrNil:(nonnull NSString *)path;

@end

NS_ASSUME_NONNULL_END
