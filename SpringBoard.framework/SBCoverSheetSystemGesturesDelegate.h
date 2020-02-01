/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBCoverSheetSystemGesturesDelegate : NSObject <SBSystemGestureRecognizerDelegate> {
    UIGestureRecognizer * _dismissAddendumGestureRecognizer;
    UIGestureRecognizer * _dismissGestureRecognizer;
    CSCoverSheetDismissGestureSettings * _dismissGestureSettings;
    <SBCoverSheetSystemGestureDelegatePositionProviding> * _positionProvider;
    UIGestureRecognizer * _preemptingGestureRecognizer;
    UIPanGestureRecognizer * _presentGestureRecognizer;
    int  _syntheticAppearState;
    UIViewController * _viewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIGestureRecognizer *dismissAddendumGestureRecognizer;
@property (nonatomic) UIGestureRecognizer *dismissGestureRecognizer;
@property (nonatomic, retain) CSCoverSheetDismissGestureSettings *dismissGestureSettings;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SBCoverSheetSystemGestureDelegatePositionProviding> *positionProvider;
@property (nonatomic) UIGestureRecognizer *preemptingGestureRecognizer;
@property (nonatomic, retain) UIPanGestureRecognizer *presentGestureRecognizer;
@property (readonly) Class superclass;
@property (nonatomic) int syntheticAppearState;
@property (nonatomic) UIViewController *viewController;

- (void).cxx_destruct;
- (bool)_canDismissGestureBegin;
- (bool)_canPresentGestureBegin;
- (bool)_isGestureActivelyRecognized:(id)arg1;
- (bool)_isGestureAllowedByTransientOverlaysOrTopmostApp;
- (id)dismissAddendumGestureRecognizer;
- (id)dismissGestureRecognizer;
- (id)dismissGestureSettings;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithViewController:(id)arg1 dismissGestureRecognizer:(id)arg2 dismissAddendumGestureRecognizer:(id)arg3 dismissalPreemptingGestureRecognizer:(id)arg4;
- (bool)isAnyGestureActivelyRecognized;
- (bool)isDismissGestureActive;
- (bool)isPresentGestureActive;
- (id)positionProvider;
- (id)preemptingGestureRecognizer;
- (id)presentGestureRecognizer;
- (void)setDismissAddendumGestureRecognizer:(id)arg1;
- (void)setDismissGestureRecognizer:(id)arg1;
- (void)setDismissGestureSettings:(id)arg1;
- (void)setPositionProvider:(id)arg1;
- (void)setPreemptingGestureRecognizer:(id)arg1;
- (void)setPresentGestureRecognizer:(id)arg1;
- (void)setSyntheticAppearState:(int)arg1;
- (void)setViewController:(id)arg1;
- (int)syntheticAppearState;
- (id)viewController;
- (id)viewForSystemGestureRecognizer:(id)arg1;

@end