//
//  PXPatternEditorView.h
//  Pixen
//
//  Copyright 2011-2012 Pixen Project. All rights reserved.
//

@class PXPattern, PXGrid;

@interface PXPatternEditorView : NSView
{
  @private
	PXGrid *_grid;
	BOOL _erasing;
}

@property (nonatomic, weak) PXPattern *pattern;

@end
