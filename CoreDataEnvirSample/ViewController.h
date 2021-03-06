//
//  ViewController.h
//  CoreDataEnvirSample
//
//  Created by Deheng.Xu on 13-4-7.
//  Copyright (c) 2013年 Nicholas.Xu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CoreDataEnvir.h"

@class Team;
@class CoreDataEnvir;

@interface ViewController : UIViewController<CoreDataEnvirObserver>
{
}
@property (nonatomic, retain) CoreDataEnvir *dbe;
@property (nonatomic, retain) Team *tem;

- (IBAction)onClick_test:(id)sender;
- (IBAction)onClick_clear:(id)sender;
- (IBAction)onClick_look:(id)sender;

@end
