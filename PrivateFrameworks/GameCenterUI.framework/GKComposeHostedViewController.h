/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class NSString, GKUITheme, NSMutableArray, GKComposeRemoteViewController;

@interface GKComposeHostedViewController : GKHostedViewController  {
    unsigned int _rid;
    GKUITheme *_theme;
    NSMutableArray *_playerInternalsToAddAsRecipients;
    NSMutableArray *_emailsToAddAsRecipients;
}

@property(retain) GKUITheme * theme;
@property unsigned int rid;
@property(copy) NSString * defaultMessage;
@property(retain) NSMutableArray * playerInternalsToAddAsRecipients;
@property(retain) NSMutableArray * emailsToAddAsRecipients;
@property(readonly) GKComposeRemoteViewController * _remote;


- (id)emailsToAddAsRecipients;
- (id)playerInternalsToAddAsRecipients;
- (void)addRecipientsWithPlayerIDs:(id)arg1;
- (void)addRecipientPlayers:(id)arg1;
- (void)_addRecipientInternals:(id)arg1;
- (void)setEmailsToAddAsRecipients:(id)arg1;
- (void)setPlayerInternalsToAddAsRecipients:(id)arg1;
- (id)_remote;
- (void)setDefaultMessage:(id)arg1;
- (id)defaultMessage;
- (unsigned int)rid;
- (void)addRecipientsWithEmailAddresses:(id)arg1;
- (void)didGetRemoteViewController;
- (id)_presentingViewController;
- (id)hostSideViewControllerClassName;
- (id)serviceSideViewControllerClassName;
- (void)setTheme:(id)arg1;
- (id)theme;
- (void)setRid:(unsigned int)arg1;
- (void)dealloc;

@end
