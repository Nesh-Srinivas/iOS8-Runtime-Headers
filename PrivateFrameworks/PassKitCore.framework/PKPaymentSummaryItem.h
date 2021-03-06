/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSString, NSDecimalNumber;

@interface PKPaymentSummaryItem : NSObject <NSCopying, NSSecureCoding> {
    NSString *_label;
    NSDecimalNumber *_amount;
}

@property(copy) NSString * label;
@property(copy) NSDecimalNumber * amount;

+ (id)summaryItemWithLabel:(id)arg1 amount:(id)arg2;
+ (bool)supportsSecureCoding;

- (bool)isEqualToPaymentSummaryItem:(id)arg1;
- (id)label;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)amount;
- (void)setAmount:(id)arg1;
- (void)setLabel:(id)arg1;

@end
