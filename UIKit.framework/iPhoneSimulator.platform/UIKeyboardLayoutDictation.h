//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKeyboardLayout.h>

@class UIDictationView;

__attribute__((visibility("hidden")))
@interface UIKeyboardLayoutDictation : UIKeyboardLayout
{
    UIDictationView *_dictationView;
}

+ (float)landscapeHeight;
+ (float)portraitHeight;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)showKeyboardType:(int)arg1 withAppearance:(int)arg2;
- (BOOL)visible;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGRect)dictationLayoutFrameForStandardKeyboardLayoutFrame:(struct CGRect)arg1;

@end
