//
//  LMGSDKVersionDeprecated.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-18.
//

#import <Foundation/Foundation.h>
#import "LMGNotification.h"

@interface LMGSDKVersionDeprecated : NSObject<LMGNotification>

@property (nonnull, nonatomic, readonly) NSString *query;
@property (nonnull, nonatomic, readonly) NSString *sunset;

- (nonnull instancetype)initWithQuery:(nonnull NSString *)query sunset:(nonnull NSString *)sunset NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
