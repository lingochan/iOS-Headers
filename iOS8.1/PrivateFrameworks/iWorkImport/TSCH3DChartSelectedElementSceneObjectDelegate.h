//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSCH3DChartAllElementSceneObjectDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TSCH3DChartSelectedElementSceneObjectDelegate : NSObject <TSCH3DChartAllElementSceneObjectDelegate>
{
    unsigned int mSelectedSeriesIndex;
}

- (BOOL)willSubmitElement:(const struct RenderElementInfo *)arg1 sceneObject:(id)arg2;
- (BOOL)willRenderElement:(const struct RenderElementInfo *)arg1 sceneObject:(id)arg2;
- (void)didTransformElement:(const struct RenderElementInfo *)arg1 sceneObject:(id)arg2;
- (BOOL)willUpdateElementEffectsStatesForElement:(const struct RenderElementInfo *)arg1 sceneObject:(id)arg2;
- (struct ElementRenderPass)renderPassForElement:(const struct RenderElementInfo *)arg1 sceneObject:(id)arg2;
- (BOOL)willProcessElement:(const struct RenderElementInfo *)arg1 sceneObject:(id)arg2;
- (void)didProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (BOOL)willProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (void)didGenerateShaderEffectsForSeriesAtIndex:(const tvec2_3b141483 *)arg1 effects:(id)arg2 sceneObject:(id)arg3 pipeline:(id)arg4;
- (BOOL)willProcessSeries:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (id)initWithSelectedSeriesIndex:(unsigned int)arg1;
- (struct ElementRenderPass)renderPassForSceneObject:(id)arg1;
- (BOOL)renderPassDelayDisallowedForSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)didEndProcessingSceneObject:(id)arg1;
- (BOOL)willBeginProcessingSceneObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
