#import <Foundation/Foundation.h>

typedef NS_ENUM (NSInteger, WtmConsentStatus) {
    WtmConsentUnknown = 0,
    WtmConsentAccepted,
    WtmConsentDenied,
};

@interface WtmAdService : NSObject
+(instancetype) sharedInstance;
-(void)setupWithAppId:(NSString *)appId;
-(void)enableDebugMode:(BOOL)enable;
-(void)setConsentStatus:(WtmConsentStatus)status;
-(void) preloadAds:(NSString *)rewardId interstitialId:(NSString *)interstitialId fullScreenId:(NSString *)fullScreenId userId:(NSString *)userId;
@end