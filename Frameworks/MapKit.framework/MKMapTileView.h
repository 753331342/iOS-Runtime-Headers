/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class MKMapTileViewImp, <MKMapTileViewDelegate>;

@interface MKMapTileView : UIView {
    MKMapTileViewImp *_imp;
}

@property BOOL canDisplayTraffic;
@property BOOL canDrawOnMainThread;
@property <MKMapTileViewDelegate> * delegate;
@property(readonly) int displayZoomLevel;
@property(getter=isDrawing,readonly) BOOL drawing;
@property(getter=isDrawingEnabled) BOOL drawingEnabled;
@property BOOL levelCrossFade;
@property(getter=isLoading,readonly) BOOL loading;
@property(getter=isLoadingEnabled) BOOL loadingEnabled;
@property unsigned int mapType;
@property(getter=isRendering,readonly) BOOL rendering;
@property(readonly) int roundedZoomLevel;
@property BOOL shouldDisplayBaseTiles;
@property BOOL shouldDisplayEffects;
@property BOOL shouldDisplayTraffic;
@property(readonly) struct { struct { double x; double y; } origin; struct { double width; double height; } size; } visibleMapRect;
@property(readonly) float zoomLevel;
@property(readonly) float zoomScale;

+ (void)initialize;
+ (Class)layerClass;
+ (int)maxZoomLevel;
+ (int)minZoomLevel;
+ (struct CGSize { float x1; float x2; })tileSize;

