/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSData, NSMutableDictionary;

@interface PLPhotoBakedThumbnailsCollection : NSObject  {
    NSData *_data;
    NSMutableDictionary *_bakedThumbnails;
}

+ (void)setTesting:(bool)arg1;

- (void)setBakedThumbnails:(id)arg1 forFormat:(int)arg2;
- (id)bakedThumbnailsForFormat:(int)arg1;
- (id)availableFormats;
- (void)_parseDataWithContentsOfFile:(id)arg1;
- (void)saveToFile:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)init;
- (void)dealloc;

@end
