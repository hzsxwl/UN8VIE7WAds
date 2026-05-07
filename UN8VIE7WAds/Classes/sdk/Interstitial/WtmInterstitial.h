#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class WtmAdRequest;
@protocol WtmInterstitialAdDelegate <NSObject>
@optional
-(void) wtmInterstitialAdDidLoad:(NSString *) placementId;
-(void) wtmInterstitialAdFailedToLoad:(NSString *) placementId withError:(NSError *)error;
-(void) wtmInterstitialAdDidStart;
-(void) wtmInterstitialAdDidFinish;
-(void) wtmInterstitialAdWasClicked;
-(void) wtmInterstitialAdDidClose;
-(void) wtmInterstitialAdWasSkipped;

@end

@interface WtmInterstitial : NSObject
@property (nonatomic, weak) id<WtmInterstitialAdDelegate> delegate;

- (instancetype)initWithAdRequest:(WtmAdRequest *)request;
- (BOOL)hasAdReady;
- (void)loadInterstitialAd;
- (void)presentFromRootViewController:(UIViewController *)rootViewController;
@end