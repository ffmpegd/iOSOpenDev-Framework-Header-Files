/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <GMM/XXUnknownSuperclass.h>

@class NSMutableArray, LBSGCell;

@interface LBSGCellularProfile : XXUnknownSuperclass {
	LBSGCell *_primaryCell;	// 4 = 0x4
	long long _timestamp;	// 8 = 0x8
	NSMutableArray *_neighbors;	// 16 = 0x10
	NSMutableArray *_historicalCells;	// 20 = 0x14
	BOOL _hasPrefetchMode;	// 24 = 0x18
	int _prefetchMode;	// 28 = 0x1c
}
@property(assign, nonatomic) int prefetchMode;	// G=0x340b9; S=0x340dd; @synthesize=_prefetchMode
@property(assign, nonatomic) BOOL hasPrefetchMode;	// G=0x34959; S=0x34969; @synthesize=_hasPrefetchMode
@property(retain, nonatomic) NSMutableArray *historicalCells;	// G=0x34925; S=0x34935; @synthesize=_historicalCells
@property(retain, nonatomic) NSMutableArray *neighbors;	// G=0x348f1; S=0x34901; @synthesize=_neighbors
@property(assign, nonatomic) long long timestamp;	// G=0x348c5; S=0x348dd; @synthesize=_timestamp
@property(retain, nonatomic) LBSGCell *primaryCell;	// G=0x34891; S=0x348a1; @synthesize=_primaryCell
// declared property setter: - (void)setHasPrefetchMode:(BOOL)mode;	// 0x34969
// declared property getter: - (BOOL)hasPrefetchMode;	// 0x34959
// declared property setter: - (void)setHistoricalCells:(id)cells;	// 0x34935
// declared property getter: - (id)historicalCells;	// 0x34925
// declared property setter: - (void)setNeighbors:(id)neighbors;	// 0x34901
// declared property getter: - (id)neighbors;	// 0x348f1
// declared property setter: - (void)setTimestamp:(long long)timestamp;	// 0x348dd
// declared property getter: - (long long)timestamp;	// 0x348c5
// declared property setter: - (void)setPrimaryCell:(id)cell;	// 0x348a1
// declared property getter: - (id)primaryCell;	// 0x34891
- (void)writeTo:(id)to;	// 0x34599
- (BOOL)readFrom:(id)from;	// 0x342a5
- (id)dictionaryRepresentation;	// 0x34171
- (id)description;	// 0x34101
// declared property setter: - (void)setPrefetchMode:(int)mode;	// 0x340dd
// declared property getter: - (int)prefetchMode;	// 0x340b9
- (id)historicalCellsAtIndex:(unsigned)index;	// 0x34099
- (unsigned)historicalCellsCount;	// 0x34079
- (void)addHistoricalCells:(id)cells;	// 0x34015
- (id)neighborsAtIndex:(unsigned)index;	// 0x33ff5
- (unsigned)neighborsCount;	// 0x33fd5
- (void)addNeighbors:(id)neighbors;	// 0x33f71
- (void)dealloc;	// 0x33f05
@end
