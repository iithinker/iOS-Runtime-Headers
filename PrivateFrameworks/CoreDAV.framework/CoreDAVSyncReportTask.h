/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSString;

@interface CoreDAVSyncReportTask : CoreDAVPropertyFindBaseTask {
    NSString *_nextSyncToken;
    NSString *_previousSyncToken;
    bool_moreToSync;
    bool_wasInvalidSyncToken;
}

@property(readonly) bool moreToSync;
@property(readonly) NSString * nextSyncToken;
@property(readonly) bool wasInvalidSyncToken;

- (id)copyDefaultParserForContentType:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2 withDepth:(int)arg3 previousSyncToken:(id)arg4;
- (bool)moreToSync;
- (id)nextSyncToken;
- (id)notFoundHREFs;
- (id)requestBody;
- (bool)wasInvalidSyncToken;

@end