/* Generated by RuntimeBrowser.
 */

@protocol AFClientServiceDelegate <NSObject>

@required

- (oneway void)aceConnectionWillRetryOnError:(NSError *)arg1;
- (oneway void)acousticIDRequestDidFinishWithSuccess:(bool)arg1;
- (oneway void)acousticIDRequestWillStart;
- (oneway void)audioSessionDidBeginInterruption;
- (oneway void)audioSessionDidEndInterruption:(bool)arg1;
- (oneway void)audioSessionIDChanged:(unsigned int)arg1;
- (oneway void)cacheImage:(INImage *)arg1;
- (oneway void)getBulletinContext:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (oneway void)invalidateCurrentUserActivity;
- (oneway void)musicWasDetected;
- (oneway void)requestDidFailWithError:(NSError *)arg1 requestClass:(NSString *)arg2;
- (oneway void)requestDidFinish;
- (oneway void)requestDidReceiveCommand:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: AceObject<SAAceCommand> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AceObject<SAAceCommand> *, void*
- (oneway void)requestRequestedDismissAssistant;
- (oneway void)requestRequestedOpenApplicationWithBundleID:(void *)arg1 URL:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (oneway void)requestRequestedOpenURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (oneway void)setUserActivityInfo:(NSDictionary *)arg1 webpageURL:(NSURL *)arg2;
- (oneway void)shouldSpeakChanged:(bool)arg1;
- (oneway void)speechRecognitionDidFail:(NSError *)arg1;
- (oneway void)speechRecognized:(SASSpeechRecognized *)arg1;
- (oneway void)speechRecognizedAdditionalInterpretation:(AFSpeechInterpretation *)arg1 refId:(NSString *)arg2;
- (oneway void)speechRecognizedPartialResult:(SASSpeechPartialResult *)arg1;
- (oneway void)speechRecordingDidBeginOnAVRecordRoute:(NSString *)arg1;
- (oneway void)speechRecordingDidCancel;
- (oneway void)speechRecordingDidChangeAVRecordRoute:(NSString *)arg1;
- (oneway void)speechRecordingDidEnd;
- (oneway void)speechRecordingDidFail:(NSError *)arg1;
- (oneway void)speechRecordingPerformTwoShotPromptWithType:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 9: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, double, NSError *, void*
- (oneway void)speechRecordingStartpointDetected;
- (oneway void)speechRecordingWillBeginWithLevelsSharedMem:(AFXPCWrapper *)arg1;

@end
