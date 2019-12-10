/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKFixedImageMediaObject.h>


@interface CKAnimatedImageMediaObject : CKFixedImageMediaObject {
}
+ (id)mimeTypesToFileExtensions;	// 0x5f1e1
- (BOOL)shouldGeneratePreviewInBackground;	// 0x5f1d9
- (id)newPreview:(int)preview highlight:(BOOL)highlight;	// 0x5f225
- (Class)balloonPreviewClassWithPreviewData:(id)previewData;	// 0x5f4ed
- (float)balloonHeightWithPreviewData:(id)previewData;	// 0x5f435
- (void)configureBalloon:(id)balloon withPreviewData:(id)previewData;	// 0x5f279
- (BOOL)_imageHasAnimation;	// 0x5f1dd
@end