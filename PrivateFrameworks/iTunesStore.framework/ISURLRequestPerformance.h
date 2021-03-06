/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSURLResponse;

@interface ISURLRequestPerformance : NSObject  {
    double _finishTime;
    double _receivedResponseTime;
    double _renderBeginTime;
    double _renderEndTime;
    double _startTime;
    NSURLResponse *_urlResponse;
}

@property double startTime;
@property(copy) NSURLResponse * URLResponse;
@property(readonly) double finishInterval;
@property(readonly) double receivedResponseInterval;
@property(readonly) double renderBeginInterval;
@property(readonly) double renderEndInterval;


- (double)renderBeginInterval;
- (void)setRenderBeginTime:(double)arg1;
- (double)renderEndInterval;
- (void)setRenderFinishTime:(double)arg1;
- (id)URLResponse;
- (double)receivedResponseInterval;
- (void)setURLResponse:(id)arg1;
- (void)setReceivedResponseTime:(double)arg1;
- (double)finishInterval;
- (void)setFinishTime:(double)arg1;
- (void)setStartTime:(double)arg1;
- (double)startTime;
- (void)dealloc;

@end
