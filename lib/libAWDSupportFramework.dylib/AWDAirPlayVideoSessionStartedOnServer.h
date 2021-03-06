/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDAirPlayVideoSessionStartedOnServer : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _audioOnly;
    unsigned int _clientAuthMs;
    unsigned int _clientBonjourMs;
    unsigned int _clientConnectMs;
    unsigned int _clientInfoMs;
    NSString *_clientModel;
    unsigned int _clientPostAuthMs;
    unsigned int _clientSecureConnectionMs;
    NSString *_clientVersion;
    NSString *_sessionUUID;
    int _status;
    unsigned int _transportType;
    unsigned int _type;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int audioOnly : 1; 
        unsigned int clientAuthMs : 1; 
        unsigned int clientBonjourMs : 1; 
        unsigned int clientConnectMs : 1; 
        unsigned int clientInfoMs : 1; 
        unsigned int clientPostAuthMs : 1; 
        unsigned int clientSecureConnectionMs : 1; 
        unsigned int status : 1; 
        unsigned int transportType : 1; 
        unsigned int type : 1; 
    } _has;
}

@property(readonly) bool hasSessionUUID;
@property(retain) NSString * sessionUUID;
@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasStatus;
@property int status;
@property bool hasTransportType;
@property unsigned int transportType;
@property bool hasType;
@property unsigned int type;
@property(readonly) bool hasClientModel;
@property(retain) NSString * clientModel;
@property(readonly) bool hasClientVersion;
@property(retain) NSString * clientVersion;
@property bool hasAudioOnly;
@property unsigned int audioOnly;
@property bool hasClientBonjourMs;
@property unsigned int clientBonjourMs;
@property bool hasClientConnectMs;
@property unsigned int clientConnectMs;
@property bool hasClientInfoMs;
@property unsigned int clientInfoMs;
@property bool hasClientSecureConnectionMs;
@property unsigned int clientSecureConnectionMs;
@property bool hasClientAuthMs;
@property unsigned int clientAuthMs;
@property bool hasClientPostAuthMs;
@property unsigned int clientPostAuthMs;


- (bool)hasStatus;
- (unsigned int)clientPostAuthMs;
- (unsigned int)clientSecureConnectionMs;
- (unsigned int)clientInfoMs;
- (bool)hasClientPostAuthMs;
- (void)setHasClientPostAuthMs:(bool)arg1;
- (void)setClientPostAuthMs:(unsigned int)arg1;
- (bool)hasClientSecureConnectionMs;
- (void)setHasClientSecureConnectionMs:(bool)arg1;
- (void)setClientSecureConnectionMs:(unsigned int)arg1;
- (bool)hasClientInfoMs;
- (void)setHasClientInfoMs:(bool)arg1;
- (void)setClientInfoMs:(unsigned int)arg1;
- (unsigned int)audioOnly;
- (bool)hasAudioOnly;
- (void)setHasAudioOnly:(bool)arg1;
- (void)setAudioOnly:(unsigned int)arg1;
- (unsigned int)clientAuthMs;
- (unsigned int)clientConnectMs;
- (unsigned int)clientBonjourMs;
- (id)clientModel;
- (bool)hasClientAuthMs;
- (void)setHasClientAuthMs:(bool)arg1;
- (void)setClientAuthMs:(unsigned int)arg1;
- (bool)hasClientConnectMs;
- (void)setHasClientConnectMs:(bool)arg1;
- (void)setClientConnectMs:(unsigned int)arg1;
- (bool)hasClientBonjourMs;
- (void)setHasClientBonjourMs:(bool)arg1;
- (void)setClientBonjourMs:(unsigned int)arg1;
- (bool)hasClientVersion;
- (bool)hasClientModel;
- (void)setClientVersion:(id)arg1;
- (void)setClientModel:(id)arg1;
- (id)sessionUUID;
- (bool)hasSessionUUID;
- (void)setSessionUUID:(id)arg1;
- (id)clientVersion;
- (void)setHasStatus:(bool)arg1;
- (void)setHasTransportType:(bool)arg1;
- (bool)hasTimestamp;
- (void)setHasTimestamp:(bool)arg1;
- (bool)hasTransportType;
- (void)setTransportType:(unsigned int)arg1;
- (unsigned int)transportType;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setHasType:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)hasType;
- (unsigned long long)timestamp;
- (void)setStatus:(int)arg1;
- (int)status;
- (void)setTimestamp:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setType:(unsigned int)arg1;
- (unsigned int)type;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
