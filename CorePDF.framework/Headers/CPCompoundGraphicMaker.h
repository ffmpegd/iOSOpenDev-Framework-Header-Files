/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPDisposable.h>


@class CPCluster, CPChunk;

@interface CPCompoundGraphicMaker : NSObject <CPDisposable> {
	CPChunk *parentChunk;	// 4 = 0x4
	BOOL shapesAreVectorGraphics;	// 8 = 0x8
	unsigned shapeCount;	// 12 = 0xc
	CPGraphicObject **shapes;	// 16 = 0x10
	double pageSpread;	// 20 = 0x14
	CPCluster *cluster;	// 28 = 0x1c
	unsigned groupInfoCount;	// 32 = 0x20
	XXStruct_0P0XxC *groupInfoArray;	// 36 = 0x24
	BOOL disposed;	// 40 = 0x28
}
+ (BOOL)makeCompoundGraphicsInZonesOf:(id)of;	// 0x3a4e1
- (id)initWithGraphicsIn:(id)anIn ofClass:(Class)aClass;	// 0x3b44d
- (void)dispose;	// 0x3b3e9
- (void)finalize;	// 0x3a4a1
- (void)dealloc;	// 0x3b38d
- (BOOL)findClusterLevel;	// 0x3b221
- (void)addGroupInfoWithIndex:(unsigned)index bounds:(CGRect)bounds;	// 0x3a40d
- (void)makeCompoundGraphicFromShapesAtIndex:(unsigned)index count:(unsigned)count;	// 0x3b0dd
- (void)coalesceShapeGroups;	// 0x3af89
- (BOOL)makeCompoundGraphicsFromShapeGroups;	// 0x3ae81
- (BOOL)groupOverlappingGraphics;	// 0x3ab45
- (BOOL)makeCompoundGraphics;	// 0x3a6b1
@end
