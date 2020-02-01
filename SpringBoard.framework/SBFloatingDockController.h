/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBFloatingDockController : NSObject <BSDescriptionProviding, SBAssistantObserver, SBFloatingDockRootViewControllerDelegate, SBFolderPresentationObserver, SBIconLocationPresenting, SBIconViewProviding, SBIconViewQuerying, SBLayoutStateTransitionObserver, SBReusableViewMapDelegate, SBRootFolderPageStateObserver, SBSystemGestureRecognizerDelegate> {
    SBFloatingDockBehaviorAssertion * _activeAssertion;
    SBFloatingDockBehaviorAssertion * _activeGestureFloatingDockBehaviorAssertion;
    SBFAnalyticsClient * _analyticsClient;
    SBFloatingDockBehaviorAssertion * _assistantFloatingDockBehaviorAssertion;
    SBDeviceOrientationUpdateDeferralAssertion * _deferOrientationUpdatesAssertion;
    <SBFloatingDockControllerDelegate> * _delegate;
    SBFailingSystemGestureRecognizer * _dismissFloatingDockSystemGestureRecognizer;
    NSPointerArray * _floatingDockBehaviorAssertionsByLevel;
    <BSInvalidatable> * _floatingDockStateDumpHandle;
    SBMainScreenActiveInterfaceOrientationWindow * _floatingDockWindow;
    NSPointerArray * _floatingDockWindowLevelAssertionsByPriority;
    bool  _homeScreenTodayViewTransitioning;
    bool  _homeScreenTransitioningToTodayView;
    SBIconController * _iconController;
    SBFloatingDockBehaviorAssertion * _iconPullSearchGestureShowingFloatingDockBehaviorAssertion;
    SBReusableViewMap * _iconViewMap;
    SBFloatingDockBehaviorAssertion * _inAppFloatingDockBehaviorAssertion;
    SBFloatingDockBehaviorAssertion * _openFolderOverHomeScreenFloatingDockBehaviorAssertion;
    SBFloatingDockBehaviorAssertion * _openFolderOverSceneLayoutFloatingDockBehaviorAssertion;
    PTToggleTestRecipe * _testRecipe;
    SBFloatingDockBehaviorAssertion * _todayViewFloatingDockBehaviorAssertion;
    SBLayoutStateTransitionCoordinator * _transitionCoordinator;
    SBFloatingDockRootViewController * _viewController;
}

@property (nonatomic) SBFloatingDockBehaviorAssertion *activeAssertion;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBFloatingDockControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SBFailingSystemGestureRecognizer *dismissFloatingDockSystemGestureRecognizer;
@property (nonatomic, readonly) double effectiveFloatingDockHeight;
@property (getter=isFloatingDockFullyPresented, nonatomic, readonly) bool floatingDockFullyPresented;
@property (nonatomic, readonly) double floatingDockHeight;
@property (getter=isFloatingDockPresented, nonatomic, readonly) bool floatingDockPresented;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } floatingDockScreenFrame;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } floatingDockScreenPresentationFrame;
@property (nonatomic, readonly) SBFloatingDockViewController *floatingDockViewController;
@property (nonatomic, readonly) double floatingDockViewTopMargin;
@property (nonatomic, readonly) SBMainScreenActiveInterfaceOrientationWindow *floatingDockWindow;
@property (getter=isGesturePossible, nonatomic, readonly) bool gesturePossible;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBIconController *iconController;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) double maximumDockContinuousCornerRadius;
@property (nonatomic, readonly) double maximumFloatingDockHeight;
@property (nonatomic, readonly) double preferredVerticalMargin;
@property (nonatomic, readonly) SBFolderController *presentedFolderController;
@property (nonatomic, readonly, copy) NSSet *presentedIconLocations;
@property (getter=isPresentingFolder, nonatomic, readonly) bool presentingFolder;
@property (nonatomic, retain) SBApplication *requestedSuggestedApplication;
@property (nonatomic, readonly) SBIconListView *suggestionsIconListView;
@property (readonly) Class superclass;
@property (nonatomic) SBLayoutStateTransitionCoordinator *transitionCoordinator;
@property (nonatomic, readonly) double translationFromFullyPresentedFrame;
@property (nonatomic, readonly) SBIconListView *userIconListView;
@property (nonatomic, readonly) UIViewController *viewController;

+ (bool)isFloatingDockSupported;

- (void).cxx_destruct;
- (void)_addFloatingDockBehaviorAssertion:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_addFloatingDockWindowLevelAssertion:(id)arg1;
- (bool)_allowGestureRecognizers;
- (bool)_canPresentFloatingDock;
- (void)_clearGestureAssertion;
- (void)_configureFloatingDockBehaviorAssertionForOpenFolder:(id)arg1 atLevel:(unsigned long long)arg2;
- (void)_deriveActiveAssertion:(id*)arg1 dockProgress:(double*)arg2;
- (void)_dismissFloatingDockIfPresentedAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)_evaluateAssertions:(unsigned long long)arg1 interactive:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)_gestureRecognizerFailed:(id)arg1;
- (void)_handleSystemGestureRecognizer:(id)arg1;
- (void)_handleTransitionForFolder:(id)arg1 atLevel:(unsigned long long)arg2 presenting:(bool)arg3 withTransitionCoordinator:(id)arg4;
- (unsigned long long)_indexOfPointerArray:(id)arg1 ofObject:(void*)arg2;
- (void)_presentFloatingDockIfDismissedAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)_recalculateWindowLevelForWindowLevelAssertions;
- (void)_removeFloatingDockBehaviorAssertion:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_removeFloatingDockWindowLevelAssertion:(id)arg1;
- (void)_setupStateDumper;
- (void)_updateFloatingDockBehaviorAssertionsInteractive:(bool)arg1 completion:(id /* block */)arg2;
- (id)activeAssertion;
- (void)assistantDidDisappear:(id)arg1;
- (void)assistantWillAppear:(id)arg1;
- (void)configureIconView:(id)arg1 forIcon:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)dequeueReusableIconViewOfClass:(Class)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)dismissFloatingDockIfPresentedAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)dismissFloatingDockSystemGestureRecognizer;
- (void)dismissPresentedFolderAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)dismissPresentedFolderAnimated:(bool)arg1 withTransitionContext:(id)arg2 completion:(id /* block */)arg3;
- (double)effectiveFloatingDockHeight;
- (void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateDisplayedIconViewsUsingBlock:(id /* block */)arg1;
- (id)firstIconViewForIcon:(id)arg1;
- (id)firstIconViewForIcon:(id)arg1 excludingLocations:(id)arg2;
- (id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2;
- (double)floatingDockHeight;
- (void)floatingDockRootViewController:(id)arg1 floatingDockWantsToBePresented:(bool)arg2;
- (void)floatingDockRootViewController:(id)arg1 modifyProgress:(double)arg2 interactive:(bool)arg3 completion:(id /* block */)arg4;
- (void)floatingDockRootViewController:(id)arg1 willChangeToHeight:(double)arg2;
- (void)floatingDockRootViewController:(id)arg1 willPerformTransitionWithFolder:(id)arg2 presenting:(bool)arg3 withTransitionCoordinator:(id)arg4;
- (void)floatingDockRootViewControllerDidEndPresentationTransition:(id)arg1;
- (bool)floatingDockRootViewControllerShouldHandlePanGestureRecognizer:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })floatingDockScreenFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })floatingDockScreenPresentationFrame;
- (id)floatingDockViewController;
- (double)floatingDockViewTopMargin;
- (id)floatingDockWindow;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)handlePromptingUserToUninstallIcon:(id)arg1 location:(id)arg2;
- (id)iconController;
- (void)iconManager:(id)arg1 willPerformTransitionWithFolder:(id)arg2 presenting:(bool)arg3 withTransitionCoordinator:(id)arg4;
- (id)iconViewForIcon:(id)arg1 location:(id)arg2;
- (id)iconViewMap;
- (id)init;
- (id)initWithAnalyticsClient:(id)arg1;
- (id)initWithIconController:(id)arg1;
- (id)initWithIconController:(id)arg1 analyticsClient:(id)arg2;
- (id)initWithIconController:(id)arg1 applicationController:(id)arg2 recentsController:(id)arg3 recentsDataStore:(id)arg4 transitionCoordinator:(id)arg5 appSuggestionManager:(id)arg6 analyticsClient:(id)arg7;
- (bool)isDisplayingIcon:(id)arg1;
- (bool)isDisplayingIcon:(id)arg1 inLocation:(id)arg2;
- (bool)isDisplayingIcon:(id)arg1 inLocations:(id)arg2;
- (bool)isDisplayingIconView:(id)arg1;
- (bool)isDisplayingIconView:(id)arg1 inLocation:(id)arg2;
- (bool)isFloatingDockFullyPresented;
- (bool)isFloatingDockPresented;
- (bool)isGesturePossible;
- (bool)isIconViewRecycled:(id)arg1;
- (bool)isPresentingFolder;
- (bool)isPresentingIconLocation:(id)arg1;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)layoutUserControlledIconLists:(double)arg1 animationType:(long long)arg2 forceRelayout:(bool)arg3;
- (id)legibilitySettings;
- (double)maximumDockContinuousCornerRadius;
- (double)maximumFloatingDockHeight;
- (double)minimumHomeScreenScaleForFloatingDockRootViewController:(id)arg1;
- (double)preferredVerticalMargin;
- (void)presentFloatingDockIfDismissedAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)presentFolderForIcon:(id)arg1 location:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (id)presentedFolderController;
- (id)presentedIconLocations;
- (void)recycleIconView:(id)arg1;
- (id)recycledViewsContainerProviderForViewMap:(id)arg1;
- (void)registerAsSharedInstance;
- (id)requestedSuggestedApplication;
- (void)rootFolderPageStateProvider:(id)arg1 didContinueTransitionToState:(long long)arg2 progress:(double)arg3;
- (void)rootFolderPageStateProvider:(id)arg1 didEndTransitionFromState:(long long)arg2 toState:(long long)arg3 successfully:(bool)arg4;
- (void)rootFolderPageStateProvider:(id)arg1 willBeginTransitionToState:(long long)arg2 animated:(bool)arg3 interactive:(bool)arg4;
- (void)rootFolderPageStateProvider:(id)arg1 willEndTransitionToState:(long long)arg2 successfully:(bool)arg3;
- (void)setActiveAssertion:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setRequestedSuggestedApplication:(id)arg1;
- (void)setTransitionCoordinator:(id)arg1;
- (bool)shouldShowCloseBoxForIconView:(id)arg1 proposedValue:(bool)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)suggestionsIconListView;
- (id)transitionCoordinator;
- (double)translationFromFullyPresentedFrame;
- (id)userIconListView;
- (id)viewController;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (unsigned long long)viewMap:(id)arg1 maxRecycledViewsOfClass:(Class)arg2;
- (bool)viewMap:(id)arg1 shouldRecycleView:(id)arg2;

@end
