//
//  Video.h
//  DevslopesTutorials
//
//  Created by Pavlos Nicolaou on 20/09/2016.
//  Copyright © 2016 Pavlos Nicolaou. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Video : NSObject
@property(nonatomic,strong) NSString *videoTitle;
@property(nonatomic,strong) NSString *videoDescription;
@property(nonatomic,strong) NSString *videoIframe;
@property(nonatomic,strong) NSString *thumbnailUrl;
@end
