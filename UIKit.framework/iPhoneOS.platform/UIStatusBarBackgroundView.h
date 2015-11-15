//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

__attribute__((visibility("hidden")))
@interface UIStatusBarBackgroundView : UIView
{
    int _style;
    UIImageView *_glowView;
    BOOL _glowEnabled;
    BOOL _suppressGlow;
}

- (id)_glowImageForStyle:(int)arg1;
- (id)_baseImageForStyle:(int)arg1;
- (id)_imageNameForStyle:(int)arg1;
- (void)_stopGlowAnimation;
- (void)_startGlowAnimationWaitForNextCycle:(BOOL)arg1;
- (BOOL)_styleCanGlow:(int)arg1;
- (void)setSuppressesGlow:(BOOL)arg1;
- (void)_setGlowAnimationEnabled:(BOOL)arg1 waitForNextCycle:(BOOL)arg2;
- (void)setGlowAnimationEnabled:(BOOL)arg1;
- (int)style;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;

@end
