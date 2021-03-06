/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@class NSString;

@interface NEIPv6Settings : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {
    int _prefixLength;
    long long _configMethod;
    NSString *_router;
    NSString *_address;
}

@property long long configMethod;
@property(copy) NSString * router;
@property(copy) NSString * address;
@property int prefixLength;

+ (bool)supportsSecureCoding;

- (void)setPrefixLength:(int)arg1;
- (int)prefixLength;
- (void)setRouter:(id)arg1;
- (void)setConfigMethod:(long long)arg1;
- (id)router;
- (long long)configMethod;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)copyLegacyDictionary;
- (id)descriptionWithIndent:(int)arg1;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (void)setAddress:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)address;

@end
