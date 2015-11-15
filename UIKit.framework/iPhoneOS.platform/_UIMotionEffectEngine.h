//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplayLink, CMMotionManager, NSArray, NSMapTable, NSMutableSet, NSOperationQueue, _UIAssociationTable, _UILazyMapTable, _UIMotionEffectEngineLogger;

__attribute__((visibility("hidden")))
@interface _UIMotionEffectEngine : NSObject
{
    _UIAssociationTable *_effectViewAssociationTable;
    _UILazyMapTable *_analyzerSettingsToAnalyzers;
    NSMapTable *_analyzersToEffects;
    NSMapTable *_analyzersToHistories;
    NSMapTable *_suspendedViewsToEffectSets;
    CMMotionManager *_motionManager;
    NSOperationQueue *_motionEventQueue;
    _Bool _hasReceivedAtLeastOneMotionEventSinceStarting;
    CDStruct_04e8b4cd _pendingDeviceMotionStruct;
    double _pendingDeviceMotionTimestamp;
    int _pendingDeviceMotionLock;
    CADisplayLink *_displayLink;
    _Bool _generatingUpdates;
    NSMutableSet *_suspendReasons;
    CDStruct_bf7dff04 _lastDeviceQuaternion;
    double _lastUpdateTimestamp;
    _Bool _slowUpdatesEnabled;
    _Bool _pendingSlowDown;
    long long _sensorStatus;
    _Bool _allAnalyzersAreCentered;
    _Bool _hasAppliedAtLeastOneUpdateSinceStarting;
    _Bool _isPendingReset;
    _UIMotionEffectEngineLogger *_motionLogger;
    int _thermalNotificationToken;
    int _screenDimmingNotificationToken;
    long long _targetInterfaceOrientation;
}

+ (_Bool)_motionEffectsSupported;
+ (_Bool)_motionEffectsEnabled;
@property(nonatomic, setter=_setTargetInterfaceOrientation:) long long _targetInterfaceOrientation; // @synthesize _targetInterfaceOrientation;
- (id)debugDescription;
- (void)_unapplyAllEffects;
- (_Bool)_motionEffect:(id)arg1 belongsToView:(id)arg2;
- (_Bool)_hasMotionEffectsForView:(id)arg1;
- (id)_motionEffectsForView:(id)arg1;
- (void)_unregisterAllMotionEffectsForView:(id)arg1;
- (void)endApplyingMotionEffect:(id)arg1 toView:(id)arg2;
- (void)_unregisterMotionEffect:(id)arg1 fromView:(id)arg2;
- (void)beginApplyingMotionEffect:(id)arg1 toView:(id)arg2;
@property(readonly, nonatomic) NSArray *suspensionReasons;
- (_Bool)_motionEffectsAreSuspendedForView:(id)arg1;
- (void)endSuspendingMotionEffectsForView:(id)arg1;
- (void)beginSuspendingMotionEffectsForView:(id)arg1;
- (_Bool)_isSuspended;
- (void)_updateDisplayLinkInterval;
- (void)_stopGeneratingUpdates;
- (void)_startGeneratingUpdates;
- (void)_startOrStopGeneratingUpdates;
- (_Bool)_shouldGenerateUpdates;
- (void)endSuspendingForReason:(id)arg1;
- (void)beginSuspendingForReason:(id)arg1;
- (void)_setMotionManagerSensorStatus:(long long)arg1;
- (void)_scheduleUpdateWithDeviceMotion:(const CDStruct_04e8b4cd *)arg1 timestamp:(double)arg2;
- (void)resetMotionAnalysis;
- (void)_applyEffectsFromAnalyzer:(id)arg1;
- (_Bool)_shouldSuspendApplicationForHysteresisGivenLastAppliedViewerOffset:(struct UIOffset)arg1 newViewerOffset:(struct UIOffset)arg2 wasSuspendingApplicationForHysteresis:(_Bool)arg3;
- (void)_handleLatestDeviceMotion;
- (void)_toggleSlowUpdates;
- (void)dealloc;
- (id)init;

@end

