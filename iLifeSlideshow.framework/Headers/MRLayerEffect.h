/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <iLifeSlideshow/iLifeSlideshow-Structs.h>
#import <iLifeSlideshow/MRLayer.h>

@class MCContainerEffect, NSMutableArray;

@interface MRLayerEffect : MRLayer {
	MCContainerEffect *mContainer;	// 48 = 0x30
	NSMutableArray *mImageProviders;	// 52 = 0x34
	BOOL mNeedsToPreloadImageProviders;	// 56 = 0x38
	BOOL mIsPreloaded;	// 57 = 0x39
	BOOL mNeedsToResumeRenderer;	// 58 = 0x3a
	BOOL mIsPartOfWarmingUp;	// 59 = 0x3b
}
@property(readonly, assign) BOOL isPreloaded;	// G=0x79cb9; @synthesize=mIsPreloaded
@property(assign) BOOL needsToResumeRenderer;	// G=0x79c99; S=0x79ca9; @synthesize=mNeedsToResumeRenderer
@property(assign) BOOL isPartOfWarmingUp;	// G=0x79c79; S=0x79c89; @synthesize=mIsPartOfWarmingUp
+ (id)effectLayerWithPlug:(id)plug andParameters:(id)parameters inSuperlayer:(id)superlayer;	// 0x79d41
- (id)initWithPlug:(id)plug andParameters:(id)parameters inSuperlayer:(id)superlayer;	// 0x7aa51
- (void)cleanup;	// 0x79cc9
- (void)updateSize;	// 0x7a959
- (void)renderAtTime:(double)time;	// 0x7a825
- (const XXStruct_ywZ0fB *)renderedImageAtTime:(double)time;	// 0x7a7ad
- (id)patchworkAtBeginning;	// 0x7a63d
- (id)patchworkAtEnd;	// 0x7a4cd
- (void)preactivate;	// 0x7a395
- (void)activate;	// 0x7a30d
- (void)depreactivate;	// 0x7a231
- (void)contextChanged;	// 0x7a16d
- (double)stillDurationFromTime:(double)time;	// 0x79c69
- (BOOL)changedBetweenTime:(double)time andTime:(double)time2 remainingStillDuration:(double)duration;	// 0x79c75
- (void)_fillInTiming:(XXStruct_VSauOA *)timing forTime:(double)time;	// 0x79f31
- (void)_setTargetSizeOfImageProviders;	// 0x79ee1
- (void)_preloadCompleted;	// 0x79e15
// declared property getter: - (BOOL)isPartOfWarmingUp;	// 0x79c79
// declared property setter: - (void)setIsPartOfWarmingUp:(BOOL)warmingUp;	// 0x79c89
// declared property getter: - (BOOL)needsToResumeRenderer;	// 0x79c99
// declared property setter: - (void)setNeedsToResumeRenderer:(BOOL)resumeRenderer;	// 0x79ca9
// declared property getter: - (BOOL)isPreloaded;	// 0x79cb9
@end
