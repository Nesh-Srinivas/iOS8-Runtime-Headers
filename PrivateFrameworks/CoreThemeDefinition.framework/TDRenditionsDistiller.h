/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@class NSConditionLock, TDLogger, CoreThemeDocument, NSMutableArray;

@interface TDRenditionsDistiller : NSObject  {
    CoreThemeDocument *document;
    NSMutableArray *renditionInQueue;
    NSMutableArray *psiDataInfoOutQueue;
    NSConditionLock *inQueueLock;
    NSConditionLock *outQueueLock;
    boolshouldCompressCSIDataFlag;
    boolnoMoreCSIDataInfo;
    boolnoMoreRenditions;
    TDLogger *_logger;
}

@property(retain) TDLogger * logger;


- (void)_enqueueOnInQueueTheObject:(id)arg1;
- (void)_enqueueLastCSIDataInfoFlag;
- (void)_enqueueCSIDataInfo:(id)arg1;
- (void)_enqueueDistillingAbortedInfo;
- (id)_nextObjectFromInQueue;
- (void)_enqueueOnOutQueueTheObject:(id)arg1;
- (void)_enqueueOnQueue:(id)arg1 withQueueLock:(id)arg2 object:(id)arg3;
- (void)_distill:(id)arg1;
- (id)nextCSIDataInfoFromQueue;
- (void)enqueueLastRenditionFlag;
- (void)enqueueRenditionSpec:(id)arg1;
- (void)enqueueAbortFlag;
- (void)detachDistillationThread;
- (id)initWithDocument:(id)arg1 shouldCompressCSIDataFlag:(bool)arg2;
- (void)setLogger:(id)arg1;
- (id)logger;
- (void)dealloc;

@end
