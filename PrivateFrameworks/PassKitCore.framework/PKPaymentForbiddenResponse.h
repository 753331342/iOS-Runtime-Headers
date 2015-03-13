/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSNumber, NSString;

@interface PKPaymentForbiddenResponse : PKPaymentWebServiceResponse {
    NSNumber *_errorCode;
    NSString *_localizedDescription;
    NSString *_localizedTitle;
}

@property(retain) NSNumber * errorCode;
@property(retain) NSString * localizedDescription;
@property(retain) NSString * localizedTitle;

- (void)dealloc;
- (id)errorCode;
- (id)initWithData:(id)arg1;
- (id)localizedDescription;
- (id)localizedTitle;
- (void)setErrorCode:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;

@end