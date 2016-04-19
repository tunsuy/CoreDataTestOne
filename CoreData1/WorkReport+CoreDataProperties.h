//
//  WorkReport+CoreDataProperties.h
//  CoreData1
//
//  Created by tunsuy on 2/4/16.
//  Copyright © 2016年 tunsuy. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "WorkReport.h"

NS_ASSUME_NONNULL_BEGIN

@interface WorkReport (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *content;
@property (nullable, nonatomic, retain) NSDate *reportDate;
@property (nullable, nonatomic, retain) NSNumber *type;
@property (nullable, nonatomic, retain) NSString *creater;

@end

NS_ASSUME_NONNULL_END
