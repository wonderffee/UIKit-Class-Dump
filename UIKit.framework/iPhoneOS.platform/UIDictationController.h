//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSTimer, UIDictationView;

__attribute__((visibility("hidden")))
@interface UIDictationController : NSObject
{
    UIDictationView *_view;
    NSArray *_availableLanguages;
    NSTimer *_recordingLimitTimer;
    void *_callCenterFrameworkFileHandle;
    id _callCenter;
    void *_facetimeCallFrameworkFileHandle;
    id _facetimeCallManager;
    BOOL _disabledDueToTelephonyActivity;
}

+ (id)prunedDictationResultForSingleLineEditor:(id)arg1;
+ (id)bestInterpretationForDictationResult:(id)arg1;
+ (id)serializedDictationPhrases:(id)arg1;
+ (id)serializedDictationPhrases:(id)arg1 fromKeyboard:(BOOL)arg2;
+ (id)serializedInterpretationFromTokens:(id)arg1;
+ (void)applicationDidChangeStatusBarFrame;
+ (void)applicationWillResignActive;
+ (void)applicationDidBecomeActive;
+ (void)keyboardDidUpdateOnScreenStatus;
+ (void)keyboardDidSetDelegate;
+ (void)keyboardDidSetInputMode;
+ (void)willEndEditingInTextView:(id)arg1;
+ (BOOL)shouldEnableGestureHandler;
+ (void)enableGestureHandlerIfNecessary;
+ (void)disableGestureHandler;
+ (void)logCorrectionStatistics;
+ (BOOL)fetchCurrentInputModeSupportsDictation;
+ (id)inputModeNameForDictation;
+ (BOOL)isRunning;
+ (void)preheatIfNecessary;
+ (id)sharedInstance;
+ (id)activeInstance;
@property(retain, nonatomic) UIDictationView *view; // @synthesize view=_view;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidBegin:(id)arg1;
- (void)dictationConnectionSpeechRecordingWillBegin:(id)arg1;
- (void)dictationConnection:(id)arg1 didRecognizeSpeechPhrases:(id)arg2 correctionIdentifier:(id)arg3;
- (void)showDialogForError:(id)arg1;
- (void)stopDictation;
- (void)cancelDictation;
- (void)startDictation;
- (BOOL)disabledDueToTelephonyActivity;
- (BOOL)dictationEnabled;
- (void)startRecordingLimitTimer;
- (void)cancelRecordingLimitTimer;
- (void)dealloc;
- (int)state;
- (void)setState:(int)arg1;
- (void)startConnection;
- (id)selectedTextForInputDelegate:(id)arg1;
- (id)postfixTextForInputDelegate:(id)arg1;
- (id)prefixTextForInputDelegate:(id)arg1;
- (id)fieldIdentifierInputDelegate:(id)arg1;
- (float)normalizedAudioLevel;
- (float)audioLevel;
- (id)inputModeThatInvokedDictation;
- (BOOL)supportsInputMode:(id)arg1 error:(id *)arg2;
- (id)assistantCompatibleLanguageCodeForLanguage:(id)arg1 region:(id)arg2;
- (void)proximityStateChanged:(id)arg1;
- (void)disableAutorotation;
- (void)reenableAutorotation;
- (id)_connection;
- (id)init;

@end
