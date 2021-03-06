/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOPlaceResult;

@interface GEOBatchPlaceResult : PBCodable <NSCopying> {
    GEOPlaceResult *_placeResult;
    int _statusCode;
    struct { 
        unsigned int statusCode : 1; 
    } _has;
}

@property bool hasStatusCode;
@property int statusCode;
@property(readonly) bool hasPlaceResult;
@property(retain) GEOPlaceResult * placeResult;


- (void)setPlaceResult:(id)arg1;
- (bool)hasStatusCode;
- (void)setHasStatusCode:(bool)arg1;
- (void)setStatusCode:(int)arg1;
- (id)placeResult;
- (bool)hasPlaceResult;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (int)statusCode;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
