//
//  PIOInAppMessage.h
//  PushIOManager
//
//  Copyright © 2018 Oracle Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PIOInAppMessage : NSObject

@property(nonatomic, strong) NSString *engagementID;

@property(nonatomic, strong) NSString *startTimestamp;

@property(nonatomic, strong) NSString *expiryTimestamp;

@property(nonatomic, strong) NSString *eventType;

@property(nonatomic, strong) NSURL *actionURL;


/**
 Convenience constructor.

 @param engagementID Engagement identifier.
 @param startTimestamp String value of message start date/time.
 @param expiryTimestamp String value of message expiry date/time.
 @param eventType inApp event type i.e.: $ExplicitAppOpen etc.
 @param actionURL URL to contains the actionable url value. i.e.: pio-AppID://style=fullscreen&url=formlinkURL OR pio-AppID://style=fullscreen&url=formLinkHTML.
 @return Instance of PIOInAppMessage.
 */
-(instancetype) initWithEngagementID:(NSString *)engagementID
                      startTimestamp:(NSString *)startTimestamp expiryTimestamp:(NSString *)expiryTimestamp eventType:(NSString *)eventType actionURL:(NSString *)actionURL;

@end
