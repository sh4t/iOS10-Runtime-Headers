/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKLeaderboardHeaderView : UICollectionReusableView {
    GKButton * _leaderboardsButton;
    long long  _timeScope;
    GKButton * _timeScopeButton;
}

@property (nonatomic, copy) NSString *currentLeaderboardTitle;
@property (nonatomic, readonly) UIView *leaderboardButton;
@property (nonatomic) bool leaderboardButtonEnabled;
@property GKButton *leaderboardsButton;
@property (nonatomic, readonly) UIView *timeButton;
@property (nonatomic) long long timeScope;
@property GKButton *timeScopeButton;

- (id)currentLeaderboardTitle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)leaderboardButton;
- (bool)leaderboardButtonEnabled;
- (void)leaderboardButtonPressed:(id)arg1;
- (id)leaderboardsButton;
- (void)setCurrentLeaderboardTitle:(id)arg1;
- (void)setLeaderboardButtonEnabled:(bool)arg1;
- (void)setLeaderboardsButton:(id)arg1;
- (void)setTimeScope:(long long)arg1;
- (void)setTimeScopeButton:(id)arg1;
- (id)timeButton;
- (void)timeButtonPressed:(id)arg1;
- (long long)timeScope;
- (id)timeScopeButton;

@end