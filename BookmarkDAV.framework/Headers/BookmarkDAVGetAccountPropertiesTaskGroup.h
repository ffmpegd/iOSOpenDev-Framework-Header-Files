/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

#import <BookmarkDAV/XXUnknownSuperclass.h>

@class NSSet;

@interface BookmarkDAVGetAccountPropertiesTaskGroup : XXUnknownSuperclass {
@private
	NSSet *_bookmarkHomes;	// 76 = 0x4c
}
@property(readonly, assign) NSSet *bookmarkHomes;	// G=0x1bad; @synthesize=_bookmarkHomes
// declared property getter: - (id)bookmarkHomes;	// 0x1bad
- (void)_setPropertiesFromParsedResponses:(id)parsedResponses;	// 0x1811
- (id)homeSet;	// 0x1801
- (id)_copyAccountPropertiesPropFindElements;	// 0x175d
- (id)description;	// 0x16e1
- (void)dealloc;	// 0x1695
@end
