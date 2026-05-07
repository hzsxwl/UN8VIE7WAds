#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class WtmNativeAdView;
@class WtmNativeAd;
@protocol WtmNativeAdViewDelegate <NSObject>
@optional
- (void)wtmNativeAdViewRenderCompleted:(WtmNativeAdView *)nativeExpressAdView;
- (void)wtmNativeAdViewRenderFailed:(NSError *)error;
- (void)wtmNativeAdViewWillExpose;
- (void)wtmNativeAdViewWasClicked;
- (void)wtmNativeAdDisliked:(NSString *) reason;

@end
@interface WtmNativeAdView : NSObject
+ (instancetype) createAdView;

@property(nonatomic) CGRect frame;
@property (nonatomic, weak) id<WtmNativeAdViewDelegate> delegate;
@property (nonatomic, weak) UIViewController *viewController;
- (void)updateWithNativeAd:(WtmNativeAd *)nativeAd;
- (UIView *)getAdView;
@end