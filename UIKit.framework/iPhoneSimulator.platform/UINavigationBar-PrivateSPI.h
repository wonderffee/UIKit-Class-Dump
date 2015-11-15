//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UINavigationBar.h>

@class UIView;

@interface UINavigationBar (PrivateSPI)
- (void)_setReversesButtonTextShadowOffsetWhenPressed:(BOOL)arg1;
- (void)_setButtonTextShadowOffset:(struct CGSize)arg1;
- (void)_setPressedButtonItemTextColor:(id)arg1 shadowColor:(id)arg2;
- (void)_setButtonItemTextColor:(id)arg1 shadowColor:(id)arg2;
- (void)_setButtonItemTextColor:(id)arg1 shadowColor:(id)arg2 forState:(unsigned int)arg3;
- (void)_setBackButtonBackgroundImage:(id)arg1 mini:(id)arg2 forStates:(unsigned int)arg3;
- (void)_setButtonBackgroundImage:(id)arg1 mini:(id)arg2 forStates:(unsigned int)arg3;
- (void)_setBackgroundImage:(id)arg1 mini:(id)arg2;
- (void)_applySPIAppearanceToButtons;
@property(retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;
@end
