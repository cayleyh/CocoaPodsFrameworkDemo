//
//  LMGLog.h
//  LMGData
//
//  Created by Steve-GITL on 20/08/2020.
//  Copyright © 2020 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGDebugLoggerLevel.h"

NS_ASSUME_NONNULL_BEGIN

@interface LMGLog : NSObject

@property (nonatomic) LMGDebugLoggerLevel level;

+ (instancetype)shared;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

- (void)log:(NSString *)message level:(LMGDebugLoggerLevel)level;

+ (void)verbose:(NSString *)message;
+ (void)debug:(NSString *)message;
+ (void)info:(NSString *)message;
+ (void)warning:(NSString *)message;
+ (void)error:(NSString *)message;

@end

NS_ASSUME_NONNULL_END
