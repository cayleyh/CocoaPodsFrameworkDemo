//
//  LMGSessionIdentified.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-18.
//

#import <Foundation/Foundation.h>
#import "LMGSession.h"
#import "LMGNotification.h"

@interface LMGSessionIdentified : NSObject<LMGSessionNotification>

- (nonnull instancetype)initWithSession:(nonnull LMGSession *)session NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end

