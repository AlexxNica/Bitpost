//
//  MKBuys.h
//  Bitmessage
//
//  Created by Steve Dekorte on 3/13/14.
//  Copyright (c) 2014 Bitmarkets.org. All rights reserved.
//

#import "BMNode.h"
#import "JSONDB.h"

@interface MKBuys : BMNode

@property (strong, nonatomic) JSONDB *db;

@end
