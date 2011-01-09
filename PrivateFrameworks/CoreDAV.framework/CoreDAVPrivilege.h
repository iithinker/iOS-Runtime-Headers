/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSString;



@interface CoreDAVPrivilege : CoreDAVItem <CoreDAVParsingIgnoreUnknownItems>
{
    NSString *_privilegeString;
}

@property(retain) NSString *privilegeString;

+ (BOOL)ignoresUnknownChildren;
+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingWithSubItems;

- (void)setHasAllPrivilege:(id)arg1;
- (void)setHasBindPrivilege:(id)arg1;
- (void)setHasReadPrivilege:(id)arg1;
- (void)setHasReadACLPrivilege:(id)arg1;
- (void)setHasReadCurrentUserPrivilegeSetPrivilege:(id)arg1;
- (void)setHasUnbindPrivilege:(id)arg1;
- (void)setHasUnlockPrivilege:(id)arg1;
- (void)setHasWritePrivilege:(id)arg1;
- (void)setHasWriteACLPrivilege:(id)arg1;
- (void)setHasWritePropertiesPrivilege:(id)arg1;
- (void)setHasWriteContentPrivilege:(id)arg1;
- (id)privilegeString;
- (void)setPrivilegeString:(id)arg1;
- (id)copyCoreDAVParseRules;
- (void)noteIgnoredItem:(id)arg1;
- (void)dealloc;
- (id)description;

@end