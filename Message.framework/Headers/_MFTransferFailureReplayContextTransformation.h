/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/MFOfflineCacheReplayContextTransformation.h>
#import <Message/XXUnknownSuperclass.h>

@class NSString, MFOfflineTransferFailureSnapshot;

@interface _MFTransferFailureReplayContextTransformation : XXUnknownSuperclass <MFOfflineCacheReplayContextTransformation> {
	NSString *_temporaryID;	// 4 = 0x4
	MFOfflineTransferFailureSnapshot *_snapshot;	// 8 = 0x8
}
- (id)initWithTemporaryID:(id)temporaryID transferFailureSnapshot:(id)snapshot;	// 0x7eed1
- (id)initWithCoder:(id)coder;	// 0x7ede9
- (void)encodeWithCoder:(id)coder;	// 0x7ed55
- (void)dealloc;	// 0x7ecf5
- (void)applyToReplayContext:(id)replayContext;	// 0x7eca9
@end
