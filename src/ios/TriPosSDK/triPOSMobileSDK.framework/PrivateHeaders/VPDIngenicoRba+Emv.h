//
//  VPDIngenicoRba+Emv.h
//  PoiDevice
//
//  Created by Chance Ulrich on 4/19/16.
//  Copyright © 2018 Worldpay, LLC. and/or its affiliates. All rights reserved.
//

#ifndef VPDIngenicoRba_Emv_h
#define VPDIngenicoRba_Emv_h

#import "VPDEmv.h"
#import "VPDIngenicoRba.h"
#import "VPDIngenicoRba+CardInput.h"
#import "VTCTlvUtility.h"

#ifndef DOXYGEN_SHOULD_SKIP_THIS

@interface VPDIngenicoRba(Emv) <VPDEmv>

-(BOOL)setEmvConfigFile:(NSString *)fileName contactless:(BOOL)contactless error: (NSError **)error;

typedef void (^VPDIngenicoRbaEmvResponseWithTagsCompletionHandler)(NSInteger messageId, VTCTlvCollection tags);

-(void)handleIccCardInput:(VTPTransactionType)transactionType purchaseAmount:(NSDecimalNumber *)purchaseAmount otherAmount:(NSDecimalNumber *)otherAmount completionHandler:(VPDCardInputCompletionHandler)completionHandler errorHandler:(VPDErrorHandler)errorHandler;

@end

#endif /* !DOXYGEN_SHOULD_SKIP_THIS */

#endif /* VPDIngenicoRba_Emv_h */
