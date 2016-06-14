/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

@interface EKTravelEngineThrottle : NSObject {
    id /* block */  _cancelRequestRefreshBlock;
    id /* block */  _emissionBlock;
    NSString * _eventExternalURL;
    NSDate * _nextEmissionDate;
    id /* block */  _requestRefreshBlock;
    bool  _running;
    NSString * _throttleIdentifier;
    NSObject<OS_dispatch_queue> * _throttleQueue;
}

@property (nonatomic, copy) id /* block */ cancelRequestRefreshBlock;
@property (nonatomic, copy) id /* block */ emissionBlock;
@property (retain) NSString *eventExternalURL;
@property (nonatomic, retain) NSDate *nextEmissionDate;
@property (nonatomic, copy) id /* block */ requestRefreshBlock;
@property (nonatomic) bool running;
@property (nonatomic, retain) NSString *throttleIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *throttleQueue;

+ (double)_requestRefreshInterval;
+ (double)emissionThresholdTimeInterval;

- (void).cxx_destruct;
- (void)_createEmissionTimerWithDate:(id)arg1;
- (void)_emissionTimerFired:(id)arg1;
- (void)_fireEmissionBlock;
- (void)_registerForNotificationObservation;
- (void)_significantTimeChangeNotificationReceived;
- (void)_uninstallEmissionTimer;
- (void)_unregisterForNotificationObservation;
- (void)_updateEmissionDate:(id)arg1;
- (id)btaJobName;
- (id /* block */)cancelRequestRefreshBlock;
- (void)dealloc;
- (id)description;
- (id /* block */)emissionBlock;
- (id)eventExternalURL;
- (void)handleBTAJob:(id)arg1 named:(const char *)arg2;
- (id)init;
- (id)nextEmissionDate;
- (id /* block */)requestRefreshBlock;
- (bool)running;
- (void)setCancelRequestRefreshBlock:(id /* block */)arg1;
- (void)setEmissionBlock:(id /* block */)arg1;
- (void)setEventExternalURL:(id)arg1;
- (void)setNextEmissionDate:(id)arg1;
- (void)setRequestRefreshBlock:(id /* block */)arg1;
- (void)setRunning:(bool)arg1;
- (void)setThrottleIdentifier:(id)arg1;
- (void)setThrottleQueue:(id)arg1;
- (void)tearDown;
- (id)throttleIdentifier;
- (id)throttleQueue;
- (void)updatePredictedDepartureDate:(id)arg1;

@end