//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

__attribute__((visibility("hidden")))
@interface _UIViewAnimationAttributes : NSObject <NSCoding>
{
    double _duration;
    double _delay;
    unsigned int _options;
}

@property(readonly, nonatomic, getter=_delay) double delay; // @synthesize delay=_delay;
@property(readonly, nonatomic, getter=_duration) double duration; // @synthesize duration=_duration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
