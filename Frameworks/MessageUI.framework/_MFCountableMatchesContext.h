/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSMutableSet;

@interface _MFCountableMatchesContext : NSObject  {
    struct __CFDictionary { } *_peopleCount;
    NSMutableSet *_popularPeople;
    long long _maxCount;
}

@property long long maxCount;


- (id)highestMatches;
- (void)countInstances:(id)arg1 usingPredicate:(id)arg2;
- (void)setMaxCount:(long long)arg1;
- (long long)maxCount;
- (id)init;
- (void)dealloc;

@end
