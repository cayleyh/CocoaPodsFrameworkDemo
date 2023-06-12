//
//  LMGDebugLoggerLevel.h
//  LMGData
//
//  Created by Steve-GITL on 13/09/2019.
//  Copyright © 2019 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, LMGDebugLoggerLevel) {
    /**
     * Verbose is the most fine level of logging and should never be compiled into the
     * application. This is intended for temporary logs of very fine grained information for
     * debugging purposes
     */
    LMGDebugLoggerLevelVerbose = 0,
    /**
     * Debug level logging is used for debugging and should never be displayed in production.
     * This is typically fine grained information events
     */
    LMGDebugLoggerLevelDebug,
    /**
     *  Highlights course application information that may be useful for debugging or in production logs
     */
    LMGDebugLoggerLevelInfo,
    /**
     * Logs warnings for undecired behaviours.
     */
    LMGDebugLoggerLevelWarning,
    /**
     * Critical errors that were not recovered.
     */
    LMGDebugLoggerLevelError,
    /**
     * Prevents the SDK to emit any debug log.
     */
    LMGDebugLoggerLevelNone
};

NS_ASSUME_NONNULL_END
