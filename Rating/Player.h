//
//  Player.h
//  Rating
//
//  Created by zoe on 14-3-3.
//  Copyright (c) 2014年 Polyvi Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Player : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *game;
@property (nonatomic, assign) int rating;

@end
