/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSLengthFormatter : NSFormatter <NSObservable, NSObserver> {
    void *_formatter;
    BOOL _isForPersonHeight;
    void *_reserved;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isForPersonHeightUse) BOOL forPersonHeightUse;
@property (readonly) unsigned int hash;
@property (copy) NSNumberFormatter *numberFormatter;
@property (readonly) Class superclass;
@property int unitStyle;

- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isForPersonHeightUse;
- (id)numberFormatter;
- (void)receiveObservedValue:(id)arg1;
- (void)setForPersonHeightUse:(BOOL)arg1;
- (void)setNumberFormatter:(id)arg1;
- (void)setUnitStyle:(int)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromMeters:(double)arg1;
- (id)stringFromValue:(double)arg1 unit:(int)arg2;
- (int)targetUnitFromMeters:(double)arg1;
- (id)unitStringFromMeters:(double)arg1 usedUnit:(int*)arg2;
- (id)unitStringFromValue:(double)arg1 unit:(int)arg2;
- (int)unitStyle;

@end