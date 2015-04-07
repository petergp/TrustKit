//
//  TrustKit+Private.h
//  TrustKit
//
//  Created by Eric on 30/03/15.
//  Copyright (c) 2015 Data Theorem. All rights reserved.
//

#import <UIKit/UIKit.h>

#ifndef TrustKit_TrustKit_Private____FILEEXTENSION___
#define TrustKit_TrustKit_Private____FILEEXTENSION___


BOOL verifyPublicKeyPin(SecTrustRef serverTrust, NSString *serverName, NSDictionary *publicKeyPins);
NSDictionary *convertPublicKeyPinsFromStringToData(NSDictionary *publicKeyPins);


@interface TrustKit(Private)

+ (void) resetSslPins;

@end

@interface TKSettings : NSObject

+ (NSData *)defaultRsaAsn1Header;
+ (void)setDefaultRsaAsn1Header:(NSData *)defaultASN1Header;

@end


#endif
