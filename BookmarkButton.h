#import <Cocoa/Cocoa.h>
#import "BookmarkButtonCell.h"

@interface BookmarkButton
- (BOOL) isFolder;
- (BookmarkButtonCell*) cell;
@end
