/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <ImageCapture/NSNetServiceBrowserDelegate.h>
#import <ImageCapture/NSNetServiceDelegate.h>
#import <ImageCapture/DeviceManager.h>

@class NSNetServiceBrowser, NSMutableArray;

@interface PTPCameraDeviceManager : DeviceManager <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
	NSNetServiceBrowser *_netServiceBrowser;	// 16 = 0x10
	NSMutableArray *_netServices;	// 20 = 0x14
}
- (id)init;	// 0x188b1
- (void)dealloc;	// 0x16531
- (void)startRunning;	// 0x18885
- (void)stopRunning;	// 0x18859
- (void)netServiceBrowser:(id)browser didFindService:(id)service moreComing:(BOOL)coming;	// 0x187a1
- (void)netServiceBrowser:(id)browser didRemoveService:(id)service moreComing:(BOOL)coming;	// 0x18735
- (void)netServiceBrowserDidStopSearch:(id)netServiceBrowser;	// 0x186c9
- (void)netServiceDidResolveAddress:(id)netService;	// 0x1805d
- (void)netService:(id)service didNotResolve:(id)resolve;	// 0x17fb9
- (void)netServiceDidStop:(id)netService;	// 0x17f4d
- (void)netService:(id)service didUpdateTXTRecordData:(id)data;	// 0x17ee1
- (id)usbLocationIDsOfPTPDevices;	// 0x17d21
- (void)openDeviceImp:(id)imp;	// 0x17a45
- (void)closeDeviceImp:(id)imp;	// 0x177b5
- (void)openSessionImp:(id)imp;	// 0x175d9
- (void)closeSessionImp:(id)imp;	// 0x174a5
- (void)syncClockImp:(id)imp;	// 0x1738d
- (void)getThumbnailOfFileImp:(id)fileImp;	// 0x170f5
- (void)getMetadataOfFileImp:(id)fileImp;	// 0x16f2d
- (void)deleteFileImp:(id)imp;	// 0x16d11
- (void)downloadFileImp:(id)imp;	// 0x16831
- (void)ejectImp:(id)imp;	// 0x1678d
- (int)handleEvent:(id)event onDevice:(id)device contextInfo:(void *)info;	// 0x16659
- (void)handleEventImp:(id)imp;	// 0x1655d
@end
