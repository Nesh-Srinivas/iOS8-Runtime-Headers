/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface OADOle : NSObject  {
    boolmIconic;
    NSString *mCLSID;
    NSString *mAnsiUserType;
    NSString *mAnsiClipboardFormatName;
    unsigned int mWinClipboardFormat;
    NSString *mMacClipboardFormat;
    NSString *mAnsiProgID;
    NSString *mUnicodeUserType;
    NSString *mUnicodeClipboardFormatName;
    NSString *mUnicodeProgID;
    id mObject;
}

+ (bool)isCLSIDSupported:(id)arg1;
+ (bool)isProgIDMathType:(id)arg1;
+ (bool)isProgIDChart:(id)arg1;

- (id)unicodeProgID;
- (id)unicodeClipboardFormatName;
- (id)unicodeUserType;
- (id)ansiProgID;
- (id)macClipboardFormat;
- (unsigned int)winClipboardFormat;
- (id)ansiClipboardFormatName;
- (id)ansiUserType;
- (void)setIconic:(bool)arg1;
- (bool)iconic;
- (void)setUnicodeProgID:(id)arg1;
- (void)setUnicodeClipboardFormatName:(id)arg1;
- (void)setUnicodeUserType:(id)arg1;
- (void)setAnsiProgID:(id)arg1;
- (void)setAnsiClipboardFormatName:(id)arg1;
- (void)setMacClipboardFormat:(id)arg1;
- (void)setWinClipboardFormat:(unsigned int)arg1;
- (void)setAnsiUserType:(id)arg1;
- (void)setCLSID:(id)arg1;
- (id)CLSID;
- (id)init;
- (void)setObject:(id)arg1;
- (id)object;
- (void)dealloc;
- (id)description;

@end
