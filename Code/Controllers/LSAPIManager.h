//
//  LSAPIManager.h
//  LayerSample
//
//  Created by Kevin Coleman on 6/12/14.
//  Copyright (c) 2014 Layer, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <LayerKit/LayerKit.h>
#import "LSUser.h"
#import "LSPersistenceManager.h"

extern NSString *const LSUserDidAuthenticateNotification;
extern NSString *const LSUserDidDeauthenticateNotification;

/**
 @abstract The `LSAPIManager` class provides authentication with the backend and Layer and an interface for interacting with the JSON API.
 */
@interface LSAPIManager : NSObject

///-----------------------------
/// @name Initializing a Manager
///-----------------------------

+ (instancetype)managerWithBaseURL:(NSURL *)baseURL layerClient:(LYRClient *)layerClient;

/**
 @abstract The current authenticated session or `nil` if not yet authenticated.
 */
@property (nonatomic, readonly) LSSession *authenticatedSession;
@property (nonatomic, readonly) NSURLSessionConfiguration *authenticatedURLSessionConfiguration;

///------------------------------------
/// @name Managing Authentication State
///------------------------------------

- (void)registerUser:(LSUser *)user completion:(void(^)(LSUser *user, NSError *error))completion;
- (void)authenticateWithEmail:(NSString *)email password:(NSString *)password completion:(void(^)(LSUser *user, NSError *error))completion;
- (void)resumeSession:(LSSession *)session completion:(void(^)(LSUser *user, NSError *error))completion;
- (void)deauthenticateWithCompletion:(void(^)(BOOL success, NSError *error))completion;

///-------------------------
/// @name Accessing Contacts
///-------------------------

- (void)loadContactsWithCompletion:(void(^)(NSSet *contacts, NSError *error))completion;

@end
