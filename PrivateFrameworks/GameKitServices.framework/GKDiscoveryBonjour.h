/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray;

@interface GKDiscoveryBonjour : NSObject  {
    struct _DNSServiceRef_t { } *_browseRef;
    struct _DNSServiceRef_t { } *_advertiseRef;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _browseCallback;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _connectionCallback;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _serviceNameCollisionCallback;

    BOOL _checkedInWithLaunchd;
    NSMutableArray *_launchdSources;
    int _listeningPort;
}

@property(copy) id connectionCallback;
@property(copy) id serviceNameCollisionCallback;
@property struct _DNSServiceRef_t { }* browseRef;
@property struct _DNSServiceRef_t { }* advertiseRef;
@property(retain) NSMutableArray * launchdSources;
@property(copy) id browseCallback;


- (void)stopBrowsing;
- (void)stopAdvertising;
- (void)dealloc;
- (id)init;
- (id)browseCallback;
- (void)setLaunchdSources:(id)arg1;
- (void)setAdvertiseRef:(struct _DNSServiceRef_t { }*)arg1;
- (struct _DNSServiceRef_t { }*)advertiseRef;
- (void)setBrowseRef:(struct _DNSServiceRef_t { }*)arg1;
- (struct _DNSServiceRef_t { }*)browseRef;
- (void)setupListeningSockets;
- (void)sendBonjourRegistrationEvent:(id)arg1 discoveryInfo:(id)arg2;
- (id)serviceNameCollisionCallback;
- (void)setupBothListeningSockets;
- (void)createDispatchEventWithSocket:(int)arg1;
- (int)ipV6Socket;
- (int)ipV4Socket;
- (id)launchdSources;
- (id)connectionCallback;
- (void)setBrowseCallback:(id)arg1;
- (void)closeListeningSockets;
- (int)startBrowsing:(id)arg1;
- (void)startAdvertisingServiceName:(id)arg1 discoveryInfo:(id)arg2;
- (void)setServiceNameCollisionCallback:(id)arg1;
- (void)setConnectionCallback:(id)arg1;
- (int)resolveName:(id)arg1 onIndex:(unsigned int)arg2 withCompletionHandler:(id)arg3;

@end