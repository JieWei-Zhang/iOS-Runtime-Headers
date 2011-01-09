/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSConditionLock, VMUProcessDescription, VMUSymbolicator, NSMutableArray;



@interface VMUSampler : NSObject 
{
    NSInteger _pid;
    NSUInteger _task;
    BOOL _needTaskPortDealloc;
    BOOL _taskIs64Bit;
    VMUProcessDescription *_processDescription;
    VMUSymbolicator *_symbolicator;
    double _tbRate;
    double _tbInterval;
    NSConditionLock *_stateLock;
    double _interval;
    double _timeLimit;
    NSUInteger _sampleLimit;
    BOOL _sampling;
    NSUInteger _samplingThreadPort;
    NSMutableArray *_samples;
    BOOL _stacksFixed;
    id _delegate;
}

+ (id)sampleAllThreadsOfPID:(NSInteger)arg1 withSymbolicator:(id)arg2;
+ (id)sampleAllThreadsOfTask:(NSUInteger)arg1 withSymbolicator:(id)arg2;
+ (id)sampleAllThreadsOfTask:(NSUInteger)arg1 withSymbolicator:(id)arg2 symbolicate:(BOOL)arg3;

- (BOOL)stop;
- (BOOL)waitUntilDone;
- (void)finalize;
- (BOOL)start;
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (double)timeLimit;
- (void)setTimeLimit:(double)arg1;
- (id)initWithPID:(NSInteger)arg1;
- (void)_makeHighPriority;
- (void)_makeTimeshare;
- (NSUInteger)samplingThread;
- (BOOL)recordSampleTo:(id)arg1 beginTime:(double)arg2 endTime:(double)arg3;
- (void)_fixupStacks:(id)arg1 symbolicate:(BOOL)arg2;
- (void)_runSamplingThread;
- (id)sampleAllThreadsOnce;
- (id)sampleAllThreadsOnce:(BOOL)arg1;
- (void)setSamplingInterval:(double)arg1;
- (double)samplingInterval;
- (void)setSampleLimit:(NSUInteger)arg1;
- (NSUInteger)sampleLimit;
- (void)setSymbolicator:(id)arg1;
- (id)symbolicator;
- (void)preloadSymbols;
- (void)sampleForDuration:(NSUInteger)arg1 interval:(NSUInteger)arg2;
- (void)stopSampling;
- (void)forceStop;
- (id)stopSamplingAndReturnCallNode;
- (id)_systemVersionDescription;
- (void)writeOutput:(id)arg1 append:(BOOL)arg2;
- (id)initWithTask:(NSUInteger)arg1;

@end