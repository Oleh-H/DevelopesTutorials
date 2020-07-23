//
//  Video.h
//  DevelopesTutorials
//
//  Created by Oleh Haistruk on 23.07.2020.
//  Copyright © 2020 Oleh Haistruk. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Video : NSObject
@property(nonatomic,strong) NSString *videoTitle;
@property(nonatomic,strong) NSString *videoDescription;
@property(nonatomic,strong) NSString *videoIframe;
@property(nonatomic,strong) NSString *thumbnailURL;
@end

NS_ASSUME_NONNULL_END
