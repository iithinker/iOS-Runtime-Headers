/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

@interface ASDObject : NSObject {
    NSMutableArray * _customProperties;
    NSObject<OS_dispatch_queue> * _customPropertyQueue;
    unsigned long  _objectID;
    ASDObject * _owner;
    ASDPlugin * _plugin;
}

@property (nonatomic, readonly) unsigned long baseClass;
@property (nonatomic, readonly) unsigned long objectClass;
@property (nonatomic) unsigned long objectID;
@property (nonatomic) ASDObject *owner;
@property (nonatomic) ASDPlugin *plugin;

- (void).cxx_destruct;
- (void)addCustomProperty:(id)arg1;
- (unsigned long)baseClass;
- (id)customProperties;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 andQualifierData:(const void*)arg3;
- (void)dealloc;
- (BOOL)getProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned int*)arg4 andData:(void*)arg5 forClient:(int)arg6;
- (BOOL)hasProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1;
- (id)init;
- (id)initWithPlugin:(id)arg1;
- (BOOL)isKindOfAudioClass:(unsigned long)arg1;
- (BOOL)isPropertySettable:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1;
- (unsigned long)objectClass;
- (unsigned long)objectID;
- (id)owner;
- (id)plugin;
- (void)removeCustomProperty:(id)arg1;
- (void)setObjectID:(unsigned long)arg1;
- (void)setOwner:(id)arg1;
- (void)setPlugin:(id)arg1;
- (BOOL)setProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned int)arg4 andData:(const void*)arg5 forClient:(int)arg6;

@end