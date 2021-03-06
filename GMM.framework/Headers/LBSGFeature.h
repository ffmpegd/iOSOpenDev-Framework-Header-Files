/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <GMM/XXUnknownSuperclass.h>

@class LBSGLatLng, NSString, LBSGAddress, LBSGRectangle;

@interface LBSGFeature : XXUnknownSuperclass {
	NSString *_name;	// 4 = 0x4
	int _featureType;	// 8 = 0x8
	LBSGAddress *_address;	// 12 = 0xc
	LBSGRectangle *_bounds;	// 16 = 0x10
	LBSGLatLng *_center;	// 20 = 0x14
}
@property(retain, nonatomic) LBSGLatLng *center;	// G=0x2c059; S=0x2c069; @synthesize=_center
@property(readonly, assign, nonatomic) BOOL hasCenter;	// G=0x2b945; 
@property(retain, nonatomic) LBSGRectangle *bounds;	// G=0x2c025; S=0x2c035; @synthesize=_bounds
@property(readonly, assign, nonatomic) BOOL hasBounds;	// G=0x2b92d; 
@property(retain, nonatomic) LBSGAddress *address;	// G=0x2bff1; S=0x2c001; @synthesize=_address
@property(assign, nonatomic) int featureType;	// G=0x2bfd1; S=0x2bfe1; @synthesize=_featureType
@property(retain, nonatomic) NSString *name;	// G=0x2bf9d; S=0x2bfad; @synthesize=_name
// declared property setter: - (void)setCenter:(id)center;	// 0x2c069
// declared property getter: - (id)center;	// 0x2c059
// declared property setter: - (void)setBounds:(id)bounds;	// 0x2c035
// declared property getter: - (id)bounds;	// 0x2c025
// declared property setter: - (void)setAddress:(id)address;	// 0x2c001
// declared property getter: - (id)address;	// 0x2bff1
// declared property setter: - (void)setFeatureType:(int)type;	// 0x2bfe1
// declared property getter: - (int)featureType;	// 0x2bfd1
// declared property setter: - (void)setName:(id)name;	// 0x2bfad
// declared property getter: - (id)name;	// 0x2bf9d
- (void)writeTo:(id)to;	// 0x2bdb9
- (BOOL)readFrom:(id)from;	// 0x2bad1
- (id)dictionaryRepresentation;	// 0x2b9cd
- (id)description;	// 0x2b95d
// declared property getter: - (BOOL)hasCenter;	// 0x2b945
// declared property getter: - (BOOL)hasBounds;	// 0x2b92d
- (void)dealloc;	// 0x2b8ad
@end
