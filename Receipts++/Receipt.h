//
//  Receipt.h
//  Receipts++
//
//  Created by Chelsea Liu on 6/30/15.
//  Copyright (c) 2015 Chelsea Liu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Label;

@interface Receipt : NSManagedObject

@property (nonatomic, retain) NSString * amount;
@property (nonatomic, retain) NSString * descript;
@property (nonatomic, retain) NSDate * timeStamp;
@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSSet *labels;
@end

@interface Receipt (CoreDataGeneratedAccessors)

- (void)addLabelsObject:(Label *)value;
- (void)removeLabelsObject:(Label *)value;
- (void)addLabels:(NSSet *)values;
- (void)removeLabels:(NSSet *)values;

@end
