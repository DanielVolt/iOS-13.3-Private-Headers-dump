/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFBokehWallpaperCircle : CALayer {
    long long  _direction;
    bool  _fadingOut;
    long long  _fillColor;
    bool  _isFading;
    bool  _isPulsating;
    NSTimer * _lifetimeTimer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _originalFrame;
    bool  _shouldBlink;
    bool  _shouldPause;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _superviewBounds;
    double  _velocity;
}

@property (getter=isFadingOut, nonatomic) bool fadingOut;
@property (nonatomic) bool isPulsating;
@property (nonatomic) bool shouldPause;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } superviewBounds;

- (void).cxx_destruct;
- (void)_animateInNewCircle;
- (void)_pauseAnimations;
- (void)_resumeAnimations;
- (void)_timerFired;
- (double)desiredOpacity;
- (struct CGPoint { double x1; double x2; })desiredPositionDeltaForX:(double)arg1 y:(double)arg2 lockScreen:(bool)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fillColor:(long long)arg2;
- (bool)isFadingOut;
- (bool)isPulsating;
- (void)prepareForReuse;
- (double)randomOpacity;
- (void)setAnimationsEnabled:(bool)arg1;
- (void)setCircleColor:(long long)arg1;
- (void)setFadingOut:(bool)arg1;
- (void)setIsPulsating:(bool)arg1;
- (void)setShouldPause:(bool)arg1;
- (void)setSuperviewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldPause;
- (void)startPulsatingCircle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })superviewBounds;

@end
