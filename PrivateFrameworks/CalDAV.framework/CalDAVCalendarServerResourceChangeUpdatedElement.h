/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class CoreDAVItem, NSMutableSet;

@interface CalDAVCalendarServerResourceChangeUpdatedElement : CalDAVCalendarServerResourceChangeElement  {
    bool_content;
    CoreDAVItem *_prop;
    NSMutableSet *_calendarChanges;
}

@property bool content;
@property(retain) CoreDAVItem * prop;
@property(retain) NSMutableSet * calendarChanges;


- (void)addCalendarChange:(id)arg1;
- (void)addContentItem:(id)arg1;
- (void)setCalendarChanges:(id)arg1;
- (id)calendarChanges;
- (void)setProp:(id)arg1;
- (id)prop;
- (id)copyParseRules;
- (void)setContent:(bool)arg1;
- (bool)content;
- (id)init;
- (void)dealloc;

@end
