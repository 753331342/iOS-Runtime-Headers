/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class <TCCancelDelegate>, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, TCMessageContext, TCProgressContext;

@interface TCBackgroundThreadManager : NSObject {
    unsigned int mBlockCount;
    <TCCancelDelegate> *mCancelDelegate;
    NSObject<OS_dispatch_group> *mGroup;
    BOOL mIsWaiting;
    TCMessageContext *mMessageContext;
    TCProgressContext *mProgressContext;
    NSObject<OS_dispatch_queue> *mProgressReportingQueue;
    NSObject<OS_dispatch_queue> *mQueue;
}

@property(readonly) BOOL isCancelled;
@property(retain) TCMessageContext * messageContext;
@property(retain) TCProgressContext * progressContext;

- (void)addASyncBlock:(id)arg1;
- (void)dealloc;
- (id)initWithCancelDelegate:(id)arg1;
- (BOOL)isCancelled;
- (id)messageContext;
- (id)progressContext;
- (void)reportWarning:(struct TCTaggedMessageStructure { int x1; id x2; }*)arg1;
- (void)setMessageContext:(id)arg1;
- (void)setProgressContext:(id)arg1;
- (void)waitUntilComplete;

@end