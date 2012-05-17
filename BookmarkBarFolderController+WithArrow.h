#import "BookmarkBarFolderController.h"

@interface BookmarkBarFolderController (WithArrow)
- (BookmarkButton*)makeButtonWithArrowForNode:(const BookmarkNode*)node frame:(NSRect)frame;
@end
