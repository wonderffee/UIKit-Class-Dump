//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "_UIViewServiceDeputy.h"

@interface UIViewController (ViewService_Internal) <_UIViewServiceDeputy>
+ (id)XPCInterface;
- (void)__prepareForDisconnectionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_setHostAuditToken:(CDStruct_4c969caf)arg1;
- (void)_setHostProcessIdentifier:(int)arg1;
- (void)_setRemoteViewControllerProxy:(id)arg1;
- (void)_setHostApplicationBundleIdentifier:(id)arg1;
- (id)invalidate;
@end
