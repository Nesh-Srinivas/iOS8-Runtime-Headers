/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPattern : NSObject  {
    struct CGImage { } *_patternImage;
    struct CGPattern { } *_pattern;
    double _alpha;
}

@property double alpha;


- (struct CGImage { }*)patternImageRef;
- (void)setPatternInContext:(struct CGContext { }*)arg1;
- (id)initWithImageRef:(struct CGImage { }*)arg1;
- (struct CGPattern { }*)_newPattern;
- (double)alpha;
- (void)dealloc;
- (id)description;
- (struct CGPattern { }*)pattern;
- (void)setAlpha:(double)arg1;

@end
