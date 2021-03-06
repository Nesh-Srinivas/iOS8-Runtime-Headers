/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSObject<OS_dispatch_queue>, PLCloudPhotoLibraryManager, PLPhotoLibrary;

@interface PLCloudDownloadAgent : PLCloudScenarioProducer  {
    NSObject<OS_dispatch_queue> *_agentQueue;
    struct { 
        int retries; 
        int state; 
    } _walkStatus[4];
    PLPhotoLibrary *_localLibrary;
    PLCloudPhotoLibraryManager *_remoteLibrary;
}

@property(retain) PLPhotoLibrary * localLibrary;
@property(retain) PLCloudPhotoLibraryManager * remoteLibrary;


- (void)prefetchResources;
- (void)resetWalkStatus;
- (void)setRemoteLibrary:(id)arg1;
- (void)setLocalLibrary:(id)arg1;
- (void)metadataStable:(id)arg1;
- (void)appInForeground:(id)arg1;
- (void)metadataChanged:(id)arg1;
- (void)systemStarted:(id)arg1;
- (void)prefetchAllThumbnails;
- (void)prefetchLastWeeksOriginals;
- (void)prefetchLastWeeksFull;
- (void)cplResourcesForFetchRequest:(id)arg1 ofType:(unsigned long long)arg2 startingAtOffset:(unsigned long long)arg3 completionHandler:(id)arg4;
- (void)beginPopulatingResourcesOfType:(unsigned long long)arg1 withFetchRequest:(id)arg2 then:(id)arg3;
- (void)downloadResources:(id)arg1 withCompletionHandler:(id)arg2;
- (void)_beginPopulatingResourcesOfType:(unsigned long long)arg1 withFetchRequest:(id)arg2 startingAtOffset:(unsigned long long)arg3 then:(id)arg4;
- (int)typeToIndex:(unsigned long long)arg1;
- (unsigned long long)batchSize;
- (id)localLibrary;
- (id)remoteLibrary;
- (void)activate;
- (id)init;
- (void)dealloc;

@end
