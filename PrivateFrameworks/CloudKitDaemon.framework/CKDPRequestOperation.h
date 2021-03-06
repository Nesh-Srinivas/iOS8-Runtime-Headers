/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPRecordRetrieveVersionsRequest, CKDPPulseRequest, CKDPShareDeleteRequest, CKDPSubscriptionCreateRequest, CKDPPostCommentRequest, CKDPNotificationSyncRequest, CKDPRequestOperationHeader, CKDPUserRetrieveRequest, CKDPRecordDeleteRequest, CKDPShareParticipantDeleteRequest, CKDPShareCreateRequest, CKDPSubscriptionRetrieveRequest, CKDPResetContainerRequest, CKDPLikeRequest, CKDPUserPrivacySettingsUpdateRequest, CKDPRecordRetrieveChangesRequest, CKDPQueryRetrieveRequest, CKDPZoneDeleteRequest, CKDPUserPrivacySettingsResetRequest, CKDPSubscriptionDeleteRequest, CKDPShareRetrieveRequest, CKDPMescalSessionInfoRequest, CKDPUnlikeRequest, CKDPMescalCertificateRequest, CKDPInvitationAcceptRequest, CKDPUserAvailableQuotaRequest, CKDPShareParticipantCreateRequest, CKDPPkiRetrieveRequest, CKDPSetBadgeCountRequest, CKDPDeleteContainerRequest, CKDPGetCommentsRequest, CKDPZoneSaveRequest, CKDPAssetUploadTokenRetrieveRequest, CKDPUserPrivacySettingsRetrieveRequest, CKDPUserPrivacySettingsBatchLookupRequest, CKDPPkiRegisterRequest, CKDPInvitationDeclineRequest, CKDPRecordRetrieveRequest, CKDPGetLikesRequest, CKDPMescalSignatureRequest, CKDPPromoteContainerSchemaRequest, CKDPGetCommentRequest, CKDPTokenRegistrationRequest, CKDPUserQueryRequest, CKDPDeleteCommentRequest, CKDPRecordSaveRequest, CKDPNotificationMarkReadRequest, CKDPOperation, CKDPTokenUnregistrationRequest, CKDPZoneRetrieveRequest, CKDPShareParticipantUpdateRequest, CKDPShareSetKeyRequest, CKDPInvitationQueryRequest;

@interface CKDPRequestOperation : PBCodable <NSCopying> {
    CKDPAssetUploadTokenRetrieveRequest *_assetUploadTokenRetrieveRequest;
    CKDPDeleteCommentRequest *_deleteCommentRequest;
    CKDPDeleteContainerRequest *_deleteContainerRequest;
    CKDPGetCommentRequest *_getCommentRequest;
    CKDPGetCommentsRequest *_getCommentsRequest;
    CKDPGetLikesRequest *_getLikesRequest;
    CKDPRequestOperationHeader *_header;
    CKDPInvitationAcceptRequest *_invitationAcceptRequest;
    CKDPInvitationDeclineRequest *_invitationDeclineRequest;
    CKDPInvitationQueryRequest *_invitationQueryRequest;
    CKDPLikeRequest *_likeRequest;
    CKDPMescalCertificateRequest *_mescalCertificateRequest;
    CKDPMescalSessionInfoRequest *_mescalSessionInfoRequest;
    CKDPMescalSignatureRequest *_mescalSignatureRequest;
    CKDPNotificationMarkReadRequest *_notificationMarkReadRequest;
    CKDPNotificationSyncRequest *_notificationSyncRequest;
    CKDPPkiRegisterRequest *_pkiRegisterRequest;
    CKDPPkiRetrieveRequest *_pkiRetrieveRequest;
    CKDPPostCommentRequest *_postCommentRequest;
    CKDPPromoteContainerSchemaRequest *_promoteContainerSchemaRequest;
    CKDPPulseRequest *_pulseRequest;
    CKDPQueryRetrieveRequest *_queryRetrieveRequest;
    CKDPRecordDeleteRequest *_recordDeleteRequest;
    CKDPRecordRetrieveChangesRequest *_recordRetrieveChangesRequest;
    CKDPRecordRetrieveRequest *_recordRetrieveRequest;
    CKDPRecordRetrieveVersionsRequest *_recordRetrieveVersionsRequest;
    CKDPRecordSaveRequest *_recordSaveRequest;
    CKDPOperation *_request;
    CKDPResetContainerRequest *_resetContainerRequest;
    CKDPSetBadgeCountRequest *_setBadgeCountRequest;
    CKDPShareCreateRequest *_shareCreateRequest;
    CKDPShareDeleteRequest *_shareDeleteRequest;
    CKDPShareParticipantCreateRequest *_shareParticipantCreateRequest;
    CKDPShareParticipantDeleteRequest *_shareParticipantDeleteRequest;
    CKDPShareParticipantUpdateRequest *_shareParticipantUpdateRequest;
    CKDPShareRetrieveRequest *_shareRetrieveRequest;
    CKDPShareSetKeyRequest *_shareSetKeyRequest;
    CKDPSubscriptionCreateRequest *_subscriptionCreateRequest;
    CKDPSubscriptionDeleteRequest *_subscriptionDeleteRequest;
    CKDPSubscriptionRetrieveRequest *_subscriptionRetrieveRequest;
    CKDPTokenRegistrationRequest *_tokenRegistrationRequest;
    CKDPTokenUnregistrationRequest *_tokenUnregistrationRequest;
    CKDPUnlikeRequest *_unlikeRequest;
    CKDPUserAvailableQuotaRequest *_userAvailableQuotaRequest;
    CKDPUserPrivacySettingsBatchLookupRequest *_userPrivacySettingsBatchLookupRequest;
    CKDPUserPrivacySettingsResetRequest *_userPrivacySettingsResetRequest;
    CKDPUserPrivacySettingsRetrieveRequest *_userPrivacySettingsRetrieveRequest;
    CKDPUserPrivacySettingsUpdateRequest *_userPrivacySettingsUpdateRequest;
    CKDPUserQueryRequest *_userQueryRequest;
    CKDPUserRetrieveRequest *_userRetrieveRequest;
    CKDPZoneDeleteRequest *_zoneDeleteRequest;
    CKDPZoneRetrieveRequest *_zoneRetrieveRequest;
    CKDPZoneSaveRequest *_zoneSaveRequest;
}

