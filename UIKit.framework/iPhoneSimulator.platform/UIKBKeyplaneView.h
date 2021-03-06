//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKBSplitImageView.h>

#import "UIKBCacheableView.h"

@class NSMutableDictionary, NSString, NSTimer, UIKBCacheToken, UIKBKeyView, UIKBRenderConfig, UIKBTree;

__attribute__((visibility("hidden")))
@interface UIKBKeyplaneView : UIKBSplitImageView <UIKBCacheableView>
{
    UIKBTree *_keyplane;
    UIKBTree *_defaultKeyplane;
    UIKBCacheToken *_cacheToken;
    UIKBKeyView *_candidateGapView;
    NSMutableDictionary *_subviewIndex;
    NSMutableDictionary *_activeViewIndex;
    NSMutableDictionary *_renderedKeyViews;
    NSMutableDictionary *_delayedDeactivationKeys;
    NSTimer *_activatedTimer;
    _Bool _performingDeactivation;
    _Bool _shouldDrawRect;
    UIKBRenderConfig *_renderConfig;
    UIKBSplitImageView *_keyBorders;
    UIKBSplitImageView *_keyBackgrounds;
    UIKBSplitImageView *_keyCaps;
}

@property(retain, nonatomic) UIKBRenderConfig *renderConfig; // @synthesize renderConfig=_renderConfig;
@property(retain, nonatomic) UIKBCacheToken *cacheToken; // @synthesize cacheToken=_cacheToken;
@property(retain, nonatomic) UIKBTree *defaultKeyplane; // @synthesize defaultKeyplane=_defaultKeyplane;
@property(retain, nonatomic) UIKBTree *keyplane; // @synthesize keyplane=_keyplane;
- (void)purgeLayerContents;
- (void)purgeSubviews;
- (void)purgeKeyViews;
- (void)activateKeys;
- (void)deactivateKeys;
- (void)deactivateKey:(id)arg1 previousState:(int)arg2;
- (void)dimKeyCaps:(double)arg1 duration:(double)arg2;
- (void)updateDecorationViewsIfNeeded;
- (void)deactivateAdaptiveKey:(id)arg1;
- (id)viewForKey:(id)arg1 state:(int)arg2;
- (id)viewForKey:(id)arg1;
- (id)activeKeyViews;
- (int)stateForKey:(id)arg1;
- (void)setState:(int)arg1 forKey:(id)arg2;
- (_Bool)_shouldAllowKey:(id)arg1;
- (Class)classForKey:(id)arg1;
- (id)containingViewForKey:(id)arg1 withState:(int)arg2;
- (int)cornerMaskForKey:(id)arg1 recursive:(_Bool)arg2;
- (id)cacheIdentifierForKey:(id)arg1 withState:(int)arg2;
- (id)cacheIdentifierForKey:(id)arg1;
- (void)removeKeyFromDelayedDeactivationSet:(id)arg1;
- (void)addKeyToDelayedDeactivationSet:(id)arg1;
- (void)performDelayedDeactivation:(id)arg1;
- (void)scheduleDelayedDeactivation;
- (void)cancelDelayedDeactivation;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawContentsOfRenderers:(id)arg1;
@property(readonly, nonatomic) _Bool keepNonPersistent;
@property(readonly, nonatomic) double cachedWidth;
@property(readonly, nonatomic) _Bool cacheDeferable;
- (void)displayLayer:(id)arg1;
- (id)cacheKeysForRenderFlags:(id)arg1;
@property(readonly, nonatomic) NSString *cacheKey;
- (void)layoutSubviews;
- (_Bool)isPasscodeStyle;
- (_Bool)validForKeyplane:(id)arg1 withVisualStyle:(int)arg2;
- (void)dealloc;
- (void)removeFromSuperview;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

