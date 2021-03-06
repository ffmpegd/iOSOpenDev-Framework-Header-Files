/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <PhotoLibrary/XXUnknownSuperclass.h>
#import <PhotoLibrary/PhotoLibrary-Structs.h>

@class UIImageView, UIImage, UIView;

@interface PLCameraImageWellView : XXUnknownSuperclass {
	UIImage *_thumbnailImage;	// 48 = 0x30
	UIImageView *_containerImageView;	// 52 = 0x34
	UIImageView *_thumbnailImageView;	// 56 = 0x38
	UIView *_thumbnailOverlayView;	// 60 = 0x3c
	BOOL _watchingOrientationChanges;	// 64 = 0x40
	int _deviceOrientation;	// 68 = 0x44
}
@property(retain) UIImage *thumbnailImage;	// G=0x62315; S=0x61fd5; converted property
- (void)setButtonOrientation:(int)orientation animated:(BOOL)animated;	// 0x627ad
- (void)_deviceOrientationChanged:(id)changed;	// 0x62709
- (void)_stopWatchingDeviceOrientationChanges;	// 0x6267d
- (void)_startWatchingDeviceOrientationChanges;	// 0x625c9
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x62585
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x62541
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x624e5
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x624a1
- (void)_setImageViewHighlighted:(BOOL)highlighted;	// 0x62345
- (void)setHighlighted:(BOOL)highlighted;	// 0x62325
// converted property getter: - (id)thumbnailImage;	// 0x62315
- (CGRect)thumbnailFrame;	// 0x622e1
- (void)addMaskedSubview:(id)subview;	// 0x62295
- (void)beginContentFadeOutWithDuration:(float)duration;	// 0x62171
// converted property setter: - (void)setThumbnailImage:(id)image;	// 0x61fd5
- (void)layoutSubviews;	// 0x61f2d
- (void)setFrame:(CGRect)frame;	// 0x61e99
- (void)setEnabled:(BOOL)enabled;	// 0x61df1
- (void)dealloc;	// 0x61d69
- (id)initWithFrame:(CGRect)frame image:(id)image;	// 0x61bf1
@end
