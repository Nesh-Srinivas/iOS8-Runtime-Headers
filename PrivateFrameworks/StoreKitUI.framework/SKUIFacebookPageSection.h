/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIFacebookLikeStatus, ACAccountStore, SKUIReviewsFacebookView, SKUIFacebookPageComponent;

@interface SKUIFacebookPageSection : SKUIStorePageSection  {
    ACAccountStore *_accountStore;
    BOOL _facebookAccountsExist;
    SKUIReviewsFacebookView *_facebookView;
    bool_isLoadingLikeStatus;
    SKUIFacebookLikeStatus *_likeStatus;
}

@property(readonly) SKUIFacebookPageComponent * pageComponent;


- (id)cellForIndexPath:(id)arg1;
- (void)_finishLookupWithStatus:(id)arg1 error:(id)arg2;
- (void)_toggleLikeAction:(id)arg1;
- (void)_reloadCollectionViewSection;
- (void)_reloadLikeStatus;
- (long long)_facebookAccountsExist;
- (id)_facebookView;
- (void)_changeStatusToUserLiked:(bool)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (long long)numberOfCells;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (struct CGSize { double x1; double x2; })cellSizeForIndexPath:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (id)initWithPageComponent:(id)arg1;
- (id)_accountStore;
- (void)_accountStoreDidChangeNotification:(id)arg1;
- (void)_resetState;
- (void)dealloc;
- (void).cxx_destruct;

@end
