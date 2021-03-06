/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/WebKit.framework/WebKit
 */

@class WebSelectionRect;

@interface WKTextSelectionRect : UITextSelectionRect  {
    WebSelectionRect *_webRect;
}

@property(retain) WebSelectionRect * webRect;

+ (id)textSelectionRectsWithWebRects:(id)arg1;

- (id)range;
- (bool)containsEnd;
- (long long)writingDirection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (bool)containsStart;
- (bool)isVertical;
- (void)dealloc;
- (id)initWithWebRect:(id)arg1;
- (void)setWebRect:(id)arg1;
- (id)webRect;

@end
