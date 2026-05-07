#import <Foundation/Foundation.h>
@interface WtmAdRequest : NSObject

@property (nonatomic,copy) NSString *userId;

@property (nonatomic,copy) NSString *pid;

@property (nonatomic,strong) NSDictionary<NSString *, NSString *> *options;

+ (instancetype)adRequest;

@end