/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class NSString, NSObject<OS_dispatch_io>, NSObject<OS_dispatch_queue>;

@interface __NSCFLocalDownloadFile : NSObject  {
    struct stat { 
        int st_dev; 
        unsigned short st_mode; 
        unsigned short st_nlink; 
        unsigned long long st_ino; 
        unsigned int st_uid; 
        unsigned int st_gid; 
        int st_rdev; 
        struct timespec { 
            int tv_sec; 
            long tv_nsec; 
        } st_atimespec; 
        struct timespec { 
            int tv_sec; 
            long tv_nsec; 
        } st_mtimespec; 
        struct timespec { 
            int tv_sec; 
            long tv_nsec; 
        } st_ctimespec; 
        struct timespec { 
            int tv_sec; 
            long tv_nsec; 
        } st_birthtimespec; 
        long long st_size; 
        long long st_blocks; 
        int st_blksize; 
        unsigned int st_flags; 
        unsigned int st_gen; 
        int st_lspare; 
        long long st_qspare[2]; 
    } _stat;
    bool_finished;
    BOOL _skipUnlink;
    NSObject<OS_dispatch_io> *_writeIO;
    NSObject<OS_dispatch_queue> *_workQueue;
    int _fd;
    NSString *_path;
}

@property(retain) NSObject<OS_dispatch_io> * writeIO;
@property(retain) NSObject<OS_dispatch_queue> * workQueue;
@property int fd;
@property bool finished;
@property(retain) NSString * path;
@property BOOL skipUnlink;


- (void)dealloc;
- (id).cxx_construct;
- (BOOL)skipUnlink;
- (void)setFd:(int)arg1;
- (id)writeIO;
- (int)fd;
- (void)setPath:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)setWriteIO:(id)arg1;
- (id)initQueues;
- (void)setFinished:(bool)arg1;
- (bool)finished;
- (id)path;
- (void)finishOnQueue:(id)arg1 completion:(id)arg2;
- (id)fileURL;
- (void)captureFile:(id*)arg1 outStat:(struct stat { int x1; unsigned short x2; unsigned short x3; unsigned long long x4; unsigned int x5; unsigned int x6; int x7; struct timespec { int x_8_1_1; long x_8_1_2; } x8; struct timespec { int x_9_1_1; long x_9_1_2; } x9; struct timespec { int x_10_1_1; long x_10_1_2; } x10; struct timespec { int x_11_1_1; long x_11_1_2; } x11; long long x12; long long x13; int x14; unsigned int x15; unsigned int x16; int x17; long long x18[2]; }*)arg2;
- (void)writeBytes:(id)arg1 completionQueue:(id)arg2 completion:(id)arg3;
- (id)initWithExistingFile:(id)arg1 expectedSize:(long long)arg2;
- (void)setSkipUnlink:(BOOL)arg1;
- (id)initTempFileWithDirectory:(id)arg1;
- (id)workQueue;

@end