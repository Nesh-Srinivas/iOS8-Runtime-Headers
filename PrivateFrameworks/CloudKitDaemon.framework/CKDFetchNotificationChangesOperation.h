/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CKServerChangeToken;

@interface CKDFetchNotificationChangesOperation : CKDOperation  {
    bool_moreComing;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _notificationChangedBlock;

    CKServerChangeToken *_previousServerChangeToken;
    unsigned long long _resultsLimit;
    CKServerChangeToken *_resultServerChangeToken;
}

@property(copy) id notificationChangedBlock;
@property(retain) CKServerChangeToken * previousServerChangeToken;
@property unsigned long long resultsLimit;
@property(retain) CKServerChangeToken * resultServerChangeToken;
@property bool moreComing;


- (void)_handleFetchChangesRequestFinished:(id)arg1;
- (void)setMoreComing:(bool)arg1;
- (void)fillOutOperationResult:(id)arg1;
- (Class)operationResultClass;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (bool)moreComing;
- (void)setNotificationChangedBlock:(id)arg1;
- (id)resultServerChangeToken;
- (void)setResultServerChangeToken:(id)arg1;
- (id)notificationChangedBlock;
- (void)setPreviousServerChangeToken:(id)arg1;
- (id)previousServerChangeToken;
- (void)setResultsLimit:(unsigned long long)arg1;
- (unsigned long long)resultsLimit;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void).cxx_destruct;

@end
