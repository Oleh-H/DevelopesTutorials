//
//  VideoCell.m
//  DevelopesTutorials
//
//  Created by Oleh Haistruk on 23.07.2020.
//  Copyright © 2020 Oleh Haistruk. All rights reserved.
//

#import "VideoCell.h"
#import "Video.h"


@implementation VideoCell

- (void)awakeFromNib {
    [super awakeFromNib];
    
    self.layer.cornerRadius = 2.0;
    self.layer.shadowColor = [UIColor colorWithRed:157.0 / 255.0 green:157.0 / 255.0 blue:157.0 / 255.0 alpha:0.8].CGColor;
    self.layer.shadowOpacity = 0.8;
    self.layer.shadowRadius = 5.0;
    self.layer.shadowOffset = CGSizeMake(0.0, 2.0);
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

-(void)updateUI:(nonnull Video *)video {
    self.titleLabel.text = video.videoTitle;
    self.descriptionLabel.text = video.videoDescription;
    
    UIImage *image = [UIImage imageWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:video.thumbnailURL]]];
    self.thumbImage.image = image;
    
}

@end
