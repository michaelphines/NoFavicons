#import <Cocoa/Cocoa.h>

@interface BookmarkButtonCell
+ (id) class;
- (BOOL) isFolderButtonCell;
- (void) setTitle: (NSString*)title;
- (void) setImagePosition: (NSUInteger)imagePosition;
- (void) setAlignment: (NSUInteger)textAlignment;
- (void) setBookmarkCellText: (NSString*)title image:(NSImage*)image;
@end
