/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIButton, ABRepeatingGradientSeparatorView, NSString;

@interface ABPropertyEditingCell : ABPropertyCell <ABPickerControllerDelegate> {
    double _labelWidth;
    UIButton *_labelButton;
    ABRepeatingGradientSeparatorView *_vseparator;
}

@property(readonly) UIButton * labelButton;
@property(retain) ABRepeatingGradientSeparatorView * vseparator;
@property(readonly) double leftValueMargin;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)keyPathsForValuesAffectingEffectiveLabelWidth;
+ (bool)wantsStandardConstraints;
+ (bool)wantsChevron;

- (void)setVseparator:(id)arg1;
- (double)effectiveLabelWidth;
- (double)leftValueMargin;
- (id)vseparator;
- (void)labelButtonClicked:(id)arg1;
- (id)valueString;
- (id)labelButton;
- (void)picker:(id)arg1 didPickItem:(id)arg2;
- (void)pickerDidCancel:(id)arg1;
- (void)updateWithPropertyItem:(id)arg1;
- (void)setValueTextAttributes:(id)arg1;
- (id)constantConstraints;
- (double)minCellHeight;
- (id)labelView;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
