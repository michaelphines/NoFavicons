#import <Cocoa/Cocoa.h>

@interface NoFavicons : NSObject
+ (void) load;
+ (void) swizzle:(SEL)oldSelector with:(SEL)newSelector inClass:(Class)klass;
+ (void) swizzleBookmarkBarFolderControllerWithArrow;
+ (void) swizzleBookmarkCellWithoutImage;
@end

