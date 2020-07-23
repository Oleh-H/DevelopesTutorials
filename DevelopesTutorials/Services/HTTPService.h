//
//  HTTPService.h
//  DevelopesTutorials
//
//  Created by Oleh Haistruk on 22.07.2020.
//  Copyright © 2020 Oleh Haistruk. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^onComplete)(NSArray *_Nullable dataArray, NSString *_Nullable errMessage);

@interface HTTPService : NSObject

+ (id) instance;
- (void) gettutorials:(nullable onComplete)completionHandler;

@end

NS_ASSUME_NONNULL_END
