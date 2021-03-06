/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKTileKeyMap;

@interface VKTileKeyList : NSObject <NSFastEnumeration, NSCopying> {
    void *_head;
    void *_tail;
    VKTileKeyMap *_map;
    unsigned long long _count;
    unsigned long long _maxCount;
}


- (bool)isEqualToList:(id)arg1;
- (bool)removeKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)removeKeysMatchingPredicate:(id)arg1;
- (void)sort:(id)arg1;
- (id)listWithout:(id)arg1;
- (struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)firstKey;
- (id)copyWithMaxCapacity:(unsigned long long)arg1;
- (bool)addKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 lostKey:(struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (id)initWithMaxCapacity:(unsigned long long)arg1;
- (void)_addKeyToBack:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (unsigned long long)capacity;
- (id)init;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (bool)containsKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)addKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;

@end
