/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

#import <IMAP/XXUnknownSuperclass.h>

@class CastleIMAPAccount;

@interface _MFNewcastleAuthenticator : XXUnknownSuperclass {
	BOOL _sentResponse;	// 20 = 0x14
	CastleIMAPAccount *_castleAccount;	// 24 = 0x18
}
@property(retain, nonatomic) CastleIMAPAccount *castleAccount;	// G=0x3abfd; S=0x3ac29; @synthesize=_castleAccount
- (id)initWithAuthScheme:(id)authScheme account:(id)account connection:(id)connection;	// 0x3adc1
- (id)saslName;	// 0x3abe9
- (BOOL)supportsInitialClientResponse;	// 0x3abf5
- (id)responseForServerData:(id)serverData;	// 0x3ac51
- (BOOL)justSentPlainTextPassword;	// 0x3abf9
// declared property getter: - (id)castleAccount;	// 0x3abfd
// declared property setter: - (void)setCastleAccount:(id)account;	// 0x3ac29
@end
