/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIShareInvitationRemoteViewController : _UIRemoteViewController <_UIShareInvitationViewControllerHost> {
    <_UISharingPublicController> * _publicController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <_UISharingPublicController> *publicController;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)_dismissAndRepresentForActivity:(id /* block */)arg1;
- (void)_dismissForActivityRepresentation:(id /* block */)arg1;
- (void)_dismissViewController;
- (void)_dismissViewControllerWithError:(id)arg1;
- (void)_performAuxiliaryActionWithCompletion:(id /* block */)arg1;
- (void)_performHeaderActionWithCompletion:(id /* block */)arg1;
- (void)_representFullscreenAfterActivityDismissal:(id /* block */)arg1;
- (void)_requestSavedShareWithCompletion:(id /* block */)arg1;
- (void)_shareDidChange:(id)arg1;
- (void)_shareWasMadePrivate;
- (void)_tintColorDidChangeToColor:(id)arg1;
- (void)_updateTraitCollectionForPopoverStatus;
- (void)didMoveToParentViewController:(id)arg1;
- (id)publicController;
- (void)setPublicController:(id)arg1;
- (void)viewDidLoad;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)viewWillLayoutSubviews;

@end