//
//  LMGKeyValueStorage.h
//  Apollo
//
//  Created by Myroslav Pomazan on 2018-09-10.
//

#import <Foundation/Foundation.h>

@interface LMGLDKeyValueStorage : NSObject

- (nullable id)getByKey:(nonnull NSString *)key;
- (void)set:(nullable id)object forKey:(nonnull NSString *)key;
- (BOOL)hasKey:(nonnull NSString *)key;
- (void)reset;

@end
