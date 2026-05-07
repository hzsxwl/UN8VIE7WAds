#import "WtmDto.h"
#import <Foundation/Foundation.h>

@interface WtmStorage : NSObject
@property (nonatomic) int displayCount;
+(instancetype) sharedInstance;
-(void) addStrategyData:(NSString *)adsId dataObject:(WtmDataObject *) dataObject;
-(WtmDataObject *) getStrategyData: (NSString *)adsId;
@end
