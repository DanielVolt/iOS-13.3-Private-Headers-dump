/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBFluidSwitcherModifierTimelineViewController : UIViewController <_SBFluidSwitcherModifierTimelineEntryViewDelegate> {
    UIButton * _clearButton;
    _SBModifierTimelineDetailViewController * _detailViewController;
    NSMutableArray * _entryViews;
    UINavigationController * _navigationController;
    UIScrollView * _scrollView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_reset:(id)arg1;
- (void)addEntry:(id)arg1;
- (void)didSelectEntryView:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
