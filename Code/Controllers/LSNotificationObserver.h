//
//  LSNotificationObserver.h
//  LayerSample
//
//  Created by Kevin Coleman on 7/11/14.
//  Copyright (c) 2014 Layer, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <LayerKit/LayerKit.h>

@class LSNotificationObserver;

@protocol LSNotificationObserverDelegate <NSObject>

@optional

- (void)observerWillChangeContent:(LSNotificationObserver *)observer;

- (void)observer:(LSNotificationObserver *)observer didChangeObject:(id)object atIndex:(NSUInteger)index forChangeType:(LYRObjectChangeType)changeType newIndexPath:(NSUInteger)newIndex;

- (void)observerDidChangeContent:(LSNotificationObserver *)observer;

@end

@interface LSNotificationObserver : NSObject

@property (nonatomic, weak) id<LSNotificationObserverDelegate>delegate;

- (id) initWithClient:(LYRClient *)layerClient conversations:(NSArray *)conversations;

- (void)setConversations:(NSArray *)conversations;

@end
