//
//  LMGDALocationStoreFactory.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-01.
//

#import <Foundation/Foundation.h>
#import "LMGDALocationLocalStore.h"
#import "LMGDALocationRemoteStore.h"

@interface LMGDALocationStoreFactory : NSObject

- (nonnull instancetype)initWithLocalSource:(nonnull id<LMGDALocationLocalSource>)localSource remoteSource:(nonnull id<LMGDALocationRemoteSource>)remoteSource NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

- (nonnull id<LMGDALocationStore>)storeForParams:(nonnull id<LMGDASaveableParams>)params refresh:(BOOL)shouldRefresh;
- (nonnull id<LMGDALocationStore>)storeForSave;

@end
