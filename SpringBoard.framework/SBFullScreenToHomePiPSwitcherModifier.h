/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBFullScreenToHomePiPSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout * _appLayout;
    SBCoplanarSwitcherModifier * _coplanarModifier;
    struct CGPoint { 
        double x; 
        double y; 
    }  _finalCenter;
    double  _finalScale;
    double  _sourceAlpha;
}

- (void).cxx_destruct;
- (bool)_isIndexSelectedAppLayout:(unsigned long long)arg1;
- (bool)_shouldApplyMorphToPipToIndex:(unsigned long long)arg1;
- (long long)backdropBlurType;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cardCornerRadiiForIndex:(unsigned long long)arg1;
- (void)didMoveToParentModifier:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)initWithTransitionID:(id)arg1 appLayout:(id)arg2;
- (bool)isHomeScreenContentRequired;
- (bool)isIndexVisible:(unsigned long long)arg1;
- (bool)isSwitcherWindowUserInteractionEnabled;
- (bool)isSwitcherWindowVisible;
- (bool)isWallpaperRequiredForSwitcher;
- (id)layoutSettings;
- (unsigned long long)numberOfAppLayoutsToCacheSnapshots;
- (double)opacityForIndex:(unsigned long long)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (id)topMostAppLayouts;
- (id)transitionWillBegin;
- (long long)wallpaperStyle;

@end
