//
//  VideoCell.h
//  DevslopesTutorials
//
//  Created by Pavlos Nicolaou on 20/09/2016.
//  Copyright © 2016 Pavlos Nicolaou. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Video;
@interface VideoCell : UITableViewCell

-(void) updateUI:(nonnull Video*)video;

@end
