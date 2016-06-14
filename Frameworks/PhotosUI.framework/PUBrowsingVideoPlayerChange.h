/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUBrowsingVideoPlayerChange : PUViewModelChange {
    bool  _avPlayerDidChange;
    bool  _desiredPlayStateDidChange;
    bool  _isActivatedDidChange;
    bool  _isAtBeginningDidChange;
    bool  _isAtEndDidChange;
    bool  _isPlayableDidChange;
    bool  _isPlayerLoadingAllowedDidChange;
    bool  _isPlayingAllowedDidChange;
    bool  _isStalledDidChange;
    bool  _playStateDidChange;
    bool  _playerItemDidChange;
    bool  _shouldRespectMuteSwitchDidChange;
}

@property (setter=_setAVPlayerDidChange:, nonatomic) bool avPlayerDidChange;
@property (setter=_setDesiredPlayStateDidChange:, nonatomic) bool desiredPlayStateDidChange;
@property (setter=_setActivatedDidChange:, nonatomic) bool isActivatedDidChange;
@property (setter=_setAtBeginningDidChange:, nonatomic) bool isAtBeginningDidChange;
@property (setter=_setAtEndDidChange:, nonatomic) bool isAtEndDidChange;
@property (setter=_setPlayableDidChange:, nonatomic) bool isPlayableDidChange;
@property (setter=_setPlayerLoadingAllowedDidChange:, nonatomic) bool isPlayerLoadingAllowedDidChange;
@property (setter=_setPlayingAllowedDidChange:, nonatomic) bool isPlayingAllowedDidChange;
@property (setter=_setStalledDidChange:, nonatomic) bool isStalledDidChange;
@property (setter=_setPlayStateDidChange:, nonatomic) bool playStateDidChange;
@property (setter=_setPlayerItemDidChange:, nonatomic) bool playerItemDidChange;
@property (setter=_setShouldRespectMuteSwitchDidChange:, nonatomic) bool shouldRespectMuteSwitchDidChange;

- (void)_setAVPlayerDidChange:(bool)arg1;
- (void)_setActivatedDidChange:(bool)arg1;
- (void)_setAtBeginningDidChange:(bool)arg1;
- (void)_setAtEndDidChange:(bool)arg1;
- (void)_setDesiredPlayStateDidChange:(bool)arg1;
- (void)_setPlayStateDidChange:(bool)arg1;
- (void)_setPlayableDidChange:(bool)arg1;
- (void)_setPlayerItemDidChange:(bool)arg1;
- (void)_setPlayerLoadingAllowedDidChange:(bool)arg1;
- (void)_setPlayingAllowedDidChange:(bool)arg1;
- (void)_setShouldRespectMuteSwitchDidChange:(bool)arg1;
- (void)_setStalledDidChange:(bool)arg1;
- (bool)avPlayerDidChange;
- (bool)desiredPlayStateDidChange;
- (bool)hasChanges;
- (bool)isActivatedDidChange;
- (bool)isAtBeginningDidChange;
- (bool)isAtEndDidChange;
- (bool)isPlayableDidChange;
- (bool)isPlayerLoadingAllowedDidChange;
- (bool)isPlayingAllowedDidChange;
- (bool)isStalledDidChange;
- (bool)playStateDidChange;
- (bool)playerItemDidChange;
- (bool)shouldRespectMuteSwitchDidChange;

@end