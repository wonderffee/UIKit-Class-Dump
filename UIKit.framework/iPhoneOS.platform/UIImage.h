//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSSecureCoding.h"

@class CIImage, NSArray, _UIDecompressionInfo;

@interface UIImage : NSObject <NSSecureCoding, NSCoding>
{
    void *_imageRef;
    double _scale;
    struct {
        unsigned int named:1;
        unsigned int imageOrientation:3;
        unsigned int cached:1;
        unsigned int hasPattern:1;
        unsigned int isCIImage:1;
        unsigned int imageSetIdentifer:16;
        unsigned int renderingMode:2;
        unsigned int suppressesAccessibilityHairlineThickening:1;
    } _imageFlags;
    _UIDecompressionInfo *_decompressionInfo;
    struct UIEdgeInsets _alignmentRectInsets;
}

+ (id)animatedImageWithImages:(id)arg1 duration:(double)arg2;
+ (id)animatedResizableImageNamed:(id)arg1 capInsets:(struct UIEdgeInsets)arg2 resizingMode:(long long)arg3 duration:(double)arg4;
+ (id)animatedResizableImageNamed:(id)arg1 capInsets:(struct UIEdgeInsets)arg2 duration:(double)arg3;
+ (id)animatedImageNamed:(id)arg1 duration:(double)arg2;
+ (struct UIEdgeInsets)_edgeInsetsForStylePresetNames:(id)arg1 scale:(double)arg2;
+ (_Bool)supportsSecureCoding;
+ (id)imageWithCIImage:(id)arg1 scale:(double)arg2 orientation:(long long)arg3;
+ (id)imageWithCIImage:(id)arg1;
+ (id)imageWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;
+ (id)imageWithCGImage:(struct CGImage *)arg1;
+ (id)imageWithData:(id)arg1 scale:(double)arg2;
+ (id)imageWithData:(id)arg1;
+ (id)imageWithContentsOfFile:(id)arg1;
+ (id)imageNamed:(id)arg1;
+ (void)initialize;
@property(readonly, nonatomic) struct UIEdgeInsets alignmentRectInsets; // @synthesize alignmentRectInsets=_alignmentRectInsets;
- (id)_automationID;
- (void)drawAsPatternInRect:(struct CGRect)arg1;
- (void)drawInRect:(struct CGRect)arg1 blendMode:(int)arg2 alpha:(double)arg3;
- (void)drawInRect:(struct CGRect)arg1;
- (void)drawAtPoint:(struct CGPoint)arg1 blendMode:(int)arg2 alpha:(double)arg3;
- (void)drawAtPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) NSArray *images;
- (id)imageWithAlignmentRectInsets:(struct UIEdgeInsets)arg1;
- (void)_setAlignmentRectInsets:(struct UIEdgeInsets)arg1;
- (void)_setSuppressesAccessibilityHairlineThickening:(_Bool)arg1;
- (id)_imageWithStylePresets:(id)arg1 withTintColor:(id)arg2;
- (id)_cachedImageStyledWithPresets:(id)arg1 forTintColor:(id)arg2;
@property(readonly, nonatomic) long long renderingMode;
- (id)imageWithRenderingMode:(long long)arg1;
@property(readonly, nonatomic) long long resizingMode;
@property(readonly, nonatomic) struct UIEdgeInsets capInsets;
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets)arg1 resizingMode:(long long)arg2;
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets)arg1;
- (void)_setAlwaysStretches:(_Bool)arg1;
- (_Bool)_isTiledWhenStretchedToSize:(struct CGSize)arg1;
- (_Bool)_isResizable;
- (_Bool)_isSubimage;
- (struct CGRect)_contentRectInPixels;
- (struct CGRect)_contentStretchInPixels;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) long long imageOrientation;
- (struct CGSize)_sizeInPixels;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) CIImage *CIImage;
@property(readonly, nonatomic) struct CGImage *CGImage;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_encodePropertiesWithCoder:(id)arg1;
- (void)_encodeDataWithCoder:(id)arg1 imageName:(id)arg2;
- (_Bool)_canEncodeWithName:(id)arg1;
- (id)_initWithOtherImage:(id)arg1;
- (void)_configureFromImage:(id)arg1;
- (id)initWithCIImage:(id)arg1 scale:(double)arg2 orientation:(long long)arg3;
- (id)initWithCIImage:(id)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;
- (id)initWithCGImage:(struct CGImage *)arg1;
- (id)initWithData:(id)arg1 scale:(double)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;

@end

