/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMDiagramShapeMapper.h>
#import <OfficeImport/OfficeImport-Structs.h>


__attribute__((visibility("hidden")))
@interface CMDiagramPyramidMapper : CMDiagramShapeMapper {
@private
	BOOL mIsFlipped;	// 112 = 0x70
}
- (void)setIsFlipped:(BOOL)flipped;	// 0x2f2be5
- (void)mapAt:(id)at withState:(id)state;	// 0x203f7d
- (void)mapChildrenAt:(id)at withState:(id)state;	// 0x204189
- (id)_suggestedBoundsForNodeAtIndex:(unsigned)index;	// 0x2040c9
- (CGSize)sizeForNode:(id)node atIndex:(unsigned)index;	// 0x20406d
@end
