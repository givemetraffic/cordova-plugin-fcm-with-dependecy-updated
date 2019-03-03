//
//  AppDelegate+FCMPlugin.h
//  TestApp
//
//  Created by felipe on 12/06/16.
//
//

#import "AppDelegate.h"
#import <UIKit/UIKit.h>
#import <Cordova/CDVViewController.h>

#import "Firebase.h"

#ifndef NSFoundationVersionNumber_iOS_9_x_Max
#define NSFoundationVersionNumber_iOS_9_x_Max 1299
#endif

#if defined(__IPHONE_10_0) && __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_10_0
@import UserNotifications;

@interface AppDelegate (FCMPlugin) <UNUserNotificationCenterDelegate, FIRMessagingDelegate>

@end
#else

@interface AppDelegate (FCMPlugin) <FIRMessagingDelegate>

+ (NSData*)getLastPush;

@end
#endif

