/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSMutableArray;

@interface PLMutableCameraImportQueue : NSObject  {
    NSMutableArray *_items;
}


- (void)dequeueImportItem;
- (void)enqueueImportItem:(id)arg1;
- (id)currentItem;
- (id)init;
- (void)dealloc;
- (id)description;

@end
