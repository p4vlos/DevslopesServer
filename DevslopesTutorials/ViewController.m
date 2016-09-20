//
//  ViewController.m
//  DevslopesTutorials
//
//  Created by Pavlos Nicolaou on 20/09/2016.
//  Copyright © 2016 Pavlos Nicolaou. All rights reserved.
//

#import "ViewController.h"
#import "HTTPService.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    [[HTTPService instance]getTutorials:^(NSDictionary * _Nullable dataDict, NSString * _Nullable errMessage) {
        if (dataDict) {
            NSLog(@"Dictionary: %@", dataDict.debugDescription);
        }else if (errMessage) {
            //Display alert to user
        }
    }];
    
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
