//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_source>, NSRecursiveLock, NSString, NWSystemPathMonitor;

@interface SBWiFiManager : NSObject
{
    NSRecursiveLock *_lock;
    struct __CFRunLoop *_callbackRunLoop;
    struct __WiFiManagerClient *_manager;
    struct __WiFiDeviceClient *_device;
    NSString *_deviceInterfaceName;
    _Bool _mainThread_devicePresent;
    struct __WiFiNetwork *_currentNetwork;
    struct __WiFiNetwork *_previousNetwork;
    _Bool _currentNetworkHasBeenSet;
    _Bool _currentNetworkIsIOSHotspot;
    _Bool _currentNetworkIsIOSHotspotHasBeenSet;
    _Bool _powered;
    _Bool _poweredHasBeenSet;
    int _mainThread_signalStrengthBars;
    int _mainThread_signalStrengthRSSI;
    _Bool _mainThread_signalStrengthHasBeenSet;
    NWSystemPathMonitor *_systemPathMonitor;
    NSObject<OS_dispatch_source> *_primaryInterfaceUpdateTimeoutSource;
    struct __WiFiNetwork *_primaryInterface;
    _Bool _primaryInterfaceHasBeenSet;
    _Bool _isPrimaryInterface;
    _Bool _isPrimaryInterfaceChanging;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)_cachedIsAssociated;
- (void)_linkDidChange;
- (struct __WiFiManagerClient *)_lock_manager;
- (void)_lock_setWiFiDevice:(struct __WiFiDeviceClient *)arg1;
- (void)_lock_spawnManagerCallbackThread;
- (void)_powerStateDidChange;
- (void)_primaryInterfaceChanged:(_Bool)arg1;
- (void)_runManagerCallbackThread;
- (void)_updateCurrentNetwork;
- (void)_updateWiFiDevice;
- (void)_updateWiFiState;
- (id)_wifiInterface;
- (void)clearWiFiPickerPreferences;
- (id)currentNetworkName;
- (_Bool)devicePresent;
- (id)init;
- (_Bool)isAssociated;
- (_Bool)isAssociatedToIOSHotspot;
- (_Bool)isPowered;
- (_Bool)isPrimaryInterface;
- (id)knownNetworks;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)resetSettingsWithMode:(long long)arg1;
- (void)setPowered:(_Bool)arg1;
- (void)setWiFiEnabled:(_Bool)arg1;
- (int)signalStrengthBars;
- (int)signalStrengthRSSI;
- (void)updateDevicePresence;
- (void)updateSignalStrength;
- (void)updateSignalStrengthFromRawRSSI:(int)arg1 andScaledRSSI:(float)arg2;
- (_Bool)wiFiEnabled;
- (struct __CFRunLoop *)wifiRunLoopRef;
- (_Bool)wifiSupported;

@end

