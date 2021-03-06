/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
#import <ScreenReaderOutput/SCROIOElement.h>
#import <ScreenReaderOutput/SCROIOHIDElementProtocol.h>

// iOSOpenDev: wrapped with define check (since occurs in other dumped files)
#ifndef __SCROIOHIDElement__
#define __SCROIOHIDElement__ 1
@interface SCROIOHIDElement : SCROIOElement <SCROIOHIDElementProtocol> {
	IOHIDDeviceRef _hidDevice;	// 12 = 0xc
}
@property(readonly, assign) IOHIDDeviceRef hidDevice;	// G=0xb685; converted property
- (id)initWithIOObject:(unsigned)ioobject;	// 0xb699
- (void)dealloc;	// 0xb789
- (id)copyWithZone:(NSZone *)zone;	// 0xb73d
// converted property getter: - (IOHIDDeviceRef)hidDevice;	// 0xb685
- (int)transport;	// 0xb695
@end
#endif
