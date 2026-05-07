#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class WtmAdRequest;
@class WtmBanner;

NS_ASSUME_NONNULL_BEGIN

@protocol WtmBannerDelegate <NSObject>

@optional

- (void)wtmBannerDidRefresh:(WtmBanner *)bannerAdView;

- (void)wtmBannerRefreshFailed:(NSError *)error;

- (void)wtmBannerAdDidLoad:(WtmBanner *)bannerAdView;

- (void)wtmBannerAdLoadFailed:(NSError *)error;

- (void)wtmBannerAdDidExpose;

- (void)wtmBannerAdWasClicked;

- (void)wtmAppWillLeave;

- (void)wtmFullScreenWillOpen;
- (void)wtmFullScreenWasClosed;
- (void)wtmBannerAdWasRemoved;
@end

@interface WtmBanner : NSObject

@property (nonatomic, weak) id<WtmBannerDelegate> delegate;

@property (nonatomic, weak) UIViewController *viewController;

@property (nonatomic) BOOL animated;

@property (nonatomic, assign) CGSize adSize;
@property(nullable, nonatomic,copy) UIColor *backgroundColor;

- (instancetype)initWithAdRequest:(WtmAdRequest *)request;

- (instancetype)initWithAdRequest:(WtmAdRequest *)request
                       expectSize:(CGSize)expectSize;

- (void)loadBannerAd;
- (BOOL)hasAdReady;
- (UIView *)getBannerView;
@end
NS_ASSUME_NONNULL_END