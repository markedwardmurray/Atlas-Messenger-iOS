//
//  LSRegistrationViewController.h
//  QRCodeTest
//
//  Created by Kevin Coleman on 2/15/15.
//  Copyright (c) 2015 Layer. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <UIKit/UIKit.h>
#import "ATLMApplicationController.h"

/**
 @abstract The `ATLMRegistrationViewController` presents a simple interface for registering a user with a user name. 
 */
@interface ATLMRegistrationViewController : UIViewController

/**
 @abstract The controller object for the application.
 */
@property (nonatomic) ATLMApplicationController *applicationController;

@end
