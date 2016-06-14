/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicNowPlayingTransitionController : NSObject <UIViewControllerAnimatedTransitioning> {
    UIView * _dimmingView;
    bool  _dismissal;
    bool  _hasFinishedTransition;
    MusicTabBarController * _tabBarController;
    id /* block */  _transitionEndBlock;
    id /* block */  _transitionFinishBlock;
    id /* block */  _transitionRubberBandEffectBlock;
    id /* block */  _transitionStartBlock;
    id /* block */  _transitionStopBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDismissal, nonatomic) bool dismissal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) MusicTabBarController *tabBarController;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (void)animateTransition:(id)arg1 withDuration:(double)arg2 initialVelocity:(double)arg3 interactively:(bool)arg4 toFinalPositions:(bool)arg5 completion:(id /* block */)arg6;
- (void)cleanupTransition:(id)arg1;
- (bool)isDismissal;
- (void)prepareTransition:(id)arg1;
- (void)setDismissal:(bool)arg1;
- (void)setTabBarController:(id)arg1;
- (void)stopAnimation;
- (id)tabBarController;
- (double)transitionDuration:(id)arg1;
- (void)updateRubberbandingWithDistance:(double)arg1;

@end