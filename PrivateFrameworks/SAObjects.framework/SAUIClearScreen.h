/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SAAceView;

@interface SAUIClearScreen : SABaseClientBoundCommand  {
}

@property(retain) SAAceView * initialView;

+ (id)clearScreenWithDictionary:(id)arg1 context:(id)arg2;
+ (id)clearScreen;

- (void)setInitialView:(id)arg1;
- (id)initialView;
- (bool)requiresResponse;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
