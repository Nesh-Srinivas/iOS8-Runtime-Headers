/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKEffectPropertyTexGen : GLKEffectProperty  {
    int _mode;
    float *_plane;
    int _coord;
    int _modeLoc;
    int _planeLoc;
    int _eyePlaneByInvModelviewLoc;
    unsigned int _textureIndex;
    float *_eyePlaneByInvModelview;
    char *_modeNameString;
    char *_planeNameString;
}

@property int mode;
@property(readonly) int coord;
@property float* plane;
@property float* eyePlaneByInvModelview;
@property int modeLoc;
@property int planeLoc;
@property int eyePlaneByInvModelviewLoc;
@property char * modeNameString;
@property char * planeNameString;
@property unsigned int textureIndex;


- (unsigned int)textureIndex;
- (void)setEyePlaneByInvModelviewLoc:(int)arg1;
- (int)eyePlaneByInvModelviewLoc;
- (void)setPlaneLoc:(int)arg1;
- (int)planeLoc;
- (void)setEyePlaneByInvModelview:(float*)arg1;
- (float*)eyePlaneByInvModelview;
- (int)coord;
- (float*)plane;
- (void)setPlane:(float*)arg1;
- (id)initWithMode:(int)arg1 coord:(int)arg2;
- (char *)planeNameString;
- (char *)modeNameString;
- (void)setPlaneNameString:(char *)arg1;
- (void)setModeNameString:(char *)arg1;
- (void)setModeLoc:(int)arg1;
- (int)modeLoc;
- (void)setShaderBindings;
- (void)initializeMasks;
- (void)setTextureIndex:(unsigned int)arg1;
- (void)dirtyAllUniforms;
- (void)bind;
- (id)init;
- (void)setMode:(int)arg1;
- (void)dealloc;
- (int)mode;

@end
