/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSMutableString, NSMutableArray, UIButton;

@interface UIPasscodeField : UIView <UITextFieldDelegate> {
    NSMutableString *_value;
    NSMutableArray *_entryFields;
    NSMutableArray *_entryBackgrounds;
    UIButton *_okButton;
    bool_opaqueBackground;
    bool_centerHorizontally;
    long long _keyboardType;
    long long _keyboardAppearance;
    int _emptyContentReturnKeyType;
    id _delegate;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (Class)textFieldClass;
+ (double)defaultHeight;

- (void)setStringValue:(id)arg1;
- (bool)becomeFirstResponder;
- (void)setKeyboardType:(long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (id)stringValue;
- (void)appendString:(id)arg1;
- (void)dealloc;
- (void)textFieldDidResignFirstResponder:(id)arg1;
- (bool)textFieldShouldStartEditing:(id)arg1;
- (bool)textField:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setNumberOfEntryFields:(int)arg1;
- (int)numberOfEntryFields;
- (void)deleteLastCharacter;
- (void)setShowsOKButton:(bool)arg1;
- (bool)showsOKButton;
- (void)_textDidChange;
- (void)setTextCentersHorizontally:(bool)arg1;
- (void)_updateFields;
- (void)setNumberOfEntryFields:(int)arg1 opaqueBackground:(bool)arg2;
- (void)okButtonClicked:(id)arg1;
- (void)setKeyboardType:(long long)arg1 appearance:(long long)arg2 emptyContentReturnKeyType:(int)arg3;
- (void)setKeyboardType:(long long)arg1 appearance:(long long)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (bool)canBecomeFirstResponder;
- (bool)isFirstResponder;

@end
