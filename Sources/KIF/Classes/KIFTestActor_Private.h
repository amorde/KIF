#import "KIFTestActor.h"
#import "KIFActivity.h"

typedef void(^KIFActivityBlock)(KIFActivity *activity);

@interface KIFTestActor ()

- (instancetype)initWithFile:(NSString *)file line:(NSInteger)line delegate:(id<KIFTestActorDelegate>)delegate;

- (void)runActivityNamed:(NSString *)name block:(KIFActivityBlock)block;

@end
