/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@class NSDictionary, NSURL;

@interface SKStorePageRequest : NSObject  {
    long long _pageStyle;
    NSDictionary *_productParameters;
    NSURL *_productURL;
}

@property long long productPageStyle;
@property(copy) NSDictionary * productParameters;
@property(copy) NSURL * productURL;


- (id)productURL;
- (void)setProductURL:(id)arg1;
- (void)setProductParameters:(id)arg1;
- (id)productParameters;
- (long long)productPageStyle;
- (void)setProductPageStyle:(long long)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)dealloc;

@end
