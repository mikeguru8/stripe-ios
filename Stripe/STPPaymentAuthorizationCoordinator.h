//
//  STPPaymentAuthorizationCoordinator.h
//  Stripe
//
//  Created by Jack Flintermann on 3/28/16.
//  Copyright © 2016 Stripe, Inc. All rights reserved.
//

#import "STPBaseCoordinator.h"
#import <PassKit/PassKit.h>

@class STPAddress;

@interface STPPaymentAuthorizationCoordinator : STPBaseCoordinator

- (instancetype)initWithNavigationController:(UINavigationController *)navigationController
                              paymentRequest:(PKPaymentRequest *)paymentRequest
                                   apiClient:(STPAPIClient *)apiClient
                              apiAdapter:(id<STPBackendAPIAdapter>)apiAdapter
                                    delegate:(id<STPCoordinatorDelegate>)delegate;

@end
