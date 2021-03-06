/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIViewController, NSMutableArray, UIView, NSObject<UIAlertControllerVisualStyleProviding>, NSString, _UIAlertControllerTextFieldViewController, NSSet, NSAttributedString, UIPopoverController, UIGestureRecognizer, NSArray, UIAlertAction;

@interface UIAlertController : UIViewController <UIAlertControllerContaining, _UIAlertControllerTextFieldViewControllerContaining, UIAlertControllerVisualStyleProviding> {
    NSString *_message;
    NSAttributedString *_attributedTitle;
    NSAttributedString *_attributedMessage;
    NSMutableArray *_actions;
    NSSet *_linkedAlertControllers;
    UIAlertAction *_cancelAction;
    long long _resolvedStyle;
    long long _preferredStyle;
    NSObject<UIAlertControllerVisualStyleProviding> *_styleProvider;
    UIViewController *_contentViewController;
    _UIAlertControllerTextFieldViewController *_textFieldViewController;
    bool_textFieldsHidden;
    UIGestureRecognizer *_backButtonDismissGestureRecognizer;
    id _ownedTransitioningDelegate;
    bool_shouldEnsureContentControllerViewIsVisibleOnAppearance;
    bool__shouldAllowNilParameters;
    bool__shouldFlipFrameForShimDismissal;
    UIAlertAction *__defaultAlertAction;
    UIPopoverController *__compatibilityPopoverController;
}

@property(readonly) NSArray * actions;
@property(readonly) NSArray * textFields;
@property(copy) NSString * title;
@property(copy) NSString * message;
@property long long preferredStyle;
@property(getter=_attributedTitle,setter=_setAttributedTitle:,copy) NSAttributedString * attributedTitle;
@property(getter=_attributedMessage,setter=_setAttributedMessage:,copy) NSAttributedString * attributedMessage;
@property(retain) UIViewController * contentViewController;
@property(getter=_styleProvider,setter=_setStyleProvider:,retain) NSObject<UIAlertControllerVisualStyleProviding> * styleProvider;
@property(setter=_setDefaultAlertAction:) UIAlertAction * _defaultAlertAction;
@property(setter=_setShouldEnsureContentControllerViewIsVisibleOnAppearance:) bool _shouldEnsureContentControllerViewIsVisibleOnAppearance;
@property(readonly) NSMutableArray * _actions;
@property(readonly) UIAlertAction * _cancelAction;
@property(readonly) UIView * _foregroundView;
@property(readonly) UIView * _dimmingView;
@property(readonly) long long _resolvedStyle;
@property(readonly) bool _shouldProvideDimmingView;
@property(readonly) bool _shouldAlignToKeyboard;
@property(setter=_setShouldAllowNilParameters:) bool _shouldAllowNilParameters;
@property(setter=_setCompatibilityPopoverController:) UIPopoverController * _compatibilityPopoverController;
@property(setter=_setTextFieldsHidden:) bool _textFieldsHidden;
@property bool _shouldFlipFrameForShimDismissal;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)_alertControllerWithTitle:(id)arg1 message:(id)arg2;
+ (void)_setShouldUsePresentationController:(bool)arg1;
+ (bool)_shouldUsePresentationController;
+ (id)alertControllerWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3;
+ (bool)_shouldSendLegacyMethodsFromViewWillTransitionToSize;
+ (id)notifyMeConfirmationControllerWithHandler:(id)arg1;

- (void)setMessage:(id)arg1;
- (id)message;
- (void)setTitle:(id)arg1;
- (id)actions;
- (void)dealloc;
- (void)_setCompatibilityPopoverController:(id)arg1;
- (void)_setShouldAllowNilParameters:(bool)arg1;
- (void)_setDefaultAlertAction:(id)arg1;
- (void)_setShouldEnsureContentControllerViewIsVisibleOnAppearance:(bool)arg1;
- (bool)_shouldEnsureContentControllerViewIsVisibleOnAppearance;
- (void)_removeAllTextFields;
- (void)_setAttributedMessage:(id)arg1;
- (id)_attributedMessage;
- (void)_setAttributedTitle:(id)arg1;
- (id)_attributedTitle;
- (bool)_shouldFitWidthToContentViewControllerWidth;
- (bool)_shouldSizeToFillSuperview;
- (void)_flipFrameForShimDismissalIfNecessary;
- (void)_updateViewFrameForLandscapePresentationInShimIfNecessary;
- (id)linkedAlertControllers;
- (void)unlinkAlertController:(id)arg1;
- (void)linkAlertController:(id)arg1;
- (void)_dismissFromPopoverDimmingView;
- (bool)_shouldDismissAction:(id)arg1;
- (void)_actionViewTapped:(id)arg1;
- (void)_actionViewHighlightChanged:(id)arg1;
- (void)_setStyleProvider:(id)arg1;
- (bool)_textFieldsHidden;
- (void)_setTextFieldsHidden:(bool)arg1;
- (void)addTextFieldWithConfigurationHandler:(id)arg1;
- (void)_actionChanged:(id)arg1;
- (void)_addActionWithTitle:(id)arg1 image:(id)arg2 style:(long long)arg3 handler:(id)arg4;
- (void)_addActionWithTitle:(id)arg1 style:(long long)arg2 handler:(id)arg3;
- (void)_returnKeyPressedInLastTextField;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (bool)_hasContentToDisplay;
- (bool)_shouldAllowNilParameters;
- (bool)_shouldProvideDimmingView;
- (bool)_isPresentedAsPopover;
- (id)_alertControllerContainer;
- (bool)_shouldFlipFrameForShimDismissal;
- (long long)_modalPresentationStyleForResolvedStyle;
- (bool)_viewControllerIsPresentedInPopover:(id)arg1;
- (id)_compatibilityPopoverController;
- (void)_fireOffActionOnTargetIfValidForAction:(id)arg1;
- (void)_dismissAnimated:(bool)arg1 triggeringAction:(id)arg2 triggeredByPopoverDimmingView:(bool)arg3;
- (id)cancelAction;
- (void)_attemptAnimatedDismissWithGestureRecognizer:(id)arg1;
- (void)_reevaluateResolvedStyle;
- (void)_dismissFromBackButton:(id)arg1;
- (id)_cancelAction;
- (id)visualStyleForAlertControllerStyle:(long long)arg1 traitCollection:(id)arg2 descriptor:(id)arg3;
- (id)_styleProvider;
- (id)_currentDescriptor;
- (long long)_resolvedStyle;
- (void)_recomputePreferredContentSize;
- (void)_installBackGestureRecognizer;
- (void)_resolvedStyleChanged;
- (void)_updateProvidedStyle;
- (void)_clearActionHandlers;
- (void)_uninstallBackGestureRecognizer;
- (void)setTextFieldsCanBecomeFirstResponder:(bool)arg1;
- (void)_dismissAnimated:(bool)arg1 triggeringAction:(id)arg2;
- (id)_defaultAlertAction;
- (id)textFields;
- (void)_updateShouldAlignToKeyboard;
- (void)setContentViewController:(id)arg1;
- (long long)preferredStyle;
- (id)_textFieldViewController;
- (id)_actions;
- (id)_alertControllerView;
- (void)setCancelAction:(id)arg1;
- (void)set_shouldFlipFrameForShimDismissal:(bool)arg1;
- (void)_updateModalPresentationStyle;
- (void)addAction:(id)arg1;
- (void)_addActionWithTitle:(id)arg1 style:(long long)arg2 handler:(id)arg3 shouldDismissHandler:(id)arg4;
- (void)setPreferredStyle:(long long)arg1;
- (id)_containedAlertController;
- (double)_contentVerticalInsets;
- (bool)_shouldAlignToKeyboard;
- (id)_dismissGestureRecognizer;
- (bool)_canDismissWithGestureRecognizer;
- (id)_dimmingView;
- (void)_getRotationContentSettings:(struct { boolx1; boolx2; boolx3; boolx4; double x5; int x6; }*)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (bool)_requiresCustomPresentationController;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (bool)_isSupportedInterfaceOrientation:(long long)arg1;
- (id)_requiredNotificationsForRemoteServices;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (id)contentViewController;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)shouldAutorotate;
- (id)_foregroundView;
- (void)_gkAddCancelButtonWithNoAction;

@end
