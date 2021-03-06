/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSCoding.h>
#import <StoreServices/NSCopying.h>
#import <StoreServices/XXUnknownSuperclass.h>

@class SSOperationProgress;

@interface SSDownloadPhase : XXUnknownSuperclass <SSCoding, NSCopying> {
@private
	SSOperationProgress *_operationProgress;	// 4 = 0x4
}
@property(readonly, assign) SSOperationProgress *operationProgress;	// G=0xd411; 
@property(readonly, assign) float progressChangeRate;	// G=0xd3a1; 
@property(readonly, assign) double estimatedSecondsRemaining;	// G=0xd319; 
@property(readonly, assign) int progressUnits;	// G=0xd371; 
@property(readonly, assign) long long totalProgressValue;	// G=0xd3f1; 
@property(readonly, assign) long long progressValue;	// G=0xd3d1; 
@property(readonly, assign) int phaseType;	// G=0xd339; 
// declared property getter: - (id)operationProgress;	// 0xd411
// declared property getter: - (long long)totalProgressValue;	// 0xd3f1
// declared property getter: - (long long)progressValue;	// 0xd3d1
// declared property getter: - (float)progressChangeRate;	// 0xd3a1
// declared property getter: - (int)progressUnits;	// 0xd371
// declared property getter: - (int)phaseType;	// 0xd339
// declared property getter: - (double)estimatedSecondsRemaining;	// 0xd319
- (id)copyWithZone:(NSZone *)zone;	// 0xd2a5
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0xd269
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0xd1f1
- (void *)copyXPCEncoding;	// 0xd1bd
- (id)copyPropertyListEncoding;	// 0xd19d
- (void)dealloc;	// 0xd151
- (id)initWithOperationProgress:(id)operationProgress;	// 0xd0fd
- (id)init;	// 0xd0e9
@end
