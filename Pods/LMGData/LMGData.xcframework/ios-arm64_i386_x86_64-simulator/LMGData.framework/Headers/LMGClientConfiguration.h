//
//  LMGClientConfiguration.h
//  LMGData
//
//  Created by Steve-GITL on 13/08/2019.
//  Copyright © 2019 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGDebugLoggerLevel.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, LMGClientConfigurationEnvironment) {
    LMGClientConfigurationEnvironmentDev,
    LMGClientConfigurationEnvironmentStaging,
    LMGClientConfigurationEnvironmentProd
};

@interface LMGClientConfiguration : NSObject

+ (LMGClientConfiguration *)defaultConfig;

- (instancetype)initWithEnvironment:(LMGClientConfigurationEnvironment)environment
                        loggerLevel:(LMGDebugLoggerLevel)loggerLevel;

@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) LMGDebugLoggerLevel loggerLevel;
@property (nonatomic, nullable) NSString *authGraphApiEndpoint;
@property (nonatomic, nullable) NSString *defaultGraphApiEndpoint;
@property (nonatomic, nullable) NSString *statsApiEndpoint;

@end

NS_ASSUME_NONNULL_END
