/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSString, CKDPPublicKey;

@interface CKDPPkiRegisterRequest : PBRequest <NSCopying> {
    NSString *_currentKeyHash;
    CKDPPublicKey *_publicKey;
}

@property(readonly) bool hasCurrentKeyHash;
@property(retain) NSString * currentKeyHash;
@property(readonly) bool hasPublicKey;
@property(retain) CKDPPublicKey * publicKey;

+ (id)options;

- (id)currentKeyHash;
- (bool)hasCurrentKeyHash;
- (void)setCurrentKeyHash:(id)arg1;
- (id)publicKey;
- (bool)hasPublicKey;
- (void)setPublicKey:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
