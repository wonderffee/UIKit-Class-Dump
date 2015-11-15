//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSValue;

__attribute__((visibility("hidden")))
@interface UIKBRenderGeometry : NSObject <NSCopying>
{
    _Bool _detachedVariants;
    int _roundRectCorners;
    int _popupBias;
    double _roundRectRadius;
    long long _flickDirection;
    NSValue *_splitLeftRect;
    NSValue *_splitRightRect;
    struct CGPoint _popupSource;
    struct CGRect _frame;
    struct CGRect _paddedFrame;
    struct CGRect _displayFrame;
    struct CGRect _symbolFrame;
}

+ (id)geometryWithFrame:(struct CGRect)arg1 paddedFrame:(struct CGRect)arg2;
+ (id)geometryWithShape:(id)arg1;
@property(retain, nonatomic) NSValue *splitRightRect; // @synthesize splitRightRect=_splitRightRect;
@property(retain, nonatomic) NSValue *splitLeftRect; // @synthesize splitLeftRect=_splitLeftRect;
@property(nonatomic) _Bool detachedVariants; // @synthesize detachedVariants=_detachedVariants;
@property(nonatomic) long long flickDirection; // @synthesize flickDirection=_flickDirection;
@property(nonatomic) int popupBias; // @synthesize popupBias=_popupBias;
@property(nonatomic) double roundRectRadius; // @synthesize roundRectRadius=_roundRectRadius;
@property(nonatomic) int roundRectCorners; // @synthesize roundRectCorners=_roundRectCorners;
@property(nonatomic) struct CGPoint popupSource; // @synthesize popupSource=_popupSource;
@property(nonatomic) struct CGRect symbolFrame; // @synthesize symbolFrame=_symbolFrame;
@property(nonatomic) struct CGRect displayFrame; // @synthesize displayFrame=_displayFrame;
@property(nonatomic) struct CGRect paddedFrame; // @synthesize paddedFrame=_paddedFrame;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, nonatomic) struct UIEdgeInsets paddedInsets;
@property(readonly, nonatomic) struct UIEdgeInsets displayInsets;
- (id)similarShape;
- (id)iPadVariantGeometries:(unsigned long long)arg1;
- (id)iPhoneVariantGeometries:(unsigned long long)arg1;
- (void)applyShadowInsets:(struct UIEdgeInsets)arg1;
- (void)applyInsets:(struct UIEdgeInsets)arg1;
- (void)overlayWithGeometry:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithShape:(id)arg1;

@end

