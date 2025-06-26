

#import "KIFActivity.h"

@implementation KIFActivity


- (instancetype)initWithActivity:(id<XCTActivity>)activity name:(NSString *)name;
{
    return [self initWithActivity:activity name:name startedAt:[NSDate date]];
}

- (instancetype)initWithActivity:(id<XCTActivity>)activity name:(NSString *)name startedAt:(NSDate *)startedAt;
{
    NSParameterAssert(name);

    self = [super init];
    if (self) {
        _activity = activity;
        _name = name;
        _startedAt = startedAt;
    }
    return self;
}

- (void)finish
{
    self.endedAt = [NSDate date];
}

- (NSString *)debugDescription
{
    NSMutableString *result = [NSMutableString new];
    [result appendFormat:@"<%@: ", NSStringFromClass([self class])];
    [result appendFormat:@" name = '%@'", self.name];
    [result appendFormat:@" startedAt = '%@'", self.startedAt];
    if (self.endedAt) {
        [result appendFormat:@" endedAt = '%@'", self.endedAt];
    }
    if (self.userInfo.count) {
        [result appendFormat:@" userInfo = %@", self.userInfo];
    }
    [result appendString:@">"];
    return [result copy];
}

@end
