//
//  LMGOfferLimitWindow.h
//  LMGData
//
//  Created by Brian Giupponi on 13/10/2021.
//  Copyright © 2021 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, LMGOfferLimitWindow) {
    LMGOfferLimitHour,
    LMGOfferLimitDay,
    LMGOfferLimitWeek,
    LMGOfferLimitMonth,
    LMGOfferLimitWindowUnknown
};

@interface LMGOfferLimitWindowMapper : NSObject

- (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

+ (nullable NSString *)stringFromWindow:(LMGOfferLimitWindow)window;
+ (LMGOfferLimitWindow)windowFromString:(NSString *)string;

@end

NS_ASSUME_NONNULL_END
