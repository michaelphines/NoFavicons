#import "BookmarkButtonCell.h"
#import "BookmarkButtonCell+WithoutImage.h"

@implementation BookmarkButtonCell (WithoutImage)

- (void) setBookmarkCellText: (NSString*)title withoutImage:(NSImage*)image
{
    [self setBookmarkCellText: title withoutImage:image];
    if (![self isFolderButtonCell])
        [self setImagePosition:NSNoImage];
}

@end
