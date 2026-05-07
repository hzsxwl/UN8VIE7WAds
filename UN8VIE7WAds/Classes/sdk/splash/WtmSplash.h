#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class WtmAdRequest;
@protocol WtmSplashAdDelegate <NSObject>
@optional
-(void) wtmSplashAdDidDisplay;
-(void) wtmSplashAdDisplayFailed:(NSString *) placementId withError:(NSError *)error;
-(void) wtmSplashAdDidLoad:(NSString *) placementId;
-(void) wtmSplashAdFailedToLoad:(NSString *) placementId withError:(NSError *)error;
-(void) wtmSplashAdWasClicked;
-(void) wtmSplashAdDidClose;
-(void) wtmSplashAdWasSkipped;

@end

@interface WtmSplash : NSObject
@property (nonatomic, weak) id<WtmSplashAdDelegate> delegate;
@property (nonatomic, weak) UIViewController *rootViewController;

- (instancetype)initWithAdRequest:(WtmAdRequest *)request
                            extra:(NSDictionary * _Nullable)extra;
- (instancetype)initWithAdRequest:(WtmAdRequest *)request;
- (BOOL)hasAdReady;
-(void)loadAndShowAd;
- (void)loadAd;
- (void)showAdInWindow:(UIWindow *)window;
@end