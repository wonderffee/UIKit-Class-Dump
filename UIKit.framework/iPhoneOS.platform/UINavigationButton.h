//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSDictionary, NSSet, NSString, UIColor, UIImage;

@interface UINavigationButton : UIButton
{
    NSSet *_possibleTitles;
    int _style;
    long long _barStyle;
    UIColor *_navigationBarTintColor;
    struct CGSize _boundsAdjustment;
    id _appearanceStorage;
    NSSet *_possibleSystemItems;
    unsigned int _size:2;
    unsigned int _wantsLetterpressContent:1;
    _Bool _createdByBarButtonItem;
    _Bool _isFontScaleInvalid;
    _Bool _wantsBlendModeForAccessibilityBackgrounds;
    double _minimumWidth;
    double _maximumWidth;
    long long _buttonItemStyle;
    NSDictionary *_stylesForSizingTitles;
    double _fontScaleAdjustment;
    Class _appearanceGuideClass;
}

+ (void)_resetRenderingModesForBackgroundImageView:(id)arg1 inBarStyle:(long long)arg2 isEnabled:(_Bool)arg3 withAccessibilityBackground:(_Bool)arg4 wantsBlendModeForAccessibilityBackgrounds:(_Bool)arg5;
+ (id)defaultFont;
@property(nonatomic, setter=_setAppearanceGuideClass:) Class _appearanceGuideClass; // @synthesize _appearanceGuideClass;
@property(nonatomic, setter=_setWantsBlendModeForAccessibilityBackgrounds:) _Bool _wantsBlendModeForAccessibilityBackgrounds; // @synthesize _wantsBlendModeForAccessibilityBackgrounds;
@property(nonatomic, setter=_setFontScaleAdjustment:) double _fontScaleAdjustment; // @synthesize _fontScaleAdjustment;
@property(nonatomic, setter=_setFontScaleInvalid:) _Bool _isFontScaleInvalid; // @synthesize _isFontScaleInvalid;
@property(nonatomic, setter=_setCreatedByBarButtonItem:) _Bool _createdByBarButtonItem; // @synthesize _createdByBarButtonItem;
@property(copy, nonatomic, setter=_setStylesForSizingTitles:) NSDictionary *_stylesForSizingTitles; // @synthesize _stylesForSizingTitles;
@property(nonatomic, setter=_setButtonItemStyle:) long long _buttonItemStyle; // @synthesize _buttonItemStyle;
@property(nonatomic) double maximumWidth; // @synthesize maximumWidth=_maximumWidth;
@property(nonatomic) double minimumWidth; // @synthesize minimumWidth=_minimumWidth;
@property(nonatomic) long long barStyle; // @synthesize barStyle=_barStyle;
@property(nonatomic) int style; // @synthesize style=_style;
- (id)_appearanceStorage;
- (void)_applyBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (struct UIOffset)_titlePositionAdjustmentForBarMetrics:(long long)arg1;
- (void)_setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (_Bool)_hasBaselineAlignedAbsoluteVerticalPosition:(out double *)arg1 withinNavBar:(id)arg2 forSize:(struct CGSize)arg3;
- (double)_backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;
- (void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (id)_titleTextAttributesForState:(unsigned long long)arg1;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (id)_tintColor;
- (void)_setTintColor:(id)arg1;
- (void)_UIAppearance_setTintColor:(id)arg1;
- (id)_backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;
- (void)_updateContentInsets;
- (void)_setBoundsAdjustment:(struct CGSize)arg1;
- (void)_setFrame:(struct CGRect)arg1 deferLayout:(_Bool)arg2;
- (void)_adjustBounds;
- (id)_scriptingInfo;
- (_Bool)_canHandleStatusBarTouchAtLocation:(struct CGPoint)arg1;
- (void)setNavigationBarTintColor:(id)arg1;
@property(nonatomic) int controlSize;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (_Bool)contentsEqualTo:(id)arg1 withStyle:(int)arg2;
@property(retain, nonatomic) UIImage *image;
@property(retain, nonatomic) NSString *title;
- (_Bool)_isModernButton;
- (void)dealloc;
- (id)initWithImage:(id)arg1 style:(int)arg2;
- (id)initWithImage:(id)arg1;
- (id)initWithImage:(id)arg1 width:(double)arg2 style:(int)arg3;
- (id)initWithImage:(id)arg1 width:(double)arg2 style:(int)arg3 applyBezel:(_Bool)arg4 forBarStyle:(long long)arg5 buttonItemStyle:(long long)arg6;
- (id)initWithTitle:(id)arg1 possibleTitles:(id)arg2 style:(int)arg3;
- (id)initWithTitle:(id)arg1 style:(int)arg2;
- (id)initWithTitle:(id)arg1;
- (id)initWithValue:(id)arg1 width:(double)arg2 style:(int)arg3 barStyle:(long long)arg4 possibleTitles:(id)arg5 tintColor:(id)arg6;
- (id)initWithValue:(id)arg1 width:(double)arg2 style:(int)arg3 barStyle:(long long)arg4 possibleTitles:(id)arg5 possibleSystemItems:(id)arg6 tintColor:(id)arg7 applyBezel:(_Bool)arg8 forButtonItemStyle:(long long)arg9;
- (void)_setTitleFrozen:(_Bool)arg1;
- (void)_updateStyle;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(_Bool)arg3;
- (void)_accessibilityButtonShapesDidChangeNotification:(id)arg1;
- (void)_accessibilityButtonShapesParametersDidChange;
- (id)_customOrAccessibilityBackgroundImageForState:(unsigned long long)arg1 style:(long long)arg2 isMini:(_Bool)arg3;
- (id)_adjustedDefaultTitleFont;
- (struct UIEdgeInsets)_pathImageEdgeInsets;
- (struct UIEdgeInsets)_pathTitleEdgeInsets;
- (struct UIEdgeInsets)_buttonTitleEdgeInsets;
- (long long)_barButtonItemStyle;
- (void)_updateTitleColorsForState:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)_sendSetNeedsLayoutToSuperviewOnTitleAnimationCompletionIfNecessary;
- (void)_setWantsLetterpressContent;
- (void)_updateTitleForLetterpress;
- (void)_updateShadowOffsetWithAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (struct CGSize)_defaultTitleShadowOffsetForState:(unsigned long long)arg1;
- (id)_defaultTitleShadowColorForState:(unsigned long long)arg1;
- (id)_defaultTitleColorForState:(unsigned long long)arg1;
- (_Bool)_wantsAccessibilityButtonShapes;
- (_Bool)_showsAccessibilityBackgroundWhenEnabled;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;

// Remaining properties
@property(retain, nonatomic) UIColor *tintColor;

@end

