/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableArray, NSArray;

@interface SUItemValidator : NSObject  {
    NSMutableArray *_collectionTests;
    NSMutableArray *_itemTests;
}

@property(readonly) NSArray * validationTests;


- (id)validationTests;
- (BOOL)validateItems:(id)arg1 error:(id*)arg2;
- (void)removeValidationTest:(id)arg1;
- (void)addItemValidationTests:(id)arg1;
- (void)addCollectionValidationTests:(id)arg1;
- (BOOL)validateItems:(id)arg1 offers:(id)arg2 error:(id*)arg3;
- (void)dealloc;

@end