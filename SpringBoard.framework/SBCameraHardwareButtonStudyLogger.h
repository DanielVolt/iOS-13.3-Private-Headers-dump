/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBCameraHardwareButtonStudyLogger : NSObject {
    SLGNotificationActivatedLogger * _logger;
    BKSApplicationStateMonitor * _processMonitor;
}

- (void).cxx_destruct;
- (void)_startProcessMonitor;
- (void)_stopProcessMonitor;
- (void)dealloc;
- (id)init;
- (void)logButtonEvent:(struct __IOHIDEvent { }*)arg1;
- (void)logPocketState:(long long)arg1;

@end
