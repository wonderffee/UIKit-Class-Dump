//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface UIPasteboard : NSObject
{
    NSString *_name;
}

+ (void)removePasteboardWithName:(id)arg1;
+ (id)pasteboardWithUniqueName;
+ (id)pasteboardWithName:(id)arg1 create:(BOOL)arg2;
+ (id)generalPasteboard;
@property(copy, nonatomic) NSArray *items;
@property(readonly, nonatomic) int numberOfItems;
@property(readonly, nonatomic) int changeCount;
@property(nonatomic, getter=isPersistent) BOOL persistent;
- (void)addItems:(id)arg1;
- (id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (id)itemSetWithPasteboardTypes:(id)arg1;
- (BOOL)containsPasteboardTypes:(id)arg1 inItemSet:(id)arg2;
- (id)pasteboardTypesForItemSet:(id)arg1;
- (void)setData:(id)arg1 forPasteboardType:(id)arg2;
- (void)setValue:(id)arg1 forPasteboardType:(id)arg2;
- (id)valueForPasteboardType:(id)arg1;
- (id)dataForPasteboardType:(id)arg1;
- (BOOL)containsPasteboardTypes:(id)arg1;
- (id)pasteboardTypes;
@property(readonly, nonatomic) NSString *name;
- (void)dealloc;
- (id)init;

@end
