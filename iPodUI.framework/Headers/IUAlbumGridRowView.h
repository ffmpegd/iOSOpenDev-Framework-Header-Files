/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/XXUnknownSuperclass.h>
#import <iPodUI/iPodUI-Structs.h>

@class NSMutableArray, IUAlbumGridCellContext, IUAlbumGridRowCell, NSMutableIndexSet;

@interface IUAlbumGridRowView : XXUnknownSuperclass {
	IUAlbumGridRowCell *_cell;	// 48 = 0x30
	IUAlbumGridCellContext *_context;	// 52 = 0x34
	NSMutableIndexSet *_hiddenAlbumIndexes;	// 56 = 0x38
	NSMutableArray *_imageRequests;	// 60 = 0x3c
	unsigned _rowIndex;	// 64 = 0x40
	unsigned _nowPlayingQueryIndex;	// 68 = 0x44
	NSMutableArray *_imageViews;	// 72 = 0x48
	NSMutableArray *_deleteButtons;	// 76 = 0x4c
}
@property(readonly, assign, nonatomic) float _interItemPadding;	// G=0x338ed; 
@property(readonly, assign, nonatomic) NSMutableIndexSet *hiddenAlbumIndexes;	// G=0x352d1; @synthesize=_hiddenAlbumIndexes
@property(assign, nonatomic) unsigned rowIndex;	// G=0x352c1; S=0x339c9; @synthesize=_rowIndex
@property(retain, nonatomic) IUAlbumGridCellContext *context;	// G=0x352b1; S=0x33839; @synthesize=_context
@property(assign, nonatomic) IUAlbumGridRowCell *cell;	// G=0x35291; S=0x352a1; @synthesize=_cell
// declared property getter: - (id)hiddenAlbumIndexes;	// 0x352d1
// declared property getter: - (unsigned)rowIndex;	// 0x352c1
// declared property getter: - (id)context;	// 0x352b1
// declared property setter: - (void)setCell:(id)cell;	// 0x352a1
// declared property getter: - (id)cell;	// 0x35291
- (id)scriptingInfoWithChildren;	// 0x3501d
- (void)_deleteButtonPressed:(id)pressed;	// 0x34f99
- (void)_updateNowPlayingIndicator;	// 0x34de1
- (void)_getTitleValue:(id *)value frame:(CGRect *)frame withFont:(id)font forEntityIndex:(unsigned)entityIndex;	// 0x34c41
- (void)_getSubtitleString:(id *)string frame:(CGRect *)frame withFont:(id)font forEntityIndex:(unsigned)entityIndex;	// 0x34aad
- (id)_newImageRequestForMediaItem:(id)mediaItem;	// 0x3494d
- (void)_loadImageForQueryIndex:(unsigned)queryIndex createTitle:(BOOL)title;	// 0x34081
- (void)_cancelImageRequests;	// 0x33fa5
- (CGRect)_actualImageFrameForImageFrame:(CGRect)imageFrame imageSize:(CGSize)size;	// 0x33f21
- (void)_itemDidChangeNotification:(id)_item;	// 0x33f11
- (void)disableDeleteButtons;	// 0x33e75
- (void)enableDeleteButtonForAlbumAtIndex:(unsigned)index;	// 0x33de9
- (void)enableDeleteButtons;	// 0x33d15
- (unsigned)rowAlbumIndexForPoint:(CGPoint)point;	// 0x33bed
- (unsigned)albumIndexForPoint:(CGPoint)point;	// 0x33b95
- (id)thumbnailImageForAlbumAtIndex:(unsigned)index;	// 0x33ae5
- (CGRect)thumbnailFrameForAlbumAtIndex:(unsigned)index;	// 0x339f5
// declared property setter: - (void)setRowIndex:(unsigned)index;	// 0x339c9
// declared property getter: - (float)_interItemPadding;	// 0x338ed
- (void)dimAlbum:(BOOL)album atIndex:(unsigned)index;	// 0x33891
// declared property setter: - (void)setContext:(id)context;	// 0x33839
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x336fd
- (void)layoutSubviews;	// 0x333cd
- (void)drawRect:(CGRect)rect;	// 0x32f6d
- (BOOL)_canDrawContent;	// 0x32f15
- (void)setTitlesHidden:(BOOL)hidden animated:(BOOL)animated;	// 0x32ea9
- (void)unhideAlbums;	// 0x32e65
- (void)setAlbumHidden:(BOOL)hidden atIndex:(unsigned)index;	// 0x32da5
- (void)refreshImages;	// 0x3279d
- (void)dealloc;	// 0x32689
- (id)initWithFrame:(CGRect)frame;	// 0x325c9
@end
