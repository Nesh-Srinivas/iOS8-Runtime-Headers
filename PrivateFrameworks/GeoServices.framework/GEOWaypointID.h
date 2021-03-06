/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLatLng, GEOStructuredAddress, NSString;

@interface GEOWaypointID : PBCodable <NSCopying> {
    unsigned long long _muid;
    unsigned long long _resultProviderId;
    GEOStructuredAddress *_addressHint;
    GEOLatLng *_locationHint;
    NSString *_placeNameHint;
    struct { 
        unsigned int muid : 1; 
        unsigned int resultProviderId : 1; 
    } _has;
}

@property bool hasMuid;
@property unsigned long long muid;
@property bool hasResultProviderId;
@property unsigned long long resultProviderId;
@property(readonly) bool hasLocationHint;
@property(retain) GEOLatLng * locationHint;
@property(readonly) bool hasAddressHint;
@property(retain) GEOStructuredAddress * addressHint;
@property(readonly) bool hasPlaceNameHint;
@property(retain) NSString * placeNameHint;


- (id)placeNameHint;
- (id)addressHint;
- (id)locationHint;
- (bool)hasPlaceNameHint;
- (bool)hasAddressHint;
- (bool)hasLocationHint;
- (bool)hasMuid;
- (void)setHasMuid:(bool)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setPlaceNameHint:(id)arg1;
- (void)setAddressHint:(id)arg1;
- (void)setLocationHint:(id)arg1;
- (unsigned long long)resultProviderId;
- (bool)hasResultProviderId;
- (void)setHasResultProviderId:(bool)arg1;
- (void)setResultProviderId:(unsigned long long)arg1;
- (unsigned long long)muid;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
