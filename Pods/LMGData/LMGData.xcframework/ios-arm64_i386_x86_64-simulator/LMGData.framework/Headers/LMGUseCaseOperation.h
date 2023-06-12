//
//  LMGUseCaseOperation.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-19.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGBaseUseCase.h"

typedef NS_ENUM(NSUInteger, LMGUseCaseOperationParamsPolicy) {
    LMGUseCaseOperationParamsOptional,
    LMGUseCaseOperationParamsRequired
};

@interface LMGUseCaseOperation<Params, ReturnType> : NSOperation

@property (nullable, nonatomic, strong, readonly, getter=getParams) id params;
@property (nonnull, nonatomic, strong, readonly) LMGBaseUseCase *useCase;

- (nonnull instancetype)initWithUseCase:(nonnull LMGBaseUseCase *)useCase paramsPolicy:(LMGUseCaseOperationParamsPolicy)policy NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

- (void)setParams:(nullable Params)params;
- (void)setOnFinish:(void (^_Nonnull)(ReturnType _Nullable, NSError * _Nullable))finishBlock;

@end
