/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKDRepairZonePCSOperation : CKDDatabaseOperation  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _zonePCSRepairProgressBlock;

    NSArray *_zoneIDs;
    NSMutableArray *_fetchedZones;
    NSMutableArray *_fixedZones;
    NSMutableDictionary *_pcsInfoByZoneID;
}

@property(copy) id zonePCSRepairProgressBlock;
@property(retain) NSArray * zoneIDs;
@property(retain) NSMutableArray * fetchedZones;
@property(retain) NSMutableArray * fixedZones;
@property(retain) NSMutableDictionary * pcsInfoByZoneID;


- (void)setFixedZones:(id)arg1;
- (void)setFetchedZones:(id)arg1;
- (id)_checkPCSDataForZone:(id)arg1;
- (id)fetchedZones;
- (id)zonePCSRepairProgressBlock;
- (id)fixedZones;
- (void)_uploadRepairedZones;
- (void)_checkZonePCS;
- (void)_fetchZones;
- (bool)makeStateTransition;
- (id)nameForState:(unsigned long long)arg1;
- (void)setZonePCSRepairProgressBlock:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)setPcsInfoByZoneID:(id)arg1;
- (id)pcsInfoByZoneID;
- (void)setZoneIDs:(id)arg1;
- (id)zoneIDs;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void).cxx_destruct;

@end
