#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class WtmAdRequest;
@class WtmNativeAd;
@class WtmNativeAdManager;

NS_ASSUME_NONNULL_BEGIN
@protocol WtmNativeAdManagerDelegate <NSObject>

@optional
- (void)wtmNativeAdsLoadCompleted:(WtmNativeAdManager *)nativeAdsManager;
- (void)wtmNativeAdsLoadEncounteredError:(NSError *)error;

@end


@interface WtmNativeAdManager : NSObject

@property (nonatomic, weak) id<WtmNativeAdManagerDelegate> delegate;

@property (nonatomic, assign, readwrite) CGSize adSize;

- (instancetype)initWithAdRequest:(WtmAdRequest *)request;

- (void)loadNativeAdsWithCount:(NSInteger)count;

- (NSArray<WtmNativeAd *> * _Nullable)getAllNativeAds;

@end

NS_ASSUME_NONNULL_END