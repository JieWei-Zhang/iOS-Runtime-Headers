/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKASLClient : NSObject {
    struct __asl_object_s { } *_aslClient;
    int _logLevel;
    NSObject<OS_dispatch_queue> *_logQueue;
}

@property (nonatomic) struct __asl_object_s { }*aslClient;
@property (nonatomic) int logLevel;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *logQueue;

+ (id)ASLClient;

- (void).cxx_destruct;
- (void)_ensureLogDirectoryExists;
- (void)_logTrafficData:(id)arg1 andBinaryData:(id)arg2 withContainerIdentifier:(id)arg3 sectionID:(id)arg4;
- (id)_nilTerminatedCopyOfData:(id)arg1;
- (void)_sendASLMessage:(struct __asl_object_s { }*)arg1;
- (void)_setLogLevelFromDefaults;
- (void)_slurpTrafficDataFromHumanReadableFile:(id)arg1 binaryFile:(id)arg2 prefixString:(id)arg3 suffixString:(id)arg4 containerIdentifier:(id)arg5 sectionID:(id)arg6;
- (struct __asl_object_s { }*)aslClient;
- (void)dealloc;
- (id)init;
- (int)logLevel;
- (unsigned int)logLevelForASL;
- (id)logQueue;
- (void)setAslClient:(struct __asl_object_s { }*)arg1;
- (void)setLogLevel:(int)arg1;
- (void)setLogQueue:(id)arg1;
- (void)slurpAndRemoveLookasideHumanFile:(id)arg1 binaryFile:(id)arg2 prefixString:(id)arg3 suffixString:(id)arg4 containerIdentifier:(id)arg5 sectionID:(id)arg6;

@end