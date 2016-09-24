/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLImageItemViewController : QLScrollableContentItemViewController <QLAnimationTimerObserver> {
    QLAnimatedImage * _animatedImage;
    double  _currentPlaybackTime;
    BOOL  _imageIsAnimated;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    UIImageView * _imageView;
    double  _initialTimeStamp;
    int  _loadingIndex;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animationTimerFired:(double)arg1;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })imageSize;
- (void)loadPreviewControllerWithPreviewItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (int)preferredWhitePointAdaptivityStyle;
- (void)previewDidAppear:(BOOL)arg1;
- (void)previewDidDisappear:(BOOL)arg1;

@end