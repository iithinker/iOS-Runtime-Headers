/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface GKDataRequest : NSObject {
    id _completionBlock;
    NSUInteger _replyPort;
    struct dispatch_source_s { } *_replySource;
}

@property(readonly) NSString *cacheKey;
@property(copy) ? *completionBlock;
@property(readonly) NSDictionary *header;
@property(readonly) NSArray *invalidateCacheKeys;
@property(readonly) NSString *key;
@property(readonly) NSDictionary *request;
@property(readonly) BOOL authenticationRequired;
@property(readonly) NSInteger cachePriority;
@property(readonly) NSInteger cacheType;

+ (id)protocolVersion;
+ (NSUInteger)serverPort;
+ (BOOL)useTestProtocol;

- (BOOL)authenticationRequired;
- (id)cacheKey;
- (NSInteger)cachePriority;
- (NSInteger)cacheType;
- (void)cancel;
- (id)completionBlock;
- (void)dealloc;
- (id)demarshalResponseData:(id)arg1;
- (id)errorForResponse:(id)arg1;
- (void)handleResponseFromServer:(id)arg1 error:(id)arg2;
- (id)header;
- (id)init;
- (id)invalidateCacheKeys;
- (id)key;
- (id)request;
- (void)send;
- (void)setCompletionBlock:(id)arg1;
- (void)wasCancelledByServer;

@end