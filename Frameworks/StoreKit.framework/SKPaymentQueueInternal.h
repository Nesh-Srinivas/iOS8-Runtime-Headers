/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@class SKXPCConnection, NSMutableArray, SKPaymentQueueClient;

@interface SKPaymentQueueInternal : NSObject  {
    bool_checkedIn;
    SKPaymentQueueClient *_client;
    bool_isRefreshing;
    NSMutableArray *_localTransactions;
    struct __CFArray { } *_observers;
    SKXPCConnection *_requestConnection;
    SKXPCConnection *_responseConnection;
    bool_restoreFinishedDuringRefresh;
    bool_restoringCompletedTransactions;
    NSMutableArray *_transactions;
}


- (void)dealloc;

@end
