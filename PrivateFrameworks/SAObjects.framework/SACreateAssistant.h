/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSData, NSString;

@interface SACreateAssistant : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSData * activationToken;
@property(copy) NSString * connectionMode;
@property(copy) NSString * connectionType;
@property(copy) NSString * language;
@property(copy) NSString * speechId;
@property(copy) NSData * validationData;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)createAssistantWithDictionary:(id)arg1 context:(id)arg2;
+ (id)createAssistant;

- (void)setConnectionType:(id)arg1;
- (void)setValidationData:(id)arg1;
- (id)validationData;
- (void)setConnectionMode:(id)arg1;
- (id)connectionMode;
- (void)setSpeechId:(id)arg1;
- (id)speechId;
- (void)setActivationToken:(id)arg1;
- (id)activationToken;
- (id)encodedClassName;
- (id)connectionType;
- (void)setLanguage:(id)arg1;
- (id)language;
- (id)groupIdentifier;

@end
