/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSString, NSUUID;

@interface PKBeacon : NSObject <NSSecureCoding> {
    NSUUID *_proximityUUID;
    NSString *_name;
    NSString *_relevantText;
}

@property(retain) NSUUID * proximityUUID;
@property(retain) NSString * name;
@property(retain) NSString * relevantText;

+ (BOOL)supportsSecureCoding;

- (id)proximityUUIDAsString;
- (void)setProximityUUIDWithString:(id)arg1;
- (void)setProximityUUID:(id)arg1;
- (void)setRelevantText:(id)arg1;
- (id)relevantText;
- (id)proximityUUID;
- (id)name;
- (void)dealloc;
- (id)description;
- (void)setName:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end