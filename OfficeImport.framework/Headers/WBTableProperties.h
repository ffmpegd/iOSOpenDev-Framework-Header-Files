/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/XXUnknownSuperclass.h>
#import <OfficeImport/WBTableProperties.h>


__attribute__((visibility("hidden")))
@interface WBTableProperties : XXUnknownSuperclass {
}
+ (void)readFrom:(id)from wrdProperties:(WrdTableProperties *)properties tracked:(WrdTableProperties *)tracked properties:(id)properties4;	// 0x13f1b9
@end

@interface WBTableProperties (Private)
+ (id)formattingChangeDate:(const WrdDateTime *)date;	// 0x26e679
+ (void)mapWordProperties:(WrdTableProperties *)properties reader:(id)reader toProperties:(id)properties3;	// 0x13f2ad
@end
