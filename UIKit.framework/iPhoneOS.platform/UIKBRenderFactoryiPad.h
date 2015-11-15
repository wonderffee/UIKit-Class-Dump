//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKBRenderFactoryiPhone.h>

__attribute__((visibility("hidden")))
@interface UIKBRenderFactoryiPad : UIKBRenderFactoryiPhone
{
}

- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderConfig:(id)arg3 keycapsFontName:(id)arg4;
- (void)setupLayoutSegments;
- (id)shiftedControlKeyTraits;
- (id)shiftDeleteGlyphTraits;
- (double)_row4ControlSegmentWidth;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (id)variantGeometriesForGeometry:(id)arg1 variantCount:(unsigned long long)arg2;
- (double)defaultVariantSizeThreshold;
- (struct CGSize)defaultVariantGeometrySize;
- (void)_customizePopupTraits:(id)arg1 forKey:(id)arg2 onKeyplane:(id)arg3;
- (struct UIEdgeInsets)variantSymbolFrameInsets;
- (struct UIEdgeInsets)variantDisplayFrameInsets;
- (_Bool)shouldClearBaseDisplayStringForVariants;
- (void)_customizeSymbolStyle:(id)arg1 forKey:(id)arg2 contents:(id)arg3;
- (struct CGPoint)dismissKeyOffset;
- (struct CGPoint)dualStringKeyOffset;
- (double)fallbackFontSize;
- (double)zhuyinFirstToneKeyFontSize;
- (double)facemarkKeyFontSize;
- (double)emailDotKeyFontSize;
- (double)smallKanaKeyFontSize;
- (double)dismissKeyFontSize;
- (double)spaceKeyFontSize;
- (double)dictationKeyFontSize;
- (double)internationalKeyFontSize;
- (double)moreKeyFontSize;
- (double)deleteKeyFontSize;
- (double)shiftKeyFontSize;
- (double)defaultPathWeight;
- (double)fontSizeAdjustmentForNonAlphanumericKeycaps;
- (double)bottomRowDefaultFontSize;
- (double)dualStringKeyFontSizeAdjustment;
- (double)stringKeyFontSize;
- (void)_customizeGeometry:(id)arg1 forKey:(id)arg2 contents:(id)arg3;
- (id)backgroundTraitsForKeyplane:(id)arg1;
- (id)controlKeyForegroundColorName;
- (id)controlKeyBackgroundColorName;
- (id)defaultKeyBackgroundColorName;
- (double)skinnyKeyThreshold;
- (id)shiftLockImageName;
- (id)shiftOnKeyImageName;
- (id)shiftKeyImageName;
- (id)deleteKeyImageName;
- (id)muttitapReverseKeyImageName;
- (id)multitapCompleteKeyImageName;
- (id)dismissKeyImageName;
- (id)dictationKeyImageName;
- (id)globalKeyImageName;
- (struct CGPoint)secondaryShiftKeyOffset;
- (struct CGPoint)shiftKeyOffset;
- (struct CGPoint)deleteKeyOffset;
- (struct CGPoint)dictationKeyOffset;
- (struct CGPoint)internationalKeyOffset;
- (double)keyInsetBottom;
- (double)returnKeySymbolFrameInset;
- (double)symbolFrameInset;
- (struct CGRect)dismissKeySymbolFrame;
- (struct CGRect)shiftKeySymbolFrame;
- (double)dualStringKeyMiddleMargin;
- (double)keyCornerRadius;
- (id)thinKeycapsFontName;
- (id)lightKeycapsFontName;

@end

