//
//  LMGSnowplowTrackable.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-23.
//

#import <Foundation/Foundation.h>
#import "LMGNotifications.h"
#import "LMGSession.h"

@import SnowplowTracker.SPSelfDescribingJson;

extern NSString *_Nonnull const LMGSnowplowEventKey;
extern NSString *_Nonnull const LMGSnowplowSessionObjectKey;
extern NSString *_Nonnull const LMGSnowplowSessionIdKey;
extern NSString *_Nonnull const LMGSnowplowMessageKey;
extern NSString *_Nonnull const LMGSnowplowPropertiesKey;
extern NSString *_Nonnull const LMGSnowplowBusinessIdKey;
extern NSString *_Nonnull const LMGSnowplowOfferIdKey;
extern NSString *_Nonnull const LMGSnowplowCollectionIdKey;
extern NSString *_Nonnull const LMGSnowplowLocationIdsKey;
extern NSString *_Nonnull const LMGSnowplowShareMethodKey;
extern NSString *_Nonnull const LMGSnowplowActionKey;

extern NSString *_Nonnull const LMGSnowplowFacebookShareMethod;
extern NSString *_Nonnull const LMGSnowplowTwitterShareMethod;
extern NSString *_Nonnull const LMGSnowplowEmailShareMethod;
extern NSString *_Nonnull const LMGSnowplowSMSShareMethod;
extern NSString *_Nonnull const LMGSnowplowCopyShareMethod;
extern NSString *_Nonnull const LMGSnowplowUnknownShareMethod;

@protocol LMGSnowplowTrackable <NSObject>

- (nonnull SPSelfDescribingJson *)snowPlowDataForSessionId:(nonnull LMGSessionId *)sessionId;

@end

@interface LMGSnowplowUtils : NSObject

+ (nonnull NSString *)shareMethodFrom:(LMGSharingMethod)shareMethod;

@end
