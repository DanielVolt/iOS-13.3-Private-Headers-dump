/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBPowerDownViewController : SBTransientOverlayViewController <SBPowerDownViewDelegate> {
    unsigned long long  _aggdStartTime;
    bool  _canAlterScreenBrightness;
    <SBPowerDownViewControllerDelegate> * _delegate;
    SBPowerDownView * _powerDownView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBPowerDownViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginTimeTracking;
- (bool)_canShowWhileLocked;
- (void)_endTimeTrackingIncludingReportWithKey:(id)arg1;
- (void)_incrementCountForKey:(id)arg1;
- (int)_preferredStatusBarVisibility;
- (void)_resetScreenBrightness;
- (id)delegate;
- (long long)idleTimerMode;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (void)powerDownView:(id)arg1 didUpdateSlideWithValue:(double)arg2;
- (void)powerDownViewAnimateOutCompleted:(id)arg1;
- (void)powerDownViewDidBeginSlide:(id)arg1;
- (void)powerDownViewDidCancelSlide:(id)arg1;
- (void)powerDownViewDidCompleteSlide:(id)arg1;
- (void)powerDownViewDidFireIdleTimer:(id)arg1;
- (void)powerDownViewDidReceiveCancelButtonAction:(id)arg1;
- (void)powerDownViewRequestCancel:(id)arg1;
- (void)powerDownViewRequestPowerDown:(id)arg1;
- (void)powerDownViewWillAnimateIn:(id)arg1;
- (void)powerDownViewWillAnimateOut:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldDisableBanners;
- (bool)shouldDisableControlCenter;
- (bool)shouldDisableSiri;
- (bool)shouldPendAlertItems;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
