// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to KGUser.h instead.

@import CoreData;
#import "KGBaseEntity.h"

extern const struct KGUserAttributes {
	__unsafe_unretained NSString *currentUser;
	__unsafe_unretained NSString *email;
	__unsafe_unretained NSString *firstName;
	__unsafe_unretained NSString *lastName;
	__unsafe_unretained NSString *username;
} KGUserAttributes;

@interface KGUserID : KGBaseEntityID {}
@end

@interface _KGUser : KGBaseEntity {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
@property (nonatomic, readonly, strong) KGUserID* objectID;

@property (nonatomic, strong) NSNumber* currentUser;

@property (atomic) BOOL currentUserValue;
- (BOOL)currentUserValue;
- (void)setCurrentUserValue:(BOOL)value_;

//- (BOOL)validateCurrentUser:(id*)value_ error:(NSError**)error_;

@property (nonatomic, strong) NSString* email;

//- (BOOL)validateEmail:(id*)value_ error:(NSError**)error_;

@property (nonatomic, strong) NSString* firstName;

//- (BOOL)validateFirstName:(id*)value_ error:(NSError**)error_;

@property (nonatomic, strong) NSString* lastName;

//- (BOOL)validateLastName:(id*)value_ error:(NSError**)error_;

@property (nonatomic, strong) NSString* username;

//- (BOOL)validateUsername:(id*)value_ error:(NSError**)error_;

@end

@interface _KGUser (CoreDataGeneratedPrimitiveAccessors)

- (NSNumber*)primitiveCurrentUser;
- (void)setPrimitiveCurrentUser:(NSNumber*)value;

- (BOOL)primitiveCurrentUserValue;
- (void)setPrimitiveCurrentUserValue:(BOOL)value_;

- (NSString*)primitiveEmail;
- (void)setPrimitiveEmail:(NSString*)value;

- (NSString*)primitiveFirstName;
- (void)setPrimitiveFirstName:(NSString*)value;

- (NSString*)primitiveLastName;
- (void)setPrimitiveLastName:(NSString*)value;

- (NSString*)primitiveUsername;
- (void)setPrimitiveUsername:(NSString*)value;

@end
