/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSTimer, NSMutableSet, NSMutableArray;

@interface _UIViewServiceFencingController : NSObject  {
    int _lock;
    NSMutableSet *_pendingFenceSendRights;
    NSMutableArray *_resumeActions;
    unsigned long long _expectedParticipatingFencingProxyCount;
    NSTimer *_fencingControlTimeoutTimer;
}

+ (id)activeFencePort;

- (id)init;
- (void)dealloc;
- (void)_fencingControlTimedOut;
- (void)fencingControlProxy:(id)arg1 didEndFencingWithSendRight:(id)arg2;
- (void)fencingControlProxy:(id)arg1 didBeginFencingWithSendRight:(id)arg2 expectedParticipatingFencingProxyCount:(unsigned long long)arg3;

@end
