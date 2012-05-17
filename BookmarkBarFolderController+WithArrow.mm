#import <Cocoa/Cocoa.h>
#import "BookmarkNode.h"
#import "BookmarkButton.h"
#import "BookmarkBarFolderController+WithArrow.h"

@implementation BookmarkBarFolderController (WithArrow)

- (BookmarkButton*)makeButtonWithArrowForNode:(const BookmarkNode*)node frame:(NSRect)frame {
    BookmarkButton* button = [self makeButtonWithArrowForNode:node frame:frame];
    BookmarkButtonCell* cell = [button cell];
    
    NSString* title = [cell title];
    NSString* titleWithDownArrow = [NSString stringWithFormat:@"%@ \u25BE", title];
    
    [cell setTitle:titleWithDownArrow];
    
    return button;
}

@end
