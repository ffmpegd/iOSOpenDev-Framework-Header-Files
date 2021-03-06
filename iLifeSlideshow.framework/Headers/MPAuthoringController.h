/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <iLifeSlideshow/XXUnknownSuperclass.h>
#import <iLifeSlideshow/MPAuthoringController.h>

@class MPWeighter, NSMutableDictionary, MPDocument, NSRecursiveLock;

@interface MPAuthoringController : XXUnknownSuperclass {
	BOOL _isAuthoring;	// 4 = 0x4
	MPDocument *_authoredDocument;	// 8 = 0x8
	unsigned _seed;	// 12 = 0xc
	NSRecursiveLock *_beatLock;	// 16 = 0x10
	NSMutableDictionary *_cachedROIInformation;	// 20 = 0x14
	MPWeighter *_weighter;	// 24 = 0x18
	MPWeighter *_transitionWeighter;	// 28 = 0x1c
	NSMutableDictionary *_stats;	// 32 = 0x20
	id _delegate;	// 36 = 0x24
	int _logLevel;	// 40 = 0x28
	double _logTiming;	// 44 = 0x2c
}
@property(assign) id delegate;	// G=0x2150d; S=0x2151d; converted property
+ (id)sharedController;	// 0x215b9
- (id)init;	// 0x23909
- (void)dealloc;	// 0x21531
// converted property getter: - (id)delegate;	// 0x2150d
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x2151d
- (unsigned)authorDocument:(id)document withOptions:(id)options;	// 0x22e5d
- (void)upgradeDocument:(id)document withOptions:(id)options;	// 0x22c45
- (id)effectContainersWithPaths:(id)paths forDocument:(id)document withOptions:(id)options;	// 0x22b2d
- (id)transitionFromOptions:(id)options;	// 0x22b0d
- (void)beatAlignLayers:(id)layers toAudioPlaylist:(id)audioPlaylist forDocument:(id)document withOptions:(id)options;	// 0x229e9
- (void)scaleDurationsInDocument:(id)document withOptions:(id)options;	// 0x22691
- (void)reconfigureImagesInDocument:(id)document withOptions:(id)options;	// 0x22681
- (void)reconfigureTitleEffectInDocument:(id)document withOptions:(id)options;	// 0x2266d
- (void)reconfigureColorSchemeInDocument:(id)document withOptions:(id)options;	// 0x2249d
- (BOOL)prepareDocumentForExport:(id)export withOptions:(id)options;	// 0x21ee9
- (void)prepareDocumentForPlayback:(id)playback withOptions:(id)options;	// 0x21885
- (BOOL)canDocumentFitToAudio:(id)audio withOptions:(id)options requiredAudioDuration:(double *)duration;	// 0x21625
- (BOOL)canScaleToAudioInDocument:(id)document withOptions:(id)options;	// 0x21601
@end

