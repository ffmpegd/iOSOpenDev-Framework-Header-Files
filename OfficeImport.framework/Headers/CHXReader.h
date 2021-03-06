/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CHXReader.h>
#import <OfficeImport/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface CHXReader : XXUnknownSuperclass {
}
+ (id)readFromParentNode:(xmlNode *)parentNode drawingState:(id)state;	// 0x1dceb1
@end

@interface CHXReader (Private)
+ (id)chartPartWithParentNode:(xmlNode *)parentNode drawingState:(id)state;	// 0x1dd5b9
+ (id)externalDataRelationshipWithChartPart:(id)chartPart;	// 0x1dd695
+ (id)externalDataWithChartPart:(id)chartPart relationship:(id)relationship;	// 0x1dd739
@end
