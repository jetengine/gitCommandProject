//
//  AppDelegate.h
//  MyGitCommandProject
//
//  Created by jetengine on 2017/7/3.
//  Copyright © 2017年 com.he.xf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

