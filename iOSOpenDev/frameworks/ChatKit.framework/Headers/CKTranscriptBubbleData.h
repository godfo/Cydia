/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKTranscriptBubbleData.h>
#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/XXUnknownSuperclass.h>

@class NSDate, NSMutableArray;

@interface CKTranscriptBubbleData : XXUnknownSuperclass {
	NSMutableArray *_bubbleDataArray;	// 4 = 0x4
	float _balloonWidth;	// 8 = 0x8
	NSDate *_nextEligibleTimestamp;	// 12 = 0xc
}
@property(assign, nonatomic) float balloonWidth;	// G=0x475ed; S=0x475fd; @synthesize=_balloonWidth
+ (Class)balloonClassForMessagePart:(id)messagePart;	// 0x47c51
+ (BOOL)messagePartRequiresURLification:(id)lification;	// 0x47d41
+ (Class)balloonClassForFlags:(unsigned long)flags;	// 0x47d85
+ (Class)balloonClassForMessage:(id)message;	// 0x47dc5
+ (unsigned long)_processFlags:(unsigned long)flags forText:(id)text;	// 0x485c9
- (void)dealloc;	// 0x48569
- (int)count;	// 0x4760d
- (id)bubbleDataForIndex:(int)index;	// 0x4a739
- (id)data:(id)data forIndex:(int)index;	// 0x4a711
- (BOOL)bubbleData:(id)data isEqualToIndex:(int)index;	// 0x4a6d9
- (id)deleteMessageAtIndex:(int)index;	// 0x4a1c5
- (void)_addRow:(int)row toRows:(id)rows;	// 0x4762d
- (id)appendBubbleDataForMessage:(id)message;	// 0x49f19
- (id)removeBubbleDataForMessage:(id)message;	// 0x47671
- (void)clearBubbleData;	// 0x476ad
- (void)_createArrayIfNeeded;	// 0x47701
- (int)_lastIndexExcludingTypingIndicator;	// 0x4774d
- (void)_createBubbleInfoForImage:(id)image part:(id)part subject:(id)subject appendedRows:(id)rows;	// 0x49c0d
- (int)_appendTextMessage:(id)message part:(id)part size:(CGSize)size text:(id)text subject:(id)subject bubbleClass:(Class)aClass messageContinuation:(BOOL)continuation;	// 0x499c5
- (int)_appendPlaceholderSubject:(id)subject forMessage:(id)message size:(CGSize)size;	// 0x4779d
- (void)_createSegmentArrayForText:(id)text isSubject:(BOOL)subject height:(unsigned *)height message:(id)message part:(id)part messageContinuation:(BOOL)continuation appendedRows:(id)rows;	// 0x49595
- (void)_createBubbleInfoForTextMessage:(id)textMessage part:(id)part subject:(id)subject appendedRows:(id)rows;	// 0x492c9
- (int)_appendDateForMessageIfNeeded:(id)messageIfNeeded;	// 0x477f9
- (int)_appendServiceForMessageIfNeeded:(id)messageIfNeeded;	// 0x47861
- (int)_appendMessageStatusForMessageIfNeeded:(id)messageIfNeeded;	// 0x490e1
- (int)_appendEntity:(id)entity;	// 0x48fd1
- (int)_appendDate:(id)date;	// 0x48f15
- (int)_appendService:(id)service;	// 0x48e59
- (int)insertMessageStatus:(int)status forMessage:(id)message date:(id)date;	// 0x48b15
- (id)removeMessageStatus:(int)status forMessage:(id)message andThisStatusForEverythingElse:(int)everythingElse;	// 0x48821
- (int)typingIndicatorRow;	// 0x47991
- (BOOL)isShowingTypingIndicator;	// 0x479d1
- (int)removeTypingIndicator;	// 0x486c9
- (int)appendTypingIndicatorForEntity:(id)entity;	// 0x485f5
- (int)_appendEntityForMessageIfNeeded:(id)messageIfNeeded;	// 0x479f5
- (void)_setupNextEligibleTimestamp:(id)timestamp;	// 0x47b15
- (BOOL)_shouldShowTimestampForDate:(id)date;	// 0x47bf1
// declared property getter: - (float)balloonWidth;	// 0x475ed
// declared property setter: - (void)setBalloonWidth:(float)width;	// 0x475fd
@end

@interface CKTranscriptBubbleData (ConvenienceAndClarity)
- (int)typeAtIndex:(int)index;	// 0x47e59
- (id)entityAtIndex:(int)index;	// 0x47e91
- (id)serviceAtIndex:(int)index;	// 0x47eb1
- (int)messageStatusAtIndex:(int)index;	// 0x47ed1
- (id)messageStatusMessageAtIndex:(int)index;	// 0x47f25
- (id)messageStatusStringAtIndex:(int)index;	// 0x47f69
- (id)messageStatusTimestampAtIndex:(int)index;	// 0x481e5
- (id)messageAtIndex:(int)index;	// 0x48229
- (id)dateAtIndex:(int)index;	// 0x48249
- (id)partAtIndex:(int)index;	// 0x48269
- (id)textAtIndex:(int)index;	// 0x48289
- (BOOL)textNeedsURLificationAtIndex:(int)index;	// 0x482a9
- (id)subjectAtIndex:(int)index;	// 0x482e1
- (int)heightAtIndex:(int)index;	// 0x48301
- (CGSize)sizeAtIndex:(int)index;	// 0x4a7cd
- (Class)balloonClassAtIndex:(int)index;	// 0x48339
- (BOOL)isSubjectPlaceholderAtIndex:(int)index;	// 0x48359
- (BOOL)isMessageContinuationAtIndex:(int)index;	// 0x483ad
- (unsigned)indexForMessageRowID:(int)messageRowID partRowID:(int)anId;	// 0x4a825
- (unsigned)lastIndexForMessage:(id)message;	// 0x483e5
- (int)indexForMessage:(id)message;	// 0x48475
- (int)indexForPart:(id)part;	// 0x484fd
@end