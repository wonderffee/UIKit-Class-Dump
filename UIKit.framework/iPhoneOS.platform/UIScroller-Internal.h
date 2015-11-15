//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIScroller.h>

@interface UIScroller (Internal)
+ (void)_unregisterForNotifications;
+ (void)_registerForNotifications;
- (id)_defaultHitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (void)_setAutoscrolling:(BOOL)arg1;
- (BOOL)_isAutoscrolling;
- (void)_cancelContentHighlight;
- (void)_removeScrollNotificationView:(id)arg1;
- (void)_addScrollNotificationView:(id)arg1;
- (void)_adjustSpecialViews;
- (id)_bottomShadowView;
- (id)_bottomSpecialView;
- (id)_topSpecialView;
- (struct CGPoint)_initialTouchPosition;
- (BOOL)_isUserScrolling;
- (BOOL)_alwaysHandleInteractionEvents;
- (BOOL)_scrollsToMakeFirstResponderVisible;
- (void)_stopScrollingNotify:(BOOL)arg1 dealloc:(BOOL)arg2 pin:(BOOL)arg3;
- (void)_resetScrollingWithEvent:(struct __GSEvent *)arg1;
- (void)_adjustBackgroundShadowsForContentSize:(struct CGSize)arg1;
@end
