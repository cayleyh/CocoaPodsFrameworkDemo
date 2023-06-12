//
//  LMGAccessToken.h
//  LMGData
//
//  Created by Esteban Vallejo - GITL on 04/06/2020.
//  Copyright © 2020 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@class LMGAccessTokenBuilder;

NS_ASSUME_NONNULL_BEGIN

@interface LMGAccessToken: NSObject <NSCopying, NSCoding>

@property (nullable, nonatomic, copy, readonly) NSString *authToken;
@property (nonatomic) NSInteger version;

- (instancetype)initWith:(LMGAccessTokenBuilder *)builder NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark -
@interface LMGAccessTokenBuilder: NSObject

@property (nullable, nonatomic, copy) NSString *authToken;
@property (nonatomic) NSInteger version;

- (instancetype)initWithAuthToken:(nullable NSString *)authToken
                          version:(NSInteger)version NS_DESIGNATED_INITIALIZER;

- (instancetype)initWithAuthToken:(nullable NSString *)authToken;

- (instancetype)initWith:(LMGAccessToken *)accessToken;

- (instancetype)init NS_UNAVAILABLE;

- (LMGAccessToken *)build;

@end

NS_ASSUME_NONNULL_END