@interface MPAuthoringController (Internal)
- (void)cleanup;	// 0x23b19
- (void)setTitleTextToColor:(id)color inDocument:(id)document withOptions:(id)options;	// 0x2152d
- (void)setAuthoredDocument:(id)document;	// 0x23bbd
- (id)_collectVersionInformationFromStyle:(id)style;	// 0x24cb1
- (id)orderImages:(id)images withOptions:(id)options;	// 0x2b0a9
- (void)cacheROIInformationForImages:(id)images withOptions:(id)options;	// 0x2c3d1
- (id)effectsForImages:(id)images withOptions:(id)options;	// 0x250d5
- (int)bestCountFromClusterForEffectWithImages:(id)images atStartIndex:(int)startIndex withWeighter:(id)weighter usedIndex:(int *)index;	// 0x23c0d
- (void)populateWeighter:(id)weighter withEffects:(id)effects;	// 0x26319
- (void)populateWeighter:(id)weighter withTransitions:(id)transitions;	// 0x267c9
- (id)findEffectIDInWeighter:(id)weighter images:(id)images startingIndex:(int)index count:(int)count triesToFind:(int *)find;	// 0x2cab5
- (BOOL)determineIfSlideDisplayesForTheWholeDurationForEffect:(id)effect presetID:(id)anId atIndex:(int)index;	// 0x2cd85
- (void)scaleDurationsInLayer:(id)layer withOptions:(id)options;	// 0x23db5
- (void)scaleDurationsInEffectContainers:(id)effectContainers withOptions:(id)options;	// 0x26a11
- (void)matchDurationsForLayers:(id)layers withOptions:(id)options;	// 0x27251
- (void)fillDurationsForLayers:(id)layers withOptions:(id)options;	// 0x23ee5
- (void)checkForOffsetsForLayers:(id)layers withOptions:(id)options;	// 0x241a5
- (void)beatAlignLayer:(id)layer toBeats:(id)beats withOptions:(id)options;	// 0x24271
- (void)scaleLayerToMatchAudio:(id)matchAudio withOptions:(id)options;	// 0x27525
- (void)scaleLayerToMatchAudio:(id)matchAudio withBeats:(id)beats withOptions:(id)options;	// 0x27e09
- (void)beatAlignEffectContainers:(id)containers toBeats:(id)beats withOptions:(id)options;	// 0x2868d
- (void)configureFiltersInDocument:(id)document withOptions:(id)options;	// 0x2cf55
- (void)configureTransitionsInDocument:(id)document withOptions:(id)options;	// 0x2b8d5
- (id)chronologicalListOfFiles:(id)files;	// 0x2453d
- (id)createLayerWithImages:(id)images effects:(id)effects andOptions:(id)options;	// 0x2bd0d
- (id)effectContainersWithImages:(id)images effects:(id)effects andOptions:(id)options;	// 0x28d41
- (id)transitionFromOptions:(id)options firstEffectContainer:(id)container nextEffectContainer:(id)container3;	// 0x24571
- (id)createEffectToTransitionMapWithOptions:(id)options;	// 0x29615
- (id)loopTransitionFromOptions:(id)options;	// 0x24b65
- (id)exportTransitionFromOptions:(id)options;	// 0x24c2d
- (id)sortImagePaths:(id)paths toAspectRatiosInEffectPresetID:(id)effectPresetID withOptions:(id)options;	// 0x297c1
- (id)filtersForLayerFromOptions:(id)options;	// 0x2a969
- (id)filtersForEffectFromOptions:(id)options;	// 0x2b4a9
- (id)filtersForSlideFromOptions:(id)options;	// 0x2b6a1
- (id)frameFromOptions:(id)options;	// 0x2b7f5
- (id)createAudioPlayListFromAudioPaths:(id)audioPaths andOptions:(id)options;	// 0x2aae9
- (int)authorOrigamiDocument:(id)document withOptions:(id)options;	// 0x2ac35
- (int)authorLiveDocument:(id)document withOptions:(id)options;	// 0x2bf59
@end

@interface MPAuthoringController (Clustering)
- (void)setupClustersWithPaths:(id)paths withOptions:(id)options;	// 0x2d49d
- (void)cleanupClusters;	// 0x2d481
- (void)findUsableClustersForUserDefinedSlideOrderPresentation:(id)userDefinedSlideOrderPresentation inClusters:(id)clusters;	// 0x2d599
@end

@interface MPAuthoringController (Logging)
- (void)startLogging;	// 0x2d815
- (void)finishLogging;	// 0x2da11
@end

@interface MPAuthoringController (Manipulation_Internal)
- (void)_reorderImagesInDocument:(id)document withOptions:(id)options;	// 0x2f6dd
- (void)_addVideoPaths:(id)paths toEndOfLayer:(id)layer inDocument:(id)document withOptions:(id)options;	// 0x2eba1
- (id)_grabAndRemoveTitleEffectFromDocument:(id)document withOptions:(id)options;	// 0x2f499
- (void)_readdTitleEffect:(id)effect toDocument:(id)document withOptions:(id)options;	// 0x2f17d
- (void)_checkForEmptyLayersInDocument:(id)document;	// 0x2f235
- (int)_numberOfSlidesForOutroInLayer:(id)layer withOptions:(id)options;	// 0x2f2fd
- (int)_countOfEmptyContainersInIntroOfLayer:(id)layer withOptions:(id)options;	// 0x2f44d
@end

@interface MPAuthoringController (Manipulation)
- (void)moveSlidesFromIndicies:(id)indicies toIndex:(int)index inDocument:(id)document withOptions:(id)options;	// 0x2de71
- (void)insertVideoPaths:(id)paths atIndex:(int)index inDocument:(id)document withOptions:(id)options;	// 0x2e29d
- (void)removeSlidesAtIndicies:(id)indicies inDocument:(id)document withOptions:(id)options;	// 0x2e899
@end
