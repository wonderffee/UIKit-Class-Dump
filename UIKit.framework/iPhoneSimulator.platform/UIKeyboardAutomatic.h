//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKeyboard.h>

__attribute__((visibility("hidden")))
@interface UIKeyboardAutomatic : UIKeyboard
{
    _Bool showsCandidateBar;
    _Bool showsCandidateInline;
    _Bool receivedCandidatesInCurrentInputMode;
    _Bool caretBlinks;
}

@property(nonatomic) _Bool caretBlinks; // @synthesize caretBlinks;
@property(nonatomic) _Bool receivedCandidatesInCurrentInputMode; // @synthesize receivedCandidatesInCurrentInputMode;
@property(nonatomic) _Bool showsCandidateInline; // @synthesize showsCandidateInline;
@property(nonatomic) _Bool showsCandidateBar; // @synthesize showsCandidateBar;
- (void)setOrientation:(long long)arg1;
- (void)activate;
- (_Bool)_isAutomaticKeyboard;
- (void)didSuspend:(id)arg1;
- (void)willResume:(id)arg1;
- (void)implBoundsHeightChangeDone:(double)arg1 suppressNotification:(_Bool)arg2;
- (void)prepareForImplBoundsHeightChange:(double)arg1 suppressNotification:(_Bool)arg2;
- (struct UIPeripheralAnimationGeometry)geometryForHeightDelta:(double)arg1;
- (_Bool)isActive;
- (void)maximize;
- (void)minimize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

