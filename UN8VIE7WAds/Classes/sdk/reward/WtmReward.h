#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class WtmAdRequest;
@protocol WtmRewardAdDelegate <NSObject>

@required

-(void) wtmDidReceiveReward:(NSString *_Nonnull) transId;

@optional
-(void) wtmRewardAdDidLoad:(NSString *) placementId;
-(void) wtmRewardAdFailedToLoad:(NSString *) placementId withError:(NSError *)error;
-(void) wtmRewardAdDidStart;
-(void) wtmRewardAdDidFinish;
-(void) wtmRewardAdWasClicked;
-(void) wtmRewardAdDidClose;
-(void) wtmRewardAdWasSkipped;
-(void) wtmRewardAdPlayError:(NSString *) placementId error:(NSError *)error;

@end

@interface WtmReward : NSObject
@property (nonatomic, weak) id<WtmRewardAdDelegate> delegate;

- (instancetype)initWithAdRequest:(WtmAdRequest *)request;
- (BOOL)hasAdReady;
- (void)loadRewardAd;
- (void)presentFromRootViewController:(UIViewController *)rootViewController options:(NSDictionary<NSString *, NSString *> * _Nullable)options;
@end