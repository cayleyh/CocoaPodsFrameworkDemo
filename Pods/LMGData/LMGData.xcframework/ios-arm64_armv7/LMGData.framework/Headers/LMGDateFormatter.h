//
//  LMGDateFormatter.h
//  LMGUI
//
//  Created by Brian Giupponi on 23/07/2020.
//  Copyright © 2020 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, LMGDateFormatOption) {
    LMGDateFormatOptionTime,
    LMGDateFormatOptionDate,
    LMGDateFormatOptionDateAndTime,
    LMGDateFormatOptionFullDateAndTime
};

@interface LMGDateFormatter : NSDateFormatter

@property (nonatomic, assign) LMGDateFormatOption dateFormatOption;

- (instancetype)initWithDateFormatOption:(LMGDateFormatOption)option andLocale:(NSLocale *)locale;
- (instancetype)initWithDateFormatOption:(LMGDateFormatOption)option NS_DESIGNATED_INITIALIZER;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

- (void)setDateFormat:(nullable NSString *)dateFormat NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END

