#import "BookmarkNode.h"
#import <Cocoa/Cocoa.h>

@interface BookmarkButtonCell
+ (id) class;
- (BookmarkNode*) bookmarkNode;
- (id) controlView;
- (BOOL) isFolderButtonCell;
- (void) setAlignment: (NSUInteger)textAlignment;
- (void) setBookmarkCellText: (NSString*)title image:(NSImage*)image;
- (void) setDrawFolderArrow: (BOOL)drawArrow;
- (void) setImagePosition: (NSUInteger)imagePosition;
- (void) setTitle: (NSString*)title;
- (NSString*) title;
@end
