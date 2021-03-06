/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKPersistentCalendarItem, NSDate;

@interface EKPersistentExceptionDate : EKPersistentObject  {
}

@property(readonly) NSDate * date;
@property(retain) EKPersistentCalendarItem * owner;

+ (id)exceptionDateWithDate:(id)arg1;
+ (id)relations;

- (id)initWithExceptionDate:(id)arg1;
- (int)entityType;
- (id)owner;
- (void)setOwner:(id)arg1;
- (id)date;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
