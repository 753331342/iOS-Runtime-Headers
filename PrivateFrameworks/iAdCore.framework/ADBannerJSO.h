/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class UIWebView, <AdSheetBannerViewDelegate>;

@interface ADBannerJSO : ADJavaScriptObject {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGPoint { 
        float x; 
        float y; 
    BOOL _contentVisible;
    <AdSheetBannerViewDelegate> *_delegate;
    } _screenRectBeforeTransition;
    } _tapLocationBeforeTransition;
    UIWebView *_webView;
}

@property BOOL contentVisible;
@property <AdSheetBannerViewDelegate> * delegate;
@property struct CGRect { struct CGPoint { float x; float y; } origin; struct CGSize { float width; float height; } size; } screenRectBeforeTransition;
@property struct CGPoint { float x; float y; } tapLocationBeforeTransition;
@property UIWebView * webView;

+ (id)scriptSelectors;
+ (id)scriptingKeys;

- (void)_dispatchDOMEvent:(id)arg1;
- (BOOL)contentVisible;
- (id)delegate;
- (void)log:(id)arg1;
- (void)readyForTransitionIn;
- (id)rectOnScreen;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })screenRectBeforeTransition;
- (void)setContentVisible:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setScreenRectBeforeTransition:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setTapLocationBeforeTransition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setVisible:(BOOL)arg1;
- (void)setWebView:(id)arg1;
- (id)tapLocation;
- (struct CGPoint { float x1; float x2; })tapLocationBeforeTransition;
- (void)transitionInComplete;
- (id)webView;

@end