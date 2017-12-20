//
//  IDBridge.h
//  IndoorKit
//
//  Created by Nikita Smolyanchenko on 11/21/17.
//  Copyright © 2017 Spreo LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
@class IDPoi;

@interface IDBridge : NSObject

@property (nonatomic, strong) NSString *identifier;
@property (nonatomic, strong) NSString *firstEntranceId;
@property (nonatomic, strong) NSString *secondEntranceId;

- (BOOL)containsPoiWithId:(NSString *)poiId;
- (NSString *)bridgePairForPoiId:(NSString *)poiId;

@end
