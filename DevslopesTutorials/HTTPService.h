//
//  HTTPService.h
//  DevslopesTutorials
//
//  Created by Pavlos Nicolaou on 20/09/2016.
//  Copyright © 2016 Pavlos Nicolaou. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^onComplete)(NSDictionary * __nullable dataDict, NSString * __nullable errMessage);

@interface HTTPService : NSObject

+ (id) instance;
- (void) getTutorials:(nullable onComplete)completionHandler;

@end
