//
//  TESTAPP123AppDelegate.h
//  TESTAPP123
//
//  Created by wangiboo on 9/19/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TESTAPP123ViewController;

@interface TESTAPP123AppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet TESTAPP123ViewController *viewController;

@end
