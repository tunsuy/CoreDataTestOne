//
//  Student+CoreDataProperties.h
//  CoreData1
//
//  Created by tunsuy on 5/4/16.
//  Copyright © 2016年 tunsuy. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Student.h"

NS_ASSUME_NONNULL_BEGIN

@interface Student (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *grade;
@property (nullable, nonatomic, retain) NSSet<Teacher *> *teachers;

@end

@interface Student (CoreDataGeneratedAccessors)

- (void)addTeachersObject:(Teacher *)value;
- (void)removeTeachersObject:(Teacher *)value;
- (void)addTeachers:(NSSet<Teacher *> *)values;
- (void)removeTeachers:(NSSet<Teacher *> *)values;

@end

NS_ASSUME_NONNULL_END
