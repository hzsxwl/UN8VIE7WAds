#import <Foundation/Foundation.h>
#import <WindMillSDK/WindMillSDK.h>

@interface WtmNativeAd : NSObject
- (instancetype)initWithNativeAd:(WindMillNativeAd *) ad;
- (WindMillNativeAd *)getNativeAd;
@end