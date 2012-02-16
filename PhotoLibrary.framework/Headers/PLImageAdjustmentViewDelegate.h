/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <PhotoLibrary/PhotoLibrary-Structs.h>



@protocol PLImageAdjustmentViewDelegate <NSObject>
- (void)editViewDidTouchImage:(id)editView location:(CGPoint)location;
- (void)editViewDidCropImage:(id)editView;
- (void)editViewWillCropImage:(id)editView;
@end