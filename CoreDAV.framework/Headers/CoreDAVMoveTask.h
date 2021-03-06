/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVCopyOrMoveTask.h>

@class NSString;
@protocol CoreDAVMoveTaskDelegate;

@interface CoreDAVMoveTask : CoreDAVCopyOrMoveTask {
	NSString *_previousETag;	// 128 = 0x80
}
@property(retain) NSString *previousETag;	// G=0x2179d; S=0x217b1; @synthesize=_previousETag
@property(assign, nonatomic) id<CoreDAVMoveTaskDelegate> delegate;	// @dynamic
// declared property setter: - (void)setPreviousETag:(id)tag;	// 0x217b1
// declared property getter: - (id)previousETag;	// 0x2179d
- (void)_callBackToDelegateWithResponses:(id)responses error:(id)error;	// 0x21725
- (id)additionalHeaderValues;	// 0x2166d
- (id)httpMethod;	// 0x21661
- (id)description;	// 0x2159d
- (void)dealloc;	// 0x2153d
@end