@property(readonly) bool hasZoneSaveRequest;
@property(retain) CKDPZoneSaveRequest * zoneSaveRequest;
@property(readonly) bool hasZoneRetrieveRequest;
@property(retain) CKDPZoneRetrieveRequest * zoneRetrieveRequest;
@property(readonly) bool hasZoneDeleteRequest;
@property(retain) CKDPZoneDeleteRequest * zoneDeleteRequest;
@property(readonly) bool hasRecordSaveRequest;
@property(retain) CKDPRecordSaveRequest * recordSaveRequest;
@property(readonly) bool hasRecordRetrieveRequest;
@property(retain) CKDPRecordRetrieveRequest * recordRetrieveRequest;
@property(readonly) bool hasRecordRetrieveVersionsRequest;
@property(retain) CKDPRecordRetrieveVersionsRequest * recordRetrieveVersionsRequest;
@property(readonly) bool hasRecordRetrieveChangesRequest;
@property(retain) CKDPRecordRetrieveChangesRequest * recordRetrieveChangesRequest;
@property(readonly) bool hasRecordDeleteRequest;
@property(retain) CKDPRecordDeleteRequest * recordDeleteRequest;
@property(readonly) bool hasUserAvailableQuotaRequest;
@property(retain) CKDPUserAvailableQuotaRequest * userAvailableQuotaRequest;
@property(readonly) bool hasUserRetrieveRequest;
@property(retain) CKDPUserRetrieveRequest * userRetrieveRequest;
@property(readonly) bool hasQueryRetrieveRequest;
@property(retain) CKDPQueryRetrieveRequest * queryRetrieveRequest;
@property(readonly) bool hasAssetUploadTokenRetrieveRequest;
@property(retain) CKDPAssetUploadTokenRetrieveRequest * assetUploadTokenRetrieveRequest;
@property(readonly) bool hasDeleteContainerRequest;
@property(retain) CKDPDeleteContainerRequest * deleteContainerRequest;
@property(readonly) bool hasResetContainerRequest;
@property(retain) CKDPResetContainerRequest * resetContainerRequest;
@property(readonly) bool hasPromoteContainerSchemaRequest;
@property(retain) CKDPPromoteContainerSchemaRequest * promoteContainerSchemaRequest;
@property(readonly) bool hasPostCommentRequest;
@property(retain) CKDPPostCommentRequest * postCommentRequest;
@property(readonly) bool hasGetCommentsRequest;
@property(retain) CKDPGetCommentsRequest * getCommentsRequest;
@property(readonly) bool hasGetCommentRequest;
@property(retain) CKDPGetCommentRequest * getCommentRequest;
@property(readonly) bool hasDeleteCommentRequest;
@property(retain) CKDPDeleteCommentRequest * deleteCommentRequest;
@property(readonly) bool hasLikeRequest;
@property(retain) CKDPLikeRequest * likeRequest;
@property(readonly) bool hasUnlikeRequest;
@property(retain) CKDPUnlikeRequest * unlikeRequest;
@property(readonly) bool hasGetLikesRequest;
@property(retain) CKDPGetLikesRequest * getLikesRequest;
@property(readonly) bool hasPulseRequest;
@property(retain) CKDPPulseRequest * pulseRequest;
@property(readonly) bool hasShareCreateRequest;
@property(retain) CKDPShareCreateRequest * shareCreateRequest;
@property(readonly) bool hasShareRetrieveRequest;
@property(retain) CKDPShareRetrieveRequest * shareRetrieveRequest;
@property(readonly) bool hasShareDeleteRequest;
@property(retain) CKDPShareDeleteRequest * shareDeleteRequest;
@property(readonly) bool hasShareSetKeyRequest;
@property(retain) CKDPShareSetKeyRequest * shareSetKeyRequest;
@property(readonly) bool hasShareParticipantCreateRequest;
@property(retain) CKDPShareParticipantCreateRequest * shareParticipantCreateRequest;
@property(readonly) bool hasShareParticipantUpdateRequest;
@property(retain) CKDPShareParticipantUpdateRequest * shareParticipantUpdateRequest;
@property(readonly) bool hasShareParticipantDeleteRequest;
@property(retain) CKDPShareParticipantDeleteRequest * shareParticipantDeleteRequest;
@property(readonly) bool hasInvitationAcceptRequest;
@property(retain) CKDPInvitationAcceptRequest * invitationAcceptRequest;
@property(readonly) bool hasInvitationDeclineRequest;
@property(retain) CKDPInvitationDeclineRequest * invitationDeclineRequest;
@property(readonly) bool hasInvitationQueryRequest;
@property(retain) CKDPInvitationQueryRequest * invitationQueryRequest;
@property(readonly) bool hasSubscriptionCreateRequest;
@property(retain) CKDPSubscriptionCreateRequest * subscriptionCreateRequest;
@property(readonly) bool hasSubscriptionRetrieveRequest;
@property(retain) CKDPSubscriptionRetrieveRequest * subscriptionRetrieveRequest;
@property(readonly) bool hasSubscriptionDeleteRequest;
@property(retain) CKDPSubscriptionDeleteRequest * subscriptionDeleteRequest;
@property(readonly) bool hasUserQueryRequest;
@property(retain) CKDPUserQueryRequest * userQueryRequest;
@property(readonly) bool hasUserPrivacySettingsUpdateRequest;
@property(retain) CKDPUserPrivacySettingsUpdateRequest * userPrivacySettingsUpdateRequest;
@property(readonly) bool hasUserPrivacySettingsResetRequest;
@property(retain) CKDPUserPrivacySettingsResetRequest * userPrivacySettingsResetRequest;
@property(readonly) bool hasUserPrivacySettingsBatchLookupRequest;
@property(retain) CKDPUserPrivacySettingsBatchLookupRequest * userPrivacySettingsBatchLookupRequest;
@property(readonly) bool hasUserPrivacySettingsRetrieveRequest;
@property(retain) CKDPUserPrivacySettingsRetrieveRequest * userPrivacySettingsRetrieveRequest;
@property(readonly) bool hasTokenRegistrationRequest;
@property(retain) CKDPTokenRegistrationRequest * tokenRegistrationRequest;
@property(readonly) bool hasTokenUnregistrationRequest;
@property(retain) CKDPTokenUnregistrationRequest * tokenUnregistrationRequest;
@property(readonly) bool hasSetBadgeCountRequest;
@property(retain) CKDPSetBadgeCountRequest * setBadgeCountRequest;
@property(readonly) bool hasNotificationSyncRequest;
@property(retain) CKDPNotificationSyncRequest * notificationSyncRequest;
@property(readonly) bool hasNotificationMarkReadRequest;
@property(retain) CKDPNotificationMarkReadRequest * notificationMarkReadRequest;
@property(readonly) bool hasPkiRegisterRequest;
@property(retain) CKDPPkiRegisterRequest * pkiRegisterRequest;
@property(readonly) bool hasPkiRetrieveRequest;
@property(retain) CKDPPkiRetrieveRequest * pkiRetrieveRequest;
@property(readonly) bool hasMescalSignatureRequest;
@property(retain) CKDPMescalSignatureRequest * mescalSignatureRequest;
@property(readonly) bool hasMescalSessionInfoRequest;
@property(retain) CKDPMescalSessionInfoRequest * mescalSessionInfoRequest;
@property(readonly) bool hasMescalCertificateRequest;
@property(retain) CKDPMescalCertificateRequest * mescalCertificateRequest;
@property(readonly) bool hasHeader;
@property(retain) CKDPRequestOperationHeader * header;
@property(readonly) bool hasRequest;
@property(retain) CKDPOperation * request;


