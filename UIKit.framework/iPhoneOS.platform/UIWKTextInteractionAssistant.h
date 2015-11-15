//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UITextInteractionAssistant.h>

@interface UIWKTextInteractionAssistant : UITextInteractionAssistant
{
}

- (void)selectAll:(id)arg1;
- (void)selectWord;
- (_Bool)tapOnLinkWithGesture:(id)arg1;
- (void)twoFingerRangedSelectGesture:(id)arg1;
- (void)twoFingerSingleTap:(id)arg1;
- (void)oneFingerTripleTap:(id)arg1;
- (void)rangeSelectionMoved:(struct CGPoint)arg1 withTouchPoint:(struct CGPoint)arg2;
- (void)rangeSelectionEnded:(struct CGPoint)arg1;
- (void)rangeSelectionStarted:(struct CGPoint)arg1;
- (void)updateWithMagnifierTerminalPoint:(_Bool)arg1;
- (void)updateSelectionWithPoint:(struct CGPoint)arg1;
- (void)oneFingerDoubleTap:(id)arg1;
- (void)oneFingerTapSelectsAll:(id)arg1;
- (void)oneFingerTapInUneditable:(id)arg1;
- (void)doubleTapInUneditable:(id)arg1;
- (void)tapAndAHalf:(id)arg1;
- (void)loupeGesture:(id)arg1;
- (void)oneFingerTap:(id)arg1;
- (void)selectionChangedWithTouchAt:(struct CGPoint)arg1 withSelectionTouch:(long long)arg2;
- (void)selectionChangedWithGestureAt:(struct CGPoint)arg1 withGesture:(long long)arg2 withState:(long long)arg3;
- (void)scrollSelectionToVisible;
- (_Bool)containerIsBrowserView;
- (_Bool)containerAllowsSelectionTintOnly;
- (_Bool)containerAllowsSelection;
- (_Bool)containerIsPlainStyleAtom;
- (_Bool)containerIsAtom;

@end

