//
//  LMGBusinessShared.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-18.
//

#import <Foundation/Foundation.h>
#import "LMGPlatformId.h"
#import "LMGNotification.h"
#import "LMGNotifications.h"

@class LMGBusiness;
@class LMGLocation;

@interface LMGBusinessShared : NSObject<LMGNotification>

@property (nonnull, nonatomic, copy, readonly) LMGBusiness *business;
@property (nullable, nonatomic, copy, readonly) NSArray<LMGLocation *> *locations;
@property (nonatomic, readonly) LMGSharingMethod shareMethod;

- (nonnull instancetype)initWithBusiness:(nonnull LMGBusiness *)business locations:(nullable NSArray<LMGLocation *> *)locations shareMethod:(LMGSharingMethod)shareMethod NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
