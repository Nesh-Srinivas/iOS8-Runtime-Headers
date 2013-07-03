/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSAuditToken : NSObject <NSCopying, BKSXPCCoding> {
    struct { 
        unsigned int val[8]; 
    } _auditToken;
}

@property(readonly) struct { unsigned int x1[8]; } realToken;

+ (id)tokenFromAuditToken:(struct { unsigned int x1[8]; })arg1;
+ (id)tokenFromMachMessage:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; }*)arg1;
+ (id)tokenFromXPCMessage:(id)arg1;

- (id)bundleID;
- (struct { unsigned int x1[8]; })realToken;
- (id)_dataWithValue:(id)arg1;
- (id)_valueFromData:(id)arg1 ofType:(const char *)arg2;
- (id)initWithMachMessage:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; }*)arg1;
- (id)initWithXPCMessage:(id)arg1;
- (id)initWithAuditToken:(struct { unsigned int x1[8]; })arg1;
- (BOOL)hasEntitlement:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end