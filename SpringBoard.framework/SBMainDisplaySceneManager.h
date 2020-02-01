/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBMainDisplaySceneManager : SBSceneManager <SBIdleTimerCoordinating, SBIdleTimerProviding, SBSuspendedUnderLockManagerDelegate> {
    UIApplicationSceneClientSettingsDiffInspector * _appClientSettingsDiffInspector;
    bool  _didAddSceneLayoutViewControllerWindowContextIdentifier;
    FBSSceneClientSettingsDiffInspector * _externalClientSettingsDiffInspector;
    SBFaceContactExpectationManager * _faceContactExpectationManager;
    <SBIdleTimerCoordinating> * _idleTimerCoordinator;
    UIApplicationSceneClientSettingsDiffInspector * _internalClientSettingsDiffInspector;
    bool  _isUsingMedusaHostedKeyboardWindow;
    SBSuspendedUnderLockManager * _lazy_suspendedUnderLockManager;
    SBMedusaHostedKeyboardWindow * _medusaHostedKeyboardWindow;
    SBMainDisplayPolicyAggregator * _policyAggregator;
    NSHashTable * _preventAdditionalMedusaSnapshotsAssertions;
    unsigned long long  _processedValidInterfaceOrientationChangeCount;
    NSMutableSet * _requiredContextIdentifiersForMedusaDraggingDestination;
    long long  _validInterfaceOrientation;
    unsigned long long  _validInterfaceOrientationChangeCount;
}

@property (getter=_isUsingMedusaHostedKeyboardWindow, nonatomic, readonly) bool _isUsingMedusaHostedKeyboardWindow;
@property (nonatomic, readonly) SBMainDisplayLayoutStateManager *_layoutStateManager;
@property (nonatomic, readonly) UIWindow *_medusaHostedKeyboardWindow;
@property (nonatomic, readonly) NSArray *_requiredContextIdentifiersForMedusaDraggingDestination;
@property (nonatomic, readonly) SBMainDisplayLayoutState *currentLayoutState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SBIdleTimerCoordinating> *idleTimerCoordinator;
@property (nonatomic, readonly) SBMainDisplayPolicyAggregator *policyAggregator;
@property (nonatomic, readonly) SBMainDisplaySceneLayoutViewController *sceneLayoutViewController;
@property (readonly) Class superclass;
@property (getter=isSuspendedUnderLock, nonatomic) bool suspendedUnderLock;

+ (Class)_applicationSceneHandleClass;
+ (Class)_layoutStateManagerClass;
+ (Class)_sceneLayoutWindowClass;

- (void).cxx_destruct;
- (void)_addMedusaDraggingDestinationWindow:(id)arg1;
- (bool)_animateGeometryChangesForExternalForegroundApplicationScenes;
- (id)_appClientSettingsDiffInspector;
- (void)_application:(id)arg1 initiatedChangefromInterfaceOrientation:(long long)arg2 toInterfaceOrientation:(long long)arg3 scene:(id)arg4 sceneSettings:(id)arg5 transitionContext:(id)arg6;
- (void)_attemptAutorotationOfExternalForegroundApplicationScenesToInterfaceOrientation:(long long)arg1;
- (id)_createRootWindowScenePresentationBinder;
- (void)_deviceOrientationChanged:(id)arg1;
- (id)_externalClientSettingsDiffInspector;
- (bool)_handleAction:(id)arg1 forScene:(id)arg2;
- (id)_identifierForApplication:(id)arg1;
- (id)_internalClientSettingsDiffInspector;
- (bool)_isExternalForegroundScene:(id)arg1;
- (bool)_isUsingMedusaHostedKeyboardWindow;
- (id)_medusaHostedKeyboardWindow;
- (id)_newSceneIdentifierForApplication:(id)arg1;
- (id)_newSceneIdentifierForBundleIdentifier:(id)arg1;
- (id)_newSceneLayoutViewController;
- (void)_noteDidChangeToVisibility:(unsigned long long)arg1 previouslyExisted:(bool)arg2 forScene:(id)arg3;
- (void)_noteDidCommitUpdateForScene:(id)arg1;
- (id)_proposeIdleTimerBehaviorForReason:(id)arg1;
- (void)_removeMedusaDraggingDestinationWindow:(id)arg1;
- (id)_requiredContextIdentifiersForMedusaDraggingDestination;
- (void)_scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)_scene:(id)arg1 interceptUpdateWithNewSettings:(id)arg2;
- (void)_scene:(id)arg1 willUpdateWithSettings:(id)arg2 transitionContext:(id)arg3;
- (id)_sceneIdentifierForApplication:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)_sceneIdentityForApplication:(id)arg1 createPrimaryIfRequired:(bool)arg2;
- (id)_sceneIdentityForApplication:(id)arg1 uniqueIdentifier:(id)arg2 targetContentIdentifier:(id)arg3 allowCanMatches:(bool)arg4 preferNewScene:(bool)arg5 visibleIdentifiers:(id)arg6 excludingIdentifiers:(id)arg7;
- (bool)_shouldAutoHostScene:(id)arg1;
- (bool)_shouldFenceTransitionForScene:(id)arg1 updatedClientSettingsDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (bool)_shouldRequestSnapshotActionsForScene:(id)arg1;
- (bool)_shouldTrackScenesForDeactivation;
- (id)_snapshotRequestsForSceneHandle:(id)arg1 settings:(id)arg2;
- (void)_updateDeviceOrientation:(long long)arg1 ifNeededForScene:(id)arg2;
- (void)_updateExternalForegroundApplicationScenesToInterfaceOrientation:(long long)arg1 force:(bool)arg2 prefersTouchCancellationDisabled:(bool)arg3;
- (void)_updateLevelAndBackgroundSettingsForScene:(id)arg1 transitionContext:(id)arg2;
- (void)_updateMedusaHostedKeyboardWindow;
- (void)_updateMedusaHostedKeyboardWindowForScene:(id)arg1 isForeground:(bool*)arg2;
- (void)_updateValidInterfaceOrientationForTransitionContext:(id)arg1;
- (void)_userInterfaceStyleArbiterStyleChanged:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;
- (void)createSceneForApplication:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (id)existingSceneHandleForPersistenceIdentifier:(id)arg1;
- (id)existingSceneHandleForScene:(id)arg1;
- (id)existingSceneHandleForSceneIdentity:(id)arg1;
- (id)externalApplicationSceneHandles;
- (id)externalForegroundApplicationSceneHandles;
- (id)fetchOrCreateApplicationSceneHandleForApplication:(id)arg1 withIdentity:(id)arg2;
- (id)idleTimerCoordinator;
- (id)idleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 forReason:(id)arg3;
- (id)initWithReference:(id)arg1;
- (bool)isSuspendedUnderLock;
- (id)newSceneIdentityForApplication:(id)arg1;
- (id)policyAggregator;
- (id)preventTakingAdditionalMedusaSnapshotsForBackgroundingScenesWithReason:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)runningApplicationScenes:(id)arg1;
- (id)sceneIdentityForApplication:(id)arg1;
- (id)sceneIdentityForApplication:(id)arg1 excludingIdentifiers:(id)arg2;
- (id)sceneIdentityForApplication:(id)arg1 targetContentIdentifier:(id)arg2;
- (id)sceneIdentityForApplication:(id)arg1 targetContentIdentifier:(id)arg2 allowCanMatches:(bool)arg3 preferNewScene:(bool)arg4 visibleIdentifiers:(id)arg5;
- (id)sceneIdentityForApplication:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)sceneIdentityForApplication:(id)arg1 uniqueIdentifier:(id)arg2 targetContentIdentifier:(id)arg3;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (void)setIdleTimerCoordinator:(id)arg1;
- (void)setSuspendedUnderLock:(bool)arg1;
- (id)suspendedUnderLockManager:(id)arg1 sceneHandleForScene:(id)arg2;
- (id)suspendedUnderLockManagerDisplayConfiguration:(id)arg1;
- (id)suspendedUnderLockManagerVisibleScenesInLayoutState:(id)arg1;
- (id)window;

@end
