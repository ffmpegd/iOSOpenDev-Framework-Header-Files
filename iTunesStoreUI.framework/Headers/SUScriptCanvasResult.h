/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/XXUnknownSuperclass.h>


@interface SUScriptCanvasResult : XXUnknownSuperclass {
	CGImageRef _image;	// 4 = 0x4
	CGPathRef _path;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) CGPathRef canvasPath;	// G=0x758b1; @synthesize=_path
@property(readonly, assign, nonatomic) CGImageRef canvasImage;	// G=0x758a1; @synthesize=_image
// declared property getter: - (CGPathRef)canvasPath;	// 0x758b1
// declared property getter: - (CGImageRef)canvasImage;	// 0x758a1
- (void)dealloc;	// 0x7583d
- (id)_initWithCanvas:(id)canvas;	// 0x757dd
@end
