#import <Cocoa/Cocoa.h>

@interface NoFavicons : NSObject
+ (void) load;
+ (void) swizzleBookmarkCellClassWithoutImage;
@end
