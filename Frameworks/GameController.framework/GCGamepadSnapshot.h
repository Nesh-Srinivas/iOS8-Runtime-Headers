/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/GameController.framework/GameController
 */

@class NSData;

@interface GCGamepadSnapshot : GCGamepad  {
    NSData *snapshotData;
}

@property(copy) NSData * snapshotData;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)initWithSnapshotData:(id)arg1;
- (id)snapshotData;
- (id)initWithController:(id)arg1 snapshotData:(id)arg2;
- (void)setSnapshotData:(id)arg1;
- (id)init;
- (void).cxx_destruct;

@end
