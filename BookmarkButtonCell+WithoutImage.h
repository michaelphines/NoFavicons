#import "BookmarkButtonCell.h"

@interface NSObject (BookmarkButtonCellWithoutImage)
- (void) setBookmarkCellText: (NSString*)title withoutImage:(NSImage*)image;
- (BOOL) imageIsFolder: (NSImage*)image;
@end
