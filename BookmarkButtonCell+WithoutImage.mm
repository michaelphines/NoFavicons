#import <CommonCrypto/CommonDigest.h>
#import "BookmarkNode.h"
#import "BookmarkButton.h"
#import "BookmarkButtonCell.h"
#import "BookmarkButtonCell+WithoutImage.h"

@implementation BookmarkButtonCell (WithoutImage)

NSString* const FolderImageHash = @"c3706d5b34a4b336f1a08b2819a01698c94c92ff";

- (void) setBookmarkCellText: (NSString*)title withoutImage:(NSImage*)image
{
  if ([self imageIsFolder:image])
  {
    title = [NSString stringWithFormat:@"%@ ▾", title];
  }
  [self setBookmarkCellText: title withoutImage:image];
  
  if (![self isFolderButtonCell])
    [self setImagePosition:NSNoImage];
}

- (BOOL) imageIsFolder: (NSImage*)image
{
  NSData* data = [image TIFFRepresentation];
  uint8_t digest[CC_SHA1_DIGEST_LENGTH];
  CC_SHA1(data.bytes, data.length, digest);
  NSMutableString* sha1 = [NSMutableString stringWithCapacity:CC_SHA1_DIGEST_LENGTH * 2];
  
  for(int i = 0; i < CC_SHA1_DIGEST_LENGTH; i++)
    [sha1 appendFormat:@"%02x", digest[i]];

  return [sha1 isEqualToString:FolderImageHash];
}

@end
