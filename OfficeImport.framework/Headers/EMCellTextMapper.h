/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMMapper.h>
#import <OfficeImport/EMCellTextMapper.h>

@class EDString, EDStyle;

__attribute__((visibility("hidden")))
@interface EMCellTextMapper : CMMapper {
@private
	EDString *edString;	// 8 = 0x8
	EDStyle *edStyle;	// 12 = 0xc
}
- (id)initWithEDString:(id)edstring style:(id)style parent:(id)parent;	// 0xfc541
- (double)contentWidth;	// 0xfcba1
- (void)mapAt:(id)at withState:(id)state columnWidth:(double)width height:(double)height spreadLeft:(BOOL)left;	// 0xfc591
- (void)mapTextRunsAt:(id)at;	// 0xfcce1
@end

@interface EMCellTextMapper (Private)
- (void)mapVerticalTextAt:(id)at withState:(id)state width:(double)width height:(double)height;	// 0x1b7371
@end
