#import <Foundation/Foundation.h>

@interface WtmDataObject : NSObject
  
@property (nonatomic, copy) NSString *adsId;
@property (nonatomic, copy) NSString *nextAdId;
@property (nonatomic, copy) NSString *nextAdType;
@property (nonatomic) int displayPoints;
@property (nonatomic) int downloadRate;
@property (nonatomic, copy) NSString *originalAppId;
@property (nonatomic, copy) NSString *nnAppId;
@property (nonatomic, copy) NSString *nnAdCode;

@end
