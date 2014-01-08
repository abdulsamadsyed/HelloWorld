//
//  HelloWorldViewController.h
//  HelloWorld
//
//  Created by Abdul on 11/18/13.
//  Copyright (c) 2013 Abdul. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloWorldViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *helloWorldLabel;
- (IBAction)pressMeClicked:(UIButton *)sender;


@end
