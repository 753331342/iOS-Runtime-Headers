/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKQuadTrie : NSObject  {
    unsigned int _maxItems;
    struct { 
        double width; 
        double height; 
    } _minSize;
    struct { 
        double x0; 
        double x1; 
        double y0; 
        double y1; 
    } _initialRegion;
    void *__root;
}


- (id)description;
- (id).cxx_construct;
- (void)dealloc;
- (unsigned int)count;
- (BOOL)remove:(id)arg1;
- (BOOL)contains:(id)arg1;
- (id)itemDescriptions;
- (id)allItems;
- (void)foreach:(id)arg1;
- (id)itemsPassingRectTest:(id)arg1 coordinateTest:(id)arg2;
- (void)insert:(id)arg1;
- (id)initWithInitialRegion:(struct { double x1; double x2; double x3; double x4; })arg1 minimumSize:(struct { double x1; double x2; })arg2 maximumItems:(unsigned int)arg3;
- (id)depthFirstDescription;
- (id)breadthFirstDescription;
- (id)itemsInRect:(struct { double x1; double x2; double x3; double x4; })arg1;
- (void)clearAllItemsPerforming:(id)arg1;

@end