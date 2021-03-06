/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBWallpaperEffectView : UIView <SBApplicationSceneBackgroundView, SBWallpaperObserver, _SBFakeBlurObserver> {
    bool  _accessibilityReduceTransparencyEnabled;
    UIView * _blurMaskingContainer;
    UIView<_SBFakeBlur> * _blurView;
    UIView * _colorTintView;
    long long  _endStyle;
    bool  _forcesOpaque;
    bool  _fullscreen;
    UIView * _grayscaleTintView;
    UIImage * _maskImage;
    UIImageView * _maskImageView;
    bool  _shouldMaskBlur;
    bool  _shouldMaskTint;
    long long  _startStyle;
    UIView * _tintMaskingContainer;
    unsigned long long  _transformOptions;
    UIView<_SBFakeBlur> * _transitionBlurView;
    UIView * _transitionColorTintView;
    double  _transitionFraction;
    UIView * _transitionGrayscaleTintView;
    long long  _variant;
    UIColor * _wallpaperAverageColor;
    SBWallpaperController * _wallpaperController;
}

@property (nonatomic, retain) UIView *blurMaskingContainer;
@property (nonatomic, retain) UIView<_SBFakeBlur> *blurView;
@property (nonatomic, retain) UIView *colorTintView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forcesOpaque;
@property (getter=isFullscreen, nonatomic) bool fullscreen;
@property (nonatomic, retain) UIView *grayscaleTintView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageView *maskImageView;
@property (nonatomic) bool needsClassicModeBackground;
@property (nonatomic) bool shouldUseBrightMaterial;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *tintMaskingContainer;
@property (nonatomic) unsigned long long transformOptions;
@property (nonatomic, retain) UIView<_SBFakeBlur> *transitionBlurView;
@property (nonatomic, retain) UIView *transitionColorTintView;
@property (nonatomic, retain) UIView *transitionGrayscaleTintView;
@property (nonatomic, readonly) SBWallpaperController *wallpaperController;
@property (nonatomic) long long wallpaperStyle;
@property (nonatomic) double zoomScale;

+ (id)imageInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forVariant:(long long)arg2 withStyle:(long long)arg3 zoomFactor:(double)arg4 mask:(id)arg5 masksBlur:(bool)arg6 masksTint:(bool)arg7;

- (void).cxx_destruct;
- (void)_accessibilityReduceTransparencyChanged:(id)arg1;
- (void)_configureForCurrentBlurStyle;
- (void)_configureFromScratch;
- (void)_configureGrayscaleAndColorTintViewForStartStyle:(bool)arg1;
- (void)_configureViews;
- (void)_configureViewsForFullscreen:(bool)arg1;
- (bool)_isEffectivelyFullscreen;
- (bool)_needsBlurViewForStyle:(long long)arg1;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forceUpdateBackgroundImage:(bool)arg2;
- (void)_setIsContainedInPopover:(bool)arg1;
- (void)_setTransitionFraction:(double)arg1;
- (void)_updateWallpaperAverageColor:(id)arg1;
- (id)appearanceStorage;
- (id)blurMaskingContainer;
- (id)blurView;
- (id)colorTintView;
- (bool)currentTransitionStateIsOpaque;
- (void)dealloc;
- (id)description;
- (void)fakeBlurView:(id)arg1 didChangeStyle:(long long)arg2;
- (bool)forcesOpaque;
- (id)grayscaleTintView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithWallpaperController:(id)arg1 variant:(long long)arg2 transformOptions:(unsigned long long)arg3;
- (id)initWithWallpaperVariant:(long long)arg1;
- (id)initWithWallpaperVariant:(long long)arg1 transformOptions:(unsigned long long)arg2;
- (bool)isFullscreen;
- (void)layoutSubviews;
- (id)maskImageView;
- (void)offsetWallpaperBy:(struct CGPoint { double x1; double x2; })arg1;
- (bool)prepareToAnimateToTransitionState:(inout struct { long long x1; long long x2; double x3; }*)arg1;
- (void)setAppearanceStorage:(id)arg1;
- (void)setBarStyle:(long long)arg1;
- (void)setBarTintColor:(id)arg1;
- (void)setBarWantsAdaptiveBackdrop:(bool)arg1;
- (void)setBlurMaskingContainer:(id)arg1;
- (void)setBlurView:(id)arg1;
- (void)setColorTintView:(id)arg1;
- (void)setForcesOpaque:(bool)arg1;
- (void)setFullscreen:(bool)arg1;
- (void)setGrayscaleTintView:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setMaskImage:(id)arg1 masksBlur:(bool)arg2 masksTint:(bool)arg3;
- (void)setMaskImageView:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTintMaskingContainer:(id)arg1;
- (void)setTransformOptions:(unsigned long long)arg1;
- (void)setTransitionBlurView:(id)arg1;
- (void)setTransitionColorTintView:(id)arg1;
- (void)setTransitionGrayscaleTintView:(id)arg1;
- (void)setTransitionState:(struct { long long x1; long long x2; double x3; })arg1;
- (void)setTranslucent:(bool)arg1;
- (void)setWallpaperStyle:(long long)arg1;
- (void)setZoomScale:(double)arg1;
- (id)tintMaskingContainer;
- (unsigned long long)transformOptions;
- (id)transitionBlurView;
- (id)transitionColorTintView;
- (id)transitionGrayscaleTintView;
- (void)updateBackgroundImage;
- (id)wallpaperController;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2;
- (long long)wallpaperStyle;
- (void)willMoveToWindow:(id)arg1;
- (double)zoomScale;

@end
