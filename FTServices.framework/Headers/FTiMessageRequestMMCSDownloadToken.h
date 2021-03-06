/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <FTServices/FTiMessageMessage.h>
#import <FTServices/NSCopying.h>
#import <FTServices/FTServices-Structs.h>

@class NSData, NSString;

@interface FTiMessageRequestMMCSDownloadToken : FTiMessageMessage <NSCopying> {
	NSString *_owner;	// 4 = 0x4
	NSString *_responseAuthToken;	// 8 = 0x8
	NSData *_signature;	// 12 = 0xc
	NSString *_responseRequestorID;	// 16 = 0x10
}
@property(copy) NSString *responseRequestorID;	// G=0x2a7a9; S=0x2a7bd; @synthesize=_responseRequestorID
@property(copy) NSString *responseAuthToken;	// G=0x2a739; S=0x2a74d; @synthesize=_responseAuthToken
@property(copy) NSData *signature;	// G=0x2a771; S=0x2a785; @synthesize=_signature
@property(copy) NSString *owner;	// G=0x2a701; S=0x2a715; @synthesize=_owner
// declared property setter: - (void)setResponseRequestorID:(id)anId;	// 0x2a7bd
// declared property getter: - (id)responseRequestorID;	// 0x2a7a9
// declared property setter: - (void)setSignature:(id)signature;	// 0x2a785
// declared property getter: - (id)signature;	// 0x2a771
// declared property setter: - (void)setResponseAuthToken:(id)token;	// 0x2a74d
// declared property getter: - (id)responseAuthToken;	// 0x2a739
// declared property setter: - (void)setOwner:(id)owner;	// 0x2a715
// declared property getter: - (id)owner;	// 0x2a701
- (void)handleResponseDictionary:(id)dictionary;	// 0x2a699
- (id)messageBody;	// 0x2a55d
- (id)requiredKeys;	// 0x2a4e5
- (int)responseCommand;	// 0x2a4e1
- (int)command;	// 0x2a4dd
- (void)dealloc;	// 0x2a45d
- (id)copyWithZone:(NSZone *)zone;	// 0x2a391
- (id)init;	// 0x2a349
@end
