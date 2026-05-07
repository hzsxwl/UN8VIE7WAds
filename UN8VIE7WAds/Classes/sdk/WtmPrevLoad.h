#import <Foundation/Foundation.h>
#import <WindMillSDK/WindMillSDK.h>

@interface WtmAdPreloader : NSObject
+(instancetype) sharedInstance;
-(void) startPreloading:(NSString *)rewardId interstitialId:(NSString *)interstitialId fullScreenId:(NSString *)fullScreenId userId:(NSString *)userId;
-(WindMillRewardVideoAd *) getPreloadedRewardAd;
-(WindMillIntersititialAd *) getPreloadedInterstitialAd;
-(WindMillIntersititialAd *) getPreloadedFullScreenAd;
-(NSString *) getInterstitialAdId;
-(NSString *) getFullScreenAdId;
@end