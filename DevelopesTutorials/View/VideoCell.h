//
//  VideoCell.h
//  DevelopesTutorials
//
//  Created by Oleh Haistruk on 23.07.2020.
//  Copyright © 2020 Oleh Haistruk. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Video;

NS_ASSUME_NONNULL_BEGIN

@interface VideoCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *thumbImage;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *descriptionLabel;
@property (weak, nonatomic) IBOutlet UIView *cellView;
-(void)updateUI:(nonnull Video*)video;
@end

NS_ASSUME_NONNULL_END
