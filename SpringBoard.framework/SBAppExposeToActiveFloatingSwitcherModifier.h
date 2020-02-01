/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBAppExposeToActiveFloatingSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout * _activeAppLayout;
    NSArray * _appLayoutsPriorToTransitionFromAppExpose;
    unsigned long long  _direction;
    SBSwitcherModifier * _multitaskingModifier;
    SBSwitcherToActiveFloatingSwitcherModifier * _switcherToActiveFloatingAppModifier;
}

- (void).cxx_destruct;
- (bool)_isEffectivelyActiveFloatingApp;
- (bool)_isIndexFullScreenAppLayout:(unsigned long long)arg1;
- (double)_unselectedCardScale;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)handleEvent:(id)arg1;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)initWithTransitionID:(id)arg1 direction:(unsigned long long)arg2 multitaskingModifier:(id)arg3 activeAppLayout:(id)arg4 switcherToActiveFloatingAppModifier:(id)arg5;
- (double)opacityForIndex:(unsigned long long)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (id)topMostAppLayouts;

@end
