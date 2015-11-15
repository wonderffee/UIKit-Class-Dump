//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, UIView, UIWindow;

@interface UITouch : NSObject
{
    double _movementMagnitudeSquared;
    double _timestamp;
    long long _phase;
    long long _savedPhase;
    unsigned long long _tapCount;
    long long _edgeType;
    UIWindow *_window;
    UIView *_view;
    UIView *_warpedIntoView;
    NSMutableArray *_gestureRecognizers;
    NSMutableArray *_forwardingRecord;
    struct CGPoint _locationInWindow;
    struct CGPoint _previousLocationInWindow;
    unsigned char _pathIndex;
    unsigned char _pathIdentity;
    float _pathMajorRadius;
    struct {
        unsigned int _firstTouchForView:1;
        unsigned int _isTap:1;
        unsigned int _isDelayed:1;
        unsigned int _sentTouchesEnded:1;
        unsigned int _abandonForwardingRecord:1;
    } _touchFlags;
    _Bool _eaten;
    id <_UITouchPhaseChangeDelegate> __phaseChangeDelegate;
    struct CGSize _displacement;
}

@property(retain, nonatomic, setter=_setPhaseChangeDelegate:) id <_UITouchPhaseChangeDelegate> _phaseChangeDelegate; // @synthesize _phaseChangeDelegate=__phaseChangeDelegate;
@property(nonatomic, getter=_isEaten, setter=_setEaten:) _Bool _eaten; // @synthesize _eaten;
@property(nonatomic, setter=_setEdgeType:) long long _edgeType; // @synthesize _edgeType;
@property(nonatomic, setter=_setDisplacement:) struct CGSize _displacement; // @synthesize _displacement;
@property(nonatomic, setter=_setPathMajorRadius:) float _pathMajorRadius; // @synthesize _pathMajorRadius;
@property(nonatomic, setter=_setPathIdentity:) unsigned char _pathIdentity; // @synthesize _pathIdentity;
@property(nonatomic, setter=_setPathIndex:) unsigned char _pathIndex; // @synthesize _pathIndex;
- (void)_setForwardablePhase:(long long)arg1;
- (long long)_forwardablePhase;
- (void)_loadStateFromTouch:(id)arg1;
- (struct CGPoint)previousLocationInView:(id)arg1;
- (struct CGPoint)locationInView:(id)arg1;
@property(readonly, nonatomic) NSArray *gestureRecognizers;
@property(readonly, nonatomic) UIView *view;
@property(readonly, nonatomic) UIWindow *window;
- (_Bool)sentTouchesEnded;
- (void)setSentTouchesEnded:(_Bool)arg1;
- (_Bool)isDelayed;
- (void)setIsDelayed:(_Bool)arg1;
- (_Bool)isTap;
@property(readonly, nonatomic) unsigned long long tapCount;
- (long long)info;
@property(readonly, nonatomic) long long phase;
@property(readonly, nonatomic) double timestamp;
- (void)dealloc;

@end

