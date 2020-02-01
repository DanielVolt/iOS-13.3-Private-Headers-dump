/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBHomeScreenSpotlightViewController : SBSpotlightMultiplexingViewController {
    FBDisplayLayoutElement * _displayLayoutElement;
    <SBHomeScreenSpotlightDismissalDelegate> * _homescreenSpotlightDelegate;
}

@property (nonatomic, readonly) FBDisplayLayoutElement *displayLayoutElement;
@property (nonatomic, readonly) <SBHomeScreenSpotlightDismissalDelegate> *homescreenSpotlightDelegate;

- (void).cxx_destruct;
- (id)displayLayoutElement;
- (id)homescreenSpotlightDelegate;
- (id)initWithDelegate:(id)arg1;
- (unsigned long long)level;
- (unsigned long long)remoteSearchViewPresentationSource;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
