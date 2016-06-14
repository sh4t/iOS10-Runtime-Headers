/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIShortcutModule : CCUIButtonModule {
    NSString * _displayID;
    NSURL * _url;
}

@property (nonatomic, copy) NSString *displayID;
@property (setter=setURL:, nonatomic, copy) NSURL *url;

+ (id)identifier;

- (void).cxx_destruct;
- (bool)_toggleState;
- (void)activateApp;
- (void)activateAppWithDisplayID:(id)arg1 url:(id)arg2;
- (id)aggdKey;
- (id)displayID;
- (id)displayName;
- (id)identifier;
- (bool)isRestricted;
- (void)setDisplayID:(id)arg1;
- (void)setURL:(id)arg1;
- (id)url;

@end