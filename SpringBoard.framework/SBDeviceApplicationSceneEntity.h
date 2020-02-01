/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBDeviceApplicationSceneEntity : SBApplicationSceneEntity

@property (nonatomic, readonly) SBDeviceApplicationSceneHandle *sceneHandle;

+ (id)defaultEntityWithApplicationForMainDisplay:(id)arg1;
+ (id)defaultEntityWithApplicationForMainDisplay:(id)arg1 targetContentIdentifier:(id)arg2;
+ (id)entityWithApplicationForMainDisplay:(id)arg1 withScenePersistenceIdentifier:(id)arg2;
+ (id)newEntityWithApplicationForMainDisplay:(id)arg1;

- (long long)_mainDisplayPreferredInterfaceOrientation;
- (void)_setMainDisplayPreferredInterfaceOrientation:(long long)arg1;
- (bool)_supportsLayoutRole:(long long)arg1;
- (id)deviceApplicationSceneEntity;
- (id)initWithApplication:(id)arg1 uniqueIdentifier:(id)arg2 targetContentIdentifier:(id)arg3 sceneHandleProvider:(id)arg4;
- (id)initWithApplicationForMainDisplay:(id)arg1;
- (id)initWithApplicationForMainDisplay:(id)arg1 generatingNewPrimarySceneIfRequired:(bool)arg2;
- (id)initWithApplicationForMainDisplay:(id)arg1 targetContentIdentifier:(id)arg2;
- (id)initWithApplicationForMainDisplay:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)initWithApplicationForMainSecureDisplay:(id)arg1;
- (id)initWithApplicationSceneHandle:(id)arg1;
- (bool)isDeviceApplicationSceneEntity;
- (bool)supportsPresentationAtAnySize;
- (Class)viewControllerClass;
- (bool)wantsExclusiveForeground;

@end
