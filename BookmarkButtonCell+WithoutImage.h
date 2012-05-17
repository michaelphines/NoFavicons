#import "BookmarkButtonCell.h"

@interface BookmarkButtonCell (WithoutImage)
- (void) setBookmarkCellText: (NSString*)title withoutImage:(NSImage*)image;
- (BOOL) imageIsFolder: (NSImage*)image;
@end
