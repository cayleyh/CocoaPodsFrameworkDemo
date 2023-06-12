//
//  LMGDataProviderObserver.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-29.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol LMGDataProviderObserver <NSObject>

- (void)providerDidUpdateWith:(nonnull NSArray *)objects;
- (void)providerDidFailWith:(nonnull NSError *)error;

@end
