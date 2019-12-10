/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/XXUnknownSuperclass.h>


@interface GEODirectionsProvider : XXUnknownSuperclass {
	BOOL _isLoading;	// 4 = 0x4
	int _requestType;	// 8 = 0x8
	id _finishedHandler;	// 12 = 0xc
	id _errorHandler;	// 16 = 0x10
}
@property(copy, nonatomic) id errorHandler;	// G=0x19931; S=0x19941; @synthesize=_errorHandler
@property(copy, nonatomic) id finishedHandler;	// G=0x198fd; S=0x1990d; @synthesize=_finishedHandler
@property(assign, nonatomic) BOOL isLoading;	// G=0x198dd; S=0x198ed; @synthesize=_isLoading
+ (id)providerHostname;	// 0x197bd
+ (unsigned short)providerID;	// 0x197b9
// declared property setter: - (void)setErrorHandler:(id)handler;	// 0x19941
// declared property getter: - (id)errorHandler;	// 0x19931
// declared property setter: - (void)setFinishedHandler:(id)handler;	// 0x1990d
// declared property getter: - (id)finishedHandler;	// 0x198fd
// declared property setter: - (void)setIsLoading:(BOOL)loading;	// 0x198ed
// declared property getter: - (BOOL)isLoading;	// 0x198dd
- (void)providerDidCancel;	// 0x198c9
- (void)providerReceivedErrorCode:(int)code;	// 0x19829
- (void)providerReceivedResponse:(id)response;	// 0x197c9
- (void)cancelProviderRequest;	// 0x197c5
- (void)startProviderWithRequest:(id)request;	// 0x197c1
- (void)cancelRequest;	// 0x197a9
- (void)startRequest:(id)request finished:(id)finished error:(id)error;	// 0x196f5
- (void)requestCompleted;	// 0x196ad
- (void)dealloc;	// 0x19655
@end