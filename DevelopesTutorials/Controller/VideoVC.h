//
//  VideoVC.h
//  DevelopesTutorials
//
//  Created by Oleh Haistruk on 23.07.2020.
//  Copyright © 2020 Oleh Haistruk. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Video;
NS_ASSUME_NONNULL_BEGIN

@interface VideoVC : UIViewController <UIWebViewDelegate>
@property (nonatomic,strong) Video *video;
@end

NS_ASSUME_NONNULL_END
