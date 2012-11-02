//
//  AppDelegate.h
//  FileBrowser
//
//  Created by Kobe Dai on 10/24/12.
//  Copyright (c) 2012 Kobe Dai. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) RootViewController *rootViewController;
@property (strong, nonatomic) UINavigationController *navController;

@end
