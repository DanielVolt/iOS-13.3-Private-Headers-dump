/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBApplicationInfo : _UIApplicationInfo {
    bool  _allowNonDefaultBackgroundStyle;
    unsigned long long  _allowedNKNotificationsPerDay;
    bool  _alwaysLaunchesSuspended;
    bool  _alwaysReceivesOpenURLSource;
    NSString * _applicationShortcutWidgetBundleIdentifier;
    unsigned long long  _applicationSizeInBytes;
    bool  _canChangeBackgroundStyle;
    CRCarPlayAppDeclaration * _carPlayDeclaration;
    bool  _cloudDemoted;
    NSURL * _dataContainerURLOverride;
    long long  _defaultStatusBarStyle;
    bool  _disablesClassicMode;
    bool  _disallowsControlCenter;
    bool  _disallowsNotificationCenter;
    NSString * _displayName;
    NSURL * _documentInboxURL;
    NSArray * _domainsToPreheat;
    unsigned long long  _dynamicApplicationShortcutItemsVersion;
    long long  _forcedUserInterfaceStyle;
    bool  _hasHiddenTag;
    Class  _iconClass;
    NSString * _iconMasqueradeIdentifier;
    int  _ignoredStatusBarStyleOverrides;
    NSString * _installInstanceID;
    bool  _isGameCenterEnabled;
    bool  _isLaunchableDuringSetup;
    bool  _isMonarchLinked;
    bool  _isNewsstand;
    bool  _isOkemoLinked;
    bool  _isPeaceBLinked;
    bool  _isPeaceLinked;
    bool  _isTigrisLinked;
    bool  _isYukonELinked;
    bool  _isYukonLinked;
    NSArray * _launchImageInfo;
    NSString * _launchInterfaceFileName;
    NSUserDefaults * _lazy_userDefaults;
    XBSnapshotContainerIdentity * _manifestContainerIdentity;
    int  _networkUsageTypes;
    bool  _ocelotApplication;
    bool  _prefersSavedSnapshots;
    bool  _preventsLaunchInterfaceSplitting;
    bool  _representsWebApplication;
    bool  _requiresHiDPI;
    NSURL * _restorationArchiveContainerURL;
    bool  _shouldLaunchWithLiveContentASAP;
    bool  _shouldSkipCrossfadeToLive;
    NSArray * _staticApplicationShortcutItems;
    bool  _staticApplicationShortcutItemsHaveBeenLocalized;
    bool  _statusBarIsLegacy;
    NSSet * _supportedContentTypes;
    int  _supportedTypes;
    bool  _supports64Bit;
    bool  _supportsDirectToAirplay;
    bool  _systemAppSupportsLocalNotifications;
    unsigned long long  _uninstallCapability;
    NSSet * _urlSchemes;
    bool  _usesRLNDataProvider;
    bool  _usesSplashBoard;
    unsigned long long  _visibilityOverride;
    unsigned long long  _voipClass;
    bool  _wantsExclusiveForeground;
    bool  _wantsFullScreen;
    bool  _wantsLaunchWithoutPNG;
    bool  _wasGameCenterEverEnabled;
    long long  _whitePointAdaptivityStyle;
}

@property (nonatomic, readonly) unsigned long long allowedNKNotificationsPerDay;
@property (nonatomic, readonly) bool alwaysReceivesOpenURLSource;
@property (getter=isAppleApplication, nonatomic, readonly) bool appleApplication;
@property (nonatomic, readonly, copy) NSString *applicationShortcutWidgetBundleIdentifier;
@property (nonatomic, readonly) unsigned long long applicationSizeInBytes;
@property (nonatomic, readonly) CRCarPlayAppDeclaration *carPlayDeclaration;
@property (getter=isCloudDemoted, nonatomic, readonly) bool cloudDemoted;
@property (nonatomic, readonly) long long defaultStatusBarStyle;
@property (nonatomic, readonly) bool disablesClassicMode;
@property (nonatomic, readonly) bool disallowsControlCenter;
@property (nonatomic, readonly) bool disallowsNotificationCenter;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly) NSURL *documentInboxURL;
@property (nonatomic, readonly) NSArray *domainsToPreheat;
@property (nonatomic, readonly) unsigned long long dynamicApplicationShortcutItemsVersion;
@property (getter=isGameCenterEnabled, nonatomic, readonly) bool gameCenterEnabled;
@property (nonatomic, readonly) bool hasHiddenTag;
@property (nonatomic, readonly) Class iconClass;
@property (nonatomic, readonly, copy) NSString *iconMasqueradeIdentifier;
@property (nonatomic, readonly) int ignoredStatusBarStyleOverrides;
@property (nonatomic, readonly) NSString *installInstanceID;
@property (getter=isInternalApplication, nonatomic, readonly) bool internalApplication;
@property (nonatomic, readonly) NSArray *launchImageInfo;
@property (nonatomic, readonly) NSString *launchInterfaceFileName;
@property (getter=isLaunchableDuringSetup, nonatomic, readonly) bool launchableDuringSetup;
@property (nonatomic, readonly) XBSnapshotContainerIdentity *manifestContainerIdentity;
@property (getter=isMonarchLinked, nonatomic, readonly) bool monarchLinked;
@property (nonatomic, readonly) int networkUsageTypes;
@property (getter=isNewsstand, nonatomic, readonly) bool newsstand;
@property (getter=isOcelotApplication, nonatomic, readonly) bool ocelotApplication;
@property (getter=isPeaceBLinked, nonatomic, readonly) bool peaceBLinked;
@property (getter=isPeaceLinked, nonatomic, readonly) bool peaceLinked;
@property (nonatomic, readonly) bool prefersSavedSnapshots;
@property (nonatomic, readonly) bool preventsLaunchInterfaceSplitting;
@property (nonatomic, readonly) bool representsWebApplication;
@property (nonatomic, readonly) bool requiresHiDPI;
@property (nonatomic, readonly) NSURL *restorationArchiveContainerURL;
@property (nonatomic, readonly) bool shouldLaunchSuspendedAlways;
@property (nonatomic, readonly) bool shouldLaunchWithLiveContentASAP;
@property (nonatomic, readonly) bool shouldSkipCrossfadeToLive;
@property (nonatomic, readonly) NSArray *staticApplicationShortcutItems;
@property (getter=isStatusBarLegacy, nonatomic, readonly) bool statusBarIsLegacy;
@property (nonatomic, readonly) int supportedTypes;
@property (nonatomic, readonly) bool supports64Bit;
@property (nonatomic, readonly) bool supportsAudioBackgroundMode;
@property (nonatomic, readonly) bool supportsDirectToAirplay;
@property (nonatomic, readonly) bool supportsDirectToAirplayOrIsWhitelisted;
@property (nonatomic, readonly) bool supportsFetchBackgroundMode;
@property (nonatomic, readonly) bool supportsLegacyVOIPBackgroundMode;
@property (nonatomic, readonly) bool supportsNewsstandContentBackgroundMode;
@property (nonatomic, readonly) bool supportsRemoteNotificationBackgroundMode;
@property (nonatomic, readonly) bool suppressUserNotificationPermissionAlert;
@property (nonatomic, readonly) bool systemAppSupportsLocalNotifications;
@property (getter=isSystemApplication, nonatomic, readonly) bool systemApplication;
@property (getter=isTigrisLinked, nonatomic, readonly) bool tigrisLinked;
@property (nonatomic, readonly) unsigned long long uninstallCapability;
@property (nonatomic, readonly) NSSet *urlSchemes;
@property (nonatomic, readonly) NSUserDefaults *userDefaults;
@property (nonatomic, readonly) bool usesRLNDataProvider;
@property (nonatomic, readonly) bool usesSplashBoard;
@property (nonatomic, readonly) unsigned long long visibilityOverride;
@property (nonatomic, readonly) unsigned long long voipClass;
@property (nonatomic, readonly) bool wantsExclusiveForeground;
@property (nonatomic, readonly) bool wantsFullScreen;
@property (nonatomic, readonly) bool wantsLaunchWithoutPNG;
@property (nonatomic, readonly) bool wasGameCenterEverEnabled;
@property (nonatomic, readonly) long long whitePointAdaptivityStyle;
@property (getter=isYukonELinked, nonatomic, readonly) bool yukonELinked;
@property (getter=isYukonLinked, nonatomic, readonly) bool yukonLinked;

+ (int)_calculateApplicationSupportedTypesFromProxy:(id)arg1;
+ (unsigned long long)_visibilityOverrideFromInfo:(id)arg1 entitlements:(id)arg2;

- (void).cxx_destruct;
- (unsigned long long)_calculateVoipClassWithEntitlements:(id)arg1;
- (id)_configureTags:(id)arg1 hasVisibilityOverride:(bool)arg2;
- (void)_loadFromProxy:(id)arg1;
- (bool)_supportsApplicationType:(int)arg1;
- (unsigned long long)allowedNKNotificationsPerDay;
- (bool)alwaysReceivesOpenURLSource;
- (id)applicationShortcutWidgetBundleIdentifier;
- (unsigned long long)applicationSizeInBytes;
- (long long)backgroundStyle;
- (long long)backgroundStyleForRequestedBackgroundStyle:(long long)arg1;
- (bool)canChangeBackgroundStyle;
- (id)carPlayDeclaration;
- (id)dataContainerURL;
- (long long)defaultStatusBarStyle;
- (bool)disablesClassicMode;
- (bool)disallowsControlCenter;
- (bool)disallowsNotificationCenter;
- (id)displayName;
- (id)documentInboxURL;
- (id)domainsToPreheat;
- (unsigned long long)dynamicApplicationShortcutItemsVersion;
- (bool)hasHiddenTag;
- (Class)iconClass;
- (id)iconMasqueradeIdentifier;
- (int)ignoredStatusBarStyleOverrides;
- (id)installInstanceID;
- (bool)isAppleApplication;
- (bool)isCloudDemoted;
- (bool)isGameCenterEnabled;
- (bool)isInternalApplication;
- (bool)isLaunchableDuringSetup;
- (bool)isMonarchLinked;
- (bool)isNewsstand;
- (bool)isOcelotApplication;
- (bool)isPeaceBLinked;
- (bool)isPeaceLinked;
- (bool)isStatusBarLegacy;
- (bool)isSystemApplication;
- (bool)isTigrisLinked;
- (bool)isYukonELinked;
- (bool)isYukonLinked;
- (id)launchImageInfo;
- (id)launchInterfaceFileName;
- (id)manifestContainerIdentity;
- (int)networkUsageTypes;
- (bool)prefersSavedSnapshots;
- (bool)preventsLaunchInterfaceSplitting;
- (bool)representsWebApplication;
- (bool)requiresHiDPI;
- (id)restorationArchiveContainerURL;
- (bool)shouldLaunchSuspendedAlways;
- (bool)shouldLaunchWithLiveContentASAP;
- (bool)shouldSkipCrossfadeToLive;
- (id)staticApplicationShortcutItems;
- (bool)statusBarHiddenWhenVerticallyCompact;
- (int)supportedTypes;
- (bool)supports64Bit;
- (bool)supportsAudioBackgroundMode;
- (bool)supportsDirectToAirplay;
- (bool)supportsDirectToAirplayOrIsWhitelisted;
- (bool)supportsFetchBackgroundMode;
- (bool)supportsLegacyVOIPBackgroundMode;
- (bool)supportsNewsstandContentBackgroundMode;
- (bool)supportsRemoteNotificationBackgroundMode;
- (bool)suppressUserNotificationPermissionAlert;
- (bool)systemAppSupportsLocalNotifications;
- (unsigned long long)uninstallCapability;
- (id)urlSchemes;
- (id)userDefaults;
- (bool)usesRLNDataProvider;
- (bool)usesSplashBoard;
- (unsigned long long)visibilityOverride;
- (unsigned long long)voipClass;
- (bool)wantsExclusiveForeground;
- (bool)wantsFullScreen;
- (bool)wantsLaunchWithoutPNG;
- (bool)wasGameCenterEverEnabled;
- (long long)whitePointAdaptivityStyle;

@end
