//
//  PlayerCell.h
//  Rating
//
//  Created by zoe on 14-3-3.
//  Copyright (c) 2014年 Polyvi Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayerCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, weak) IBOutlet UILabel *gameLabel;
@property (nonatomic, weak) IBOutlet UIImageView *ratingImageView;

@end
