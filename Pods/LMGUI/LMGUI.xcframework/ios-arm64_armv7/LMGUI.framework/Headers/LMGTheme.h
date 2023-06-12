//
//  LMGTheme.h
//  LMGUI
//
//  Created by Cayley Humphries on 2022-05-02.
//  Copyright © 2022 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LMGTheme : NSObject

@property (nullable, nonatomic, strong) NSDictionary *colors;
@property (nullable, nonatomic, strong) NSDictionary<NSString *, NSNumber *> *spacing;
@property (nullable, nonatomic, strong) NSDictionary *sizing;
@property (nullable, nonatomic, strong) NSDictionary *type;
@property (nullable, nonatomic, strong) NSDictionary *icons;
@property (nullable, nonatomic, strong) NSDictionary *images;
@property (nullable, nonatomic, strong) NSDictionary *components;
@property (nonnull, nonatomic, strong) NSBundle *bundle;

- (instancetype)initWith:(nullable NSDictionary *)config NS_DESIGNATED_INITIALIZER;
- (instancetype)init;
- (nullable NSDictionary *)themeForComponentOfType:(Class)class;

@end

NS_ASSUME_NONNULL_END
