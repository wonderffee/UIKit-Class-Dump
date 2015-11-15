//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "NSCoding.h"

@class NSArray, UIColor, UIImage, UIImageView;

@interface UIProgressView : UIView <NSCoding>
{
    long long _progressViewStyle;
    float _progress;
    long long _barStyle;
    UIColor *_progressTintColor;
    UIColor *_trackTintColor;
    UIImageView *_trackView;
    UIImageView *_progressView;
    _Bool _isAnimating;
    NSArray *_trackColors;
    NSArray *_progressColors;
    UIImage *_trackImage;
    UIImage *_progressImage;
}

+ (id)_tintedImageForHeight:(double)arg1 andColors:(id)arg2;
+ (id)_tintedImageForHeight:(double)arg1 andColors:(id)arg2 roundingRectCorners:(unsigned long long)arg3;
+ (CDStruct_d58a15aa)_standardImagesForStyle:(long long)arg1 barStyle:(long long)arg2;
+ (int)_indexForStyle:(long long)arg1 barStyle:(long long)arg2;
+ (struct CGSize)defaultSize;
@property(retain, nonatomic) UIColor *trackTintColor; // @synthesize trackTintColor=_trackTintColor;
@property(retain, nonatomic) UIColor *progressTintColor; // @synthesize progressTintColor=_progressTintColor;
@property(retain, nonatomic) UIImage *progressImage; // @synthesize progressImage=_progressImage;
@property(retain, nonatomic) UIImage *trackImage; // @synthesize trackImage=_trackImage;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic) long long progressViewStyle; // @synthesize progressViewStyle=_progressViewStyle;
- (void)_setProgressColor:(id)arg1;
- (id)_progressColor;
- (void)_setProgressAnimated:(float)arg1 duration:(double)arg2 delay:(double)arg3 options:(unsigned long long)arg4;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;
- (void)_setProgress:(float)arg1;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (void)_updateImages;
- (unsigned long long)_roundedCornersForProgressForCurrentStyle;
- (unsigned long long)_roundedCornersForTrackForCurrentStyle;
- (id)_defaultTrackColorForCurrentStyle;
- (id)_appropriateProgressImage;
- (id)_appropriateTrackImage;
- (_Bool)_shouldTintTrack;
- (_Bool)_shouldTintProgress;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProgressViewStyle:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setBarStyle:(long long)arg1;
- (long long)barStyle;
- (_Bool)isElementAccessibilityExposedToInterfaceBuilder;

@end