- (void)_addTilePathRequest:(struct { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; }*)arg1;
- (BOOL)_addTileRequester:(struct GMMTileRequester { int (**x1)(); int x2; struct Connection {} *x3; char *x4; boolx5; boolx6; boolx7; boolx8; struct _opaque_pthread_mutex_t { long x_9_1_1; BOOL x_9_1_2[40]; } x9; struct GMMTileResponse {} *x10; struct __CFRunLoop {} *x11; struct __CFRunLoopTimer {} *x12; unsigned int x13; id x14; boolx15; }*)arg1;
- (BOOL)_canDrawContent;
- (void)_commonInit;
- (void)_didFailLoadingWithError:(id)arg1;
- (void)_didFinishLoading;
- (void)_didFinishRendering;
- (void)_didStartLoading;
- (void)_didStartRendering;
- (void)_displayTilePath:(struct { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; }*)arg1;
- (void)_drawingDidEnd:(id)arg1;
- (BOOL)_isLoadingInVisibleRect;
- (void)_loadBaseTiles;
- (id)_nextRequestTilesRemaining:(BOOL*)arg1;
- (void)_processTileRequester:(struct GMMTileRequester { int (**x1)(); int x2; struct Connection {} *x3; char *x4; boolx5; boolx6; boolx7; boolx8; struct _opaque_pthread_mutex_t { long x_9_1_1; BOOL x_9_1_2[40]; } x9; struct GMMTileResponse {} *x10; struct __CFRunLoop {} *x11; struct __CFRunLoopTimer {} *x12; unsigned int x13; id x14; boolx15; }*)arg1;
- (void)_pruneRequestTiles;
- (BOOL)_removeTileRequester:(struct GMMTileRequester { int (**x1)(); int x2; struct Connection {} *x3; char *x4; boolx5; boolx6; boolx7; boolx8; struct _opaque_pthread_mutex_t { long x_9_1_1; BOOL x_9_1_2[40]; } x9; struct GMMTileResponse {} *x10; struct __CFRunLoop {} *x11; struct __CFRunLoopTimer {} *x12; unsigned int x13; id x14; boolx15; }*)arg1;
- (void)_requestTiles:(id)arg1;
- (BOOL)_requestTiles;
- (void)_scheduleDrawExpirationTimer:(double)arg1;
- (void)_scheduleTileExpirationTimer:(double)arg1;
- (void)_scheduleTileRequestTimer:(double)arg1;
- (void)_setNeedsDisplayInTilePath:(struct { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; }*)arg1;
- (void)_updateMinificationFilterBias;
- (void)_updateTrafficHighlight;
- (void)_updateZoomFilters;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)awakeFromNib;
- (BOOL)canDisplayTraffic;
- (BOOL)canDrawOnMainThread;
- (float)contentScaleFactor;
- (struct CADoublePoint { double x1; double x2; })convertCoordinate:(struct { double x1; double x2; })arg1 toDoublePointToView:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertCoordinate:(struct { double x1; double x2; })arg1 toPointToView:(id)arg2;
- (struct { double x1; double x2; })convertDoublePoint:(struct CADoublePoint { double x1; double x2; })arg1 toCoordinateFromView:(id)arg2;
- (struct { double x1; double x2; })convertDoublePoint:(struct CADoublePoint { double x1; double x2; })arg1 toMapPointFromView:(id)arg2;
- (struct CADoublePoint { double x1; double x2; })convertMapPoint:(struct { double x1; double x2; })arg1 toDoublePointToView:(id)arg2;
- (struct { double x1; double x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toCoordinateFromView:(id)arg2;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toRegionFromView:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 toRectToView:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToWindow;
- (void)display;
- (void)displayBaseTilesOfLayer:(id)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })displayRect;
- (int)displayZoomLevel;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (BOOL)drawing;
- (id)drawingExpirationTimer;
- (void)expireTiles:(id)arg1;
- (void)finishLoadingVisibleRect;
- (void)flush;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isDrawing;
- (BOOL)isDrawingEnabled;
- (BOOL)isLoading;
- (BOOL)isLoadingEnabled;
- (BOOL)isRendering;
- (BOOL)levelCrossFade;
- (unsigned int)mapType;
- (void)reloadTilesAfterResume;
- (void)renderLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (int)roundedZoomLevel;
- (void)setCanDisplayTraffic:(BOOL)arg1;
- (void)setCanDrawOnMainThread:(BOOL)arg1;
- (void)setContentScaleFactor:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDrawing:(BOOL)arg1;
- (void)setDrawingEnabled:(BOOL)arg1;
- (void)setDrawingExpirationTimer:(id)arg1;
- (void)setLevelCrossFade:(BOOL)arg1;
- (void)setLoadingEnabled:(BOOL)arg1;
- (void)setMapType:(unsigned int)arg1;
- (void)setShouldDisplayBaseTiles:(BOOL)arg1;
- (void)setShouldDisplayEffects:(BOOL)arg1;
- (void)setShouldDisplayTraffic:(BOOL)arg1;
- (void)setTileExpirationTimer:(id)arg1;
- (void)setTileRequestTimer:(id)arg1;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (BOOL)shouldDisplayBaseTiles;
- (BOOL)shouldDisplayEffects;
- (BOOL)shouldDisplayTraffic;
- (void)stopTileLoading;
- (id)tileExpirationTimer;
- (id)tileRequestTimer;
- (void)tileRequester:(struct GMMTileRequester { int (**x1)(); int x2; struct Connection {} *x3; char *x4; boolx5; boolx6; boolx7; boolx8; struct _opaque_pthread_mutex_t { long x_9_1_1; BOOL x_9_1_2[40]; } x9; struct GMMTileResponse {} *x10; struct __CFRunLoop {} *x11; struct __CFRunLoopTimer {} *x12; unsigned int x13; id x14; boolx15; }*)arg1 failedWithError:(id)arg2;
- (void)tileRequesterCompleted:(struct GMMTileRequester { int (**x1)(); int x2; struct Connection {} *x3; char *x4; boolx5; boolx6; boolx7; boolx8; struct _opaque_pthread_mutex_t { long x_9_1_1; BOOL x_9_1_2[40]; } x9; struct GMMTileResponse {} *x10; struct __CFRunLoop {} *x11; struct __CFRunLoopTimer {} *x12; unsigned int x13; id x14; boolx15; }*)arg1;
- (void)tileRequesterProgress:(struct GMMTileRequester { int (**x1)(); int x2; struct Connection {} *x3; char *x4; boolx5; boolx6; boolx7; boolx8; struct _opaque_pthread_mutex_t { long x_9_1_1; BOOL x_9_1_2[40]; } x9; struct GMMTileResponse {} *x10; struct __CFRunLoop {} *x11; struct __CFRunLoopTimer {} *x12; unsigned int x13; id x14; boolx15; }*)arg1;
- (BOOL)tiledLayer:(id)arg1 canDrawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 levelOfDetail:(int)arg3;
- (id)tilesSurroundingCoordinate:(struct { double x1; double x2; })arg1 zoomLevel:(int)arg2 forVisibleSize:(struct CGSize { float x1; float x2; })arg3;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })visibleMapRect;
- (float)zoomLevel;
- (float)zoomScale;

@end