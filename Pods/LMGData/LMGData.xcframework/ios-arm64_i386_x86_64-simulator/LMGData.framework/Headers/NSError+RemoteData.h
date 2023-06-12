//
//  NSError+RemoteData.h
//  LMGData
//
//  Created by Cayley Humphries on 2019-07-31.
//  Copyright © 2019 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

extern NSString *const LMGRemoteDataErrorDomain;

extern NSInteger const LMGRDApiErrorCode;
extern NSInteger const LMGRDNoResultErrorCode;
extern NSInteger const LMGRDNoDataErrorCode;

extern NSString *const LMGRDRedemptionStateTransitionErrorDomain;
extern NSInteger const LMGRDRedemptionStateTransitionErrorNotSupportedCode;
extern NSInteger const LMGRDRedemptionStateTransitionErrorArgSerializationFailure;

@interface NSError (RemoteData)

+ (nonnull instancetype)apiError:(NSError *)error;
+ (nonnull instancetype)graphError:(NSDictionary *)errorDict;
+ (nonnull instancetype)argsSerializationFailure:(nullable NSError *)error ;
+ (nonnull instancetype)noResultError;
+ (nonnull instancetype)noDataError;
+ (nonnull instancetype)stateTransitionNotSuported;

@end

NS_ASSUME_NONNULL_END
