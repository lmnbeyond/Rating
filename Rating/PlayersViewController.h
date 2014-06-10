//
//  PlayersViewController.h
//  Rating
//
//  Created by zoe on 14-3-3.
//  Copyright (c) 2014年 Polyvi Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PlayerDetailsViewController.h"

@interface PlayersViewController : UITableViewController <PlayerDetailsViewControllerDelegate>

@property (nonatomic, strong) NSMutableArray *players;

@end
