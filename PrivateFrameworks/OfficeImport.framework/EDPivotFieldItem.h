/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDPivotFieldItem : NSObject  {
    boolmChildItems;
    boolmExpanded;
    boolmCalculatedMember;
    boolmMissed;
    boolmHidden;
    boolmDetailsHidden;
    int mType;
    unsigned long long mItemIndex;
}

+ (id)pivotFieldItem;

- (void)setItemIndex:(unsigned long long)arg1;
- (unsigned long long)itemIndex;
- (void)setDetailsHidden:(bool)arg1;
- (bool)detailsHidden;
- (void)setMissed:(bool)arg1;
- (void)setCalculatedMember:(bool)arg1;
- (bool)calculatedMember;
- (void)setChildItems:(bool)arg1;
- (bool)childItems;
- (bool)missed;
- (void)setHidden:(bool)arg1;
- (bool)hidden;
- (id)init;
- (void)setType:(int)arg1;
- (int)type;
- (bool)expanded;
- (void)setExpanded:(bool)arg1;

@end
