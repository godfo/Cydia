/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/XXUnknownSuperclass.h>


@interface AVFileProcessor : XXUnknownSuperclass {
@private
	float _percentComplete;	// 4 = 0x4
}
+ (id)fileProcessor;	// 0x18271
- (id)processPurchasedItem:(id)item withAttributes:(id)attributes;	// 0x18201
- (id)processPurchasedItem:(id)item withAttributes:(id)attributes progressBlock:(id)block;	// 0x18229
- (id)processPurchasedItem:(id)item withAttributes:(id)attributes resultInfo:(id *)info;	// 0x1824d
- (id)processPurchasedItem:(id)item withAttributes:(id)attributes resultInfo:(id *)info progressBlock:(id)block;	// 0x18449
- (id)rentalInfo:(id)info;	// 0x18305
- (id)sinfsFromFilePath:(id)filePath;	// 0x182dd
- (id)sinfInfoFromFilePath:(id)filePath;	// 0x182b5
@end