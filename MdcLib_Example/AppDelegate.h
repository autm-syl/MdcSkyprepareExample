//
//  AppDelegate.h
//  MdcLib_Example
//
//  Created by Nguyen Hoa on 7/10/17.
//  Copyright © 2017 Nguyen Hoa. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MdcLib/MdcLib.h>
@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) MdcLib *mdcLib;

@property (strong, nonatomic, retain) NSDate *startTime;

@property (nonatomic) UIBackgroundTaskIdentifier bgTask;

@end

