/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/ODDLayoutObject.h>

@class ODDOtherwise, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ODDChoose : ODDLayoutObject {
@private
	NSMutableArray *mWhens;	// 4 = 0x4
	ODDOtherwise *mOtherwise;	// 8 = 0x8
}
@property(retain) id otherwise;	// G=0x2af1e9; S=0x2af26d; converted property
- (id)init;	// 0x2af209
- (void)dealloc;	// 0x2af2d1
- (id)whens;	// 0x2af1d9
- (void)addWhen:(id)when;	// 0x2af2ad
// converted property getter: - (id)otherwise;	// 0x2af1e9
// converted property setter: - (void)setOtherwise:(id)otherwise;	// 0x2af26d
@end
