#import <Foundation/Foundation.h>

typedef void(^NetworkCompletionHandler)(NSData * _Nullable data, NSURLResponse * _Nullable response, NSError * _Nullable error);

@interface WtmNetworkClient : NSObject

+ (void)sendPostRequest:(NSString *)urlString
               jsonData:(NSDictionary *)jsonData
             completion:(NetworkCompletionHandler)completion;

+ (void)fetchConfiguration:(NSString *) appId;

@end