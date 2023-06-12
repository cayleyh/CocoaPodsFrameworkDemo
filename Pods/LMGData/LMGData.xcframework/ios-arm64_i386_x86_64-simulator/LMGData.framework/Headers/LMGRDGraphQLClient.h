//
//  LMGRDGraphQLClient.h
//  LMGData
//
//  Created by Cayley Humphries on 2019-07-31.
//  Copyright © 2019 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGRDRequestConfigurator.h"
#import "LMGSession.h"
#import "LMGCoordinate.h"
#import "LMGGQLRequest.h"
#import "LMGGQLResponse.h"
#import "NSNotificationCenter+LMGNotificationCenter.h"

NS_ASSUME_NONNULL_BEGIN

@interface LMGRDGraphQLClient : NSObject

@property (nonatomic) LMGRDRequestConfigurator *configurator;

- (instancetype)initWithEndpoint:(NSString *)endpoint notificationCenter:(id<LMGNotificationCenter>)notificationCenter;
- (nullable LMGGQLResponse *)fetchSync:(LMGGQLRequest *)query expect:(out NSError **)error ;
- (nullable LMGGQLResponse *)performSync:(LMGGQLRequest *)query expect:(out NSError **)error ;

@end

NS_ASSUME_NONNULL_END
