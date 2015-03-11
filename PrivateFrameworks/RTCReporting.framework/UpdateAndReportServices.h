/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RTCReporting.framework/RTCReporting
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface UpdateAndReportServices : NSObject {
    id _block;
    bool_report;
    bool_update;
}

@property(copy) id block;
@property(readonly) bool report;
@property(readonly) bool update;

- (id)block;
- (void)dealloc;
- (id)initWithServices:(bool)arg1 needToReport:(bool)arg2 service:(id)arg3;
- (bool)report;
- (void)setBlock:(id)arg1;
- (bool)update;

@end