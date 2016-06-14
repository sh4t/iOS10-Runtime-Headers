/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesFeedWidgetLayoutGenerator : PXMemoriesFeedLayoutGenerator {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    struct CGSize { 
        double width; 
        double height; 
    }  _interitemSpacing;
    bool  _isPrepared;
    struct CGSize { 
        double width; 
        double height; 
    }  _itemSize;
    long long  _numberOfColumns;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly, copy) PXMemoriesFeedWidgetLayoutMetrics *metrics;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_itemRectForItemAtIndex:(unsigned long long)arg1;
- (double)_layoutHeightForLayoutWidth:(double)arg1;
- (void)_prepareIfNeeded;
- (struct CGSize { double x1; double x2; })estimatedSize;
- (id)geometryKinds;
- (void)getGeometries:(struct _PXLayoutGeometry { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; float x5; long long x6; }*)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 withKind:(long long)arg3;
- (id)initWithMetrics:(id)arg1;
- (void)invalidate;
- (double)layoutHeightForLayoutWidth:(double)arg1;
- (struct CGSize { double x1; double x2; })size;

@end