/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/UIAlertViewDelegate.h>
#import <iTunesStoreUI/XXUnknownSuperclass.h>

@class ISDialog, UIAlertView;
@protocol SUDialogDelegate;

@interface SUDialog : XXUnknownSuperclass <UIAlertViewDelegate> {
	UIAlertView *_alertView;	// 4 = 0x4
	id<SUDialogDelegate> _delegate;	// 8 = 0x8
	ISDialog *_dialog;	// 12 = 0xc
}
@property(assign, nonatomic) id<SUDialogDelegate> delegate;	// G=0x2c421; S=0x2c431; @synthesize=_delegate
@property(readonly, assign, nonatomic) ISDialog *dialog;	// G=0x2c441; @synthesize=_dialog
// declared property getter: - (id)dialog;	// 0x2c441
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x2c431
// declared property getter: - (id)delegate;	// 0x2c421
- (id)_alertView;	// 0x2c279
- (void)alertViewCancel:(id)cancel;	// 0x2c161
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x2c06d
- (void)show;	// 0x2c021
- (BOOL)isEquivalent:(id)equivalent;	// 0x2bfa5
- (void)dealloc;	// 0x2bf15
- (id)initWithDialog:(id)dialog;	// 0x2bed5
@end
