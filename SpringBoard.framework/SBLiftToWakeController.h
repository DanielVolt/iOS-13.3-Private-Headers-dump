/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBLiftToWakeController : NSObject <CMWakeGestureDelegate> {
    SBIdleTimerDefaults * _idleTimerDefaults;
    bool  _isEnabled;
    NSHashTable * _observers;
    bool  _observingCMWakeGestureManager;
    bool  _screenOn;
    CMWakeGestureManager * _wakeGestureManager;
    long long  _wakeGestureState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (readonly) unsigned long long hash;
@property (getter=_idleTimerDefaults, setter=_setIdleTimerDefaults:, nonatomic, retain) SBIdleTimerDefaults *idleTimerDefaults;
@property (readonly) Class superclass;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)_handleBacklightLevelChanged:(id)arg1;
- (id)_idleTimerDefaults;
- (void)_ignoredTransition:(long long)arg1;
- (bool)_isObservingWakeGestureManager;
- (void)_reconsiderEnablement;
- (void)_screenTurnedOff;
- (void)_screenTurnedOn;
- (void)_sendTransitionToObservers:(long long)arg1 deviceOrientation:(long long)arg2;
- (void)_setIdleTimerDefaults:(id)arg1;
- (void)_startObservingIfNecessary;
- (void)_stopObservingIfNecessary;
- (void)addObserver:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithBacklightController:(id)arg1 idleTimerDefaults:(id)arg2;
- (bool)isEnabled;
- (void)removeObserver:(id)arg1;
- (void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2;
- (void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2 orientation:(int)arg3;
- (void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2 orientation:(int)arg3 detectedAt:(unsigned long long)arg4;

@end