- (id)mescalCertificateRequest;
- (bool)hasMescalCertificateRequest;
- (id)mescalSessionInfoRequest;
- (bool)hasMescalSessionInfoRequest;
- (id)pkiRetrieveRequest;
- (bool)hasPkiRetrieveRequest;
- (id)pkiRegisterRequest;
- (bool)hasPkiRegisterRequest;
- (id)notificationMarkReadRequest;
- (bool)hasNotificationMarkReadRequest;
- (id)notificationSyncRequest;
- (bool)hasNotificationSyncRequest;
- (id)setBadgeCountRequest;
- (bool)hasSetBadgeCountRequest;
- (id)tokenUnregistrationRequest;
- (bool)hasTokenUnregistrationRequest;
- (id)tokenRegistrationRequest;
- (bool)hasTokenRegistrationRequest;
- (id)userPrivacySettingsRetrieveRequest;
- (bool)hasUserPrivacySettingsRetrieveRequest;
- (id)userPrivacySettingsBatchLookupRequest;
- (bool)hasUserPrivacySettingsBatchLookupRequest;
- (id)userPrivacySettingsResetRequest;
- (bool)hasUserPrivacySettingsResetRequest;
- (id)userPrivacySettingsUpdateRequest;
- (bool)hasUserPrivacySettingsUpdateRequest;
- (id)userQueryRequest;
- (bool)hasUserQueryRequest;
- (id)subscriptionDeleteRequest;
- (bool)hasSubscriptionDeleteRequest;
- (id)subscriptionRetrieveRequest;
- (bool)hasSubscriptionRetrieveRequest;
- (id)subscriptionCreateRequest;
- (bool)hasSubscriptionCreateRequest;
- (id)invitationQueryRequest;
- (bool)hasInvitationQueryRequest;
- (id)invitationDeclineRequest;
- (bool)hasInvitationDeclineRequest;
- (id)invitationAcceptRequest;
- (bool)hasInvitationAcceptRequest;
- (id)shareParticipantDeleteRequest;
- (bool)hasShareParticipantDeleteRequest;
- (id)shareParticipantUpdateRequest;
- (bool)hasShareParticipantUpdateRequest;
- (id)shareParticipantCreateRequest;
- (bool)hasShareParticipantCreateRequest;
- (id)shareSetKeyRequest;
- (bool)hasShareSetKeyRequest;
- (id)shareDeleteRequest;
- (bool)hasShareDeleteRequest;
- (bool)hasShareRetrieveRequest;
- (id)shareCreateRequest;
- (bool)hasShareCreateRequest;
- (id)pulseRequest;
- (bool)hasPulseRequest;
- (id)getLikesRequest;
- (bool)hasGetLikesRequest;
- (id)unlikeRequest;
- (bool)hasUnlikeRequest;
- (id)likeRequest;
- (bool)hasLikeRequest;
- (id)deleteCommentRequest;
- (bool)hasDeleteCommentRequest;
- (id)getCommentRequest;
- (bool)hasGetCommentRequest;
- (id)getCommentsRequest;
- (bool)hasGetCommentsRequest;
- (id)postCommentRequest;
- (bool)hasPostCommentRequest;
- (id)promoteContainerSchemaRequest;
- (bool)hasPromoteContainerSchemaRequest;
- (id)resetContainerRequest;
- (bool)hasResetContainerRequest;
- (id)deleteContainerRequest;
- (bool)hasDeleteContainerRequest;
- (id)assetUploadTokenRetrieveRequest;
- (bool)hasAssetUploadTokenRetrieveRequest;
- (bool)hasQueryRetrieveRequest;
- (id)userRetrieveRequest;
- (bool)hasUserRetrieveRequest;
- (id)userAvailableQuotaRequest;
- (bool)hasUserAvailableQuotaRequest;
- (id)recordDeleteRequest;
- (bool)hasRecordDeleteRequest;
- (id)recordRetrieveChangesRequest;
- (bool)hasRecordRetrieveChangesRequest;
- (id)recordRetrieveVersionsRequest;
- (bool)hasRecordRetrieveVersionsRequest;
- (id)recordRetrieveRequest;
- (bool)hasRecordRetrieveRequest;
- (id)recordSaveRequest;
- (bool)hasRecordSaveRequest;
- (id)zoneDeleteRequest;
- (bool)hasZoneDeleteRequest;
- (id)zoneRetrieveRequest;
- (bool)hasZoneRetrieveRequest;
- (id)zoneSaveRequest;
- (bool)hasZoneSaveRequest;
- (bool)hasHeader;
- (void)setMescalCertificateRequest:(id)arg1;
- (void)setMescalSessionInfoRequest:(id)arg1;
- (void)setPkiRetrieveRequest:(id)arg1;
- (void)setPkiRegisterRequest:(id)arg1;
- (void)setNotificationMarkReadRequest:(id)arg1;
- (void)setNotificationSyncRequest:(id)arg1;
- (void)setSetBadgeCountRequest:(id)arg1;
- (void)setTokenUnregistrationRequest:(id)arg1;
- (void)setTokenRegistrationRequest:(id)arg1;
- (void)setGetCommentRequest:(id)arg1;
- (void)setGetLikesRequest:(id)arg1;
- (void)setUnlikeRequest:(id)arg1;
- (void)setLikeRequest:(id)arg1;
- (void)setDeleteCommentRequest:(id)arg1;
- (void)setGetCommentsRequest:(id)arg1;
- (void)setPostCommentRequest:(id)arg1;
- (void)setInvitationQueryRequest:(id)arg1;
- (void)setInvitationDeclineRequest:(id)arg1;
- (void)setInvitationAcceptRequest:(id)arg1;
- (void)setShareParticipantDeleteRequest:(id)arg1;
- (void)setShareParticipantUpdateRequest:(id)arg1;
- (void)setShareParticipantCreateRequest:(id)arg1;
- (void)setShareSetKeyRequest:(id)arg1;
- (void)setShareDeleteRequest:(id)arg1;
- (void)setShareCreateRequest:(id)arg1;
- (void)setUserPrivacySettingsBatchLookupRequest:(id)arg1;
- (void)setUserPrivacySettingsResetRequest:(id)arg1;
- (void)setUserPrivacySettingsUpdateRequest:(id)arg1;
- (void)setUserPrivacySettingsRetrieveRequest:(id)arg1;
- (void)setUserQueryRequest:(id)arg1;
- (void)setUserRetrieveRequest:(id)arg1;
- (void)setSubscriptionDeleteRequest:(id)arg1;
- (void)setSubscriptionRetrieveRequest:(id)arg1;
- (void)setSubscriptionCreateRequest:(id)arg1;
- (void)setUserAvailableQuotaRequest:(id)arg1;
- (void)setPromoteContainerSchemaRequest:(id)arg1;
- (void)setResetContainerRequest:(id)arg1;
- (void)setDeleteContainerRequest:(id)arg1;
- (void)setAssetUploadTokenRetrieveRequest:(id)arg1;
- (void)setRecordDeleteRequest:(id)arg1;
- (void)setRecordRetrieveChangesRequest:(id)arg1;
- (void)setRecordRetrieveVersionsRequest:(id)arg1;
- (void)setRecordRetrieveRequest:(id)arg1;
- (void)setRecordSaveRequest:(id)arg1;
- (void)setZoneDeleteRequest:(id)arg1;
- (void)setZoneRetrieveRequest:(id)arg1;
- (void)setZoneSaveRequest:(id)arg1;
- (bool)hasMescalSignatureRequest;
- (void)setPulseRequest:(id)arg1;
- (id)shareRetrieveRequest;
- (void)setShareRetrieveRequest:(id)arg1;
- (id)queryRetrieveRequest;
- (void)setQueryRetrieveRequest:(id)arg1;
- (id)mescalSignatureRequest;
- (void)setMescalSignatureRequest:(id)arg1;
- (void)setHeader:(id)arg1;
- (bool)hasRequest;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setRequest:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)request;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)header;

@end
