/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSLocalPairingDaemonResponseListener : NSObject <IDSDaemonListenerProtocol> {
    IDSDaemonRequestTimer * _requestTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)_newNSUUIDArrayFromCBUUIDStrings:(id)arg1;

- (void)dealloc;
- (id)initWithRequestTimer:(id)arg1;
- (void)localPairingResponseForRequestID:(id)arg1 withError:(id)arg2;
- (void)localPairingResponseForRequestID:(id)arg1 withError:(id)arg2 pairedDevices:(id)arg3;

@end
