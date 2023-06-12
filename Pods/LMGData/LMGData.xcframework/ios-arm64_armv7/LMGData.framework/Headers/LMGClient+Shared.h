//
//  LMGClient+Shared.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-25.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import "LMGClient.h"
#import "LMGClientConfiguration.h"

@interface LMGClient (Shared)

+ (void)inithSharedWith:(nonnull LMGClientConfiguration *)config;
+ (nonnull instancetype)shared;

@end
