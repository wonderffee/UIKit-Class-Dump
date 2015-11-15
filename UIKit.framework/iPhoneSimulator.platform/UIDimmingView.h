//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIBarButtonItem, UIColor, UIImageView;

__attribute__((visibility("hidden")))
@interface UIDimmingView : UIView
{
    id _delegate;
    UIBarButtonItem *_highlightedBarButtonItem;
    UIImageView *_highlightedImageView;
    UIImageView *_backgroundGlow;
    NSArray *_passthroughViews;
    _Bool _ignoresTouches;
    _Bool _displayed;
    _Bool _inPassthroughHitTest;
    UIColor *_dimmingColor;
    _Bool _suppressesBackdrops;
}

+ (id)defaultDimmingColor;
@property(nonatomic) _Bool suppressesBackdrops; // @synthesize suppressesBackdrops=_suppressesBackdrops;
@property(retain, nonatomic) UIColor *dimmingColor; // @synthesize dimmingColor=_dimmingColor;
@property(nonatomic) _Bool displayed; // @synthesize displayed=_displayed;
@property(nonatomic) _Bool ignoresTouches; // @synthesize ignoresTouches=_ignoresTouches;
@property(retain, nonatomic) NSArray *passthroughViews; // @synthesize passthroughViews=_passthroughViews;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void)_simulateTap;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)mouseUp:(struct __GSEvent *)arg1;
- (void)display:(_Bool)arg1 withAnimationDuration:(double)arg2 afterDelay:(double)arg3;
- (id)_backdropViewsToAnimate;
@property(retain, nonatomic) UIBarButtonItem *highlightedBarButtonItem;
- (void)dimmingRemovalAnimationDidStop;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

