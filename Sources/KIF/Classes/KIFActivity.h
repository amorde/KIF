
#import <Foundation/Foundation.h>
#import <XCTest/XCTest.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents a single action taken by an instance of `KIFTestActor`
@interface KIFActivity : NSObject

/// The underlying `XCTActivity` instance. `nil` if 
@property (nonatomic, nullable) id<XCTActivity> activity;

/// The name of the activity. Matches `activity.name`
@property (nonatomic, nullable) NSString *name;

/// The start date of the action
@property (nonatomic) NSDate *startedAt;

/// The finish date of the action. `nil` if not yet complete.
@property (nonatomic, nullable) NSDate *endedAt;

/// Additional metadata about this activity
@property (nonatomic) NSDictionary *userInfo;

- (instancetype)initWithActivity:(nullable id<XCTActivity>)activity name:(NSString *)name;
- (instancetype)initWithActivity:(nullable id<XCTActivity>)activity name:(NSString *)name startedAt:(NSDate *)startedAt NS_DESIGNATED_INITIALIZER;

- (void)finish;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
