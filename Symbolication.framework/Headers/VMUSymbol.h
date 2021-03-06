/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Symbolication/Symbolication-Structs.h>
#import <Symbolication/NSCopying.h>
#import <Symbolication/VMUAddressRange.h>
#import <Symbolication/VMUSymbol.h>

@class VMUSymbolOwner, NSString;

@interface VMUSymbol : VMUAddressRange <NSCopying> {
	NSString *_name;	// 20 = 0x14
	NSString *_mangledName;	// 24 = 0x18
	VMUSymbolOwner *_owner;	// 28 = 0x1c
	unsigned _flags;	// 32 = 0x20
}
@property(readonly, retain) NSString *name;	// G=0x16e74; converted property
@property(readonly, retain) NSString *mangledName;	// G=0x165a4; converted property
@property(readonly, retain) VMUSymbolOwner *owner;	// G=0x165e0; converted property
@property(readonly, assign) unsigned flags;	// G=0x165f4; converted property
+ (id)symbolWithName:(id)name mangledName:(id)name2 addressRange:(VMURange)range owner:(id)owner flags:(unsigned)flags;	// 0x16848
- (id)initWithName:(id)name mangledName:(id)name2 addressRange:(VMURange)range owner:(id)owner flags:(unsigned)flags;	// 0x1674c
// converted property getter: - (id)name;	// 0x16e74
// converted property getter: - (id)mangledName;	// 0x165a4
- (VMURange)addressRange;	// 0x165b8
// converted property getter: - (id)owner;	// 0x165e0
- (id)sourceInfos;	// 0x16e18
- (id)sourceInfoForAddress:(unsigned long long)address;	// 0x16d94
- (id)sourceInfosInAddressRange:(VMURange)addressRange;	// 0x16cec
- (id)text;	// 0x16c74
// converted property getter: - (unsigned)flags;	// 0x165f4
- (BOOL)isFunction;	// 0x16608
- (BOOL)isObjcMethod;	// 0x16620
- (BOOL)isJavaMethod;	// 0x16638
- (BOOL)isDyldStub;	// 0x16650
- (BOOL)isExternal;	// 0x16668
- (BOOL)isStab;	// 0x16680
- (BOOL)isDwarf;	// 0x16698
- (BOOL)isArm;	// 0x166b0
- (BOOL)isThumb;	// 0x166cc
- (int)compare:(id)compare;	// 0x166d4
- (BOOL)isEqualToSymbol:(id)symbol;	// 0x16abc
- (id)description;	// 0x16a2c
- (void)dealloc;	// 0x16988
- (id)copyWithZone:(NSZone *)zone;	// 0x168c8
@end

@interface VMUSymbol (Private)
- (void)setOwner:(id)owner;	// 0x16f30
@end
