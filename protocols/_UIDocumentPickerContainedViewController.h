/* Generated by RuntimeBrowser.
 */

@protocol _UIDocumentPickerContainedViewController <NSObject, UISearchControllerDelegate>

@required

- (int)displayMode;
- (NSArray *)indexPathsForSelectedItems;
- (void)scrollSortViewToVisible;
- (UIScrollView *)scrollView;
- (void)setDisplayMode:(int)arg1;
- (void)setIndexPathsForSelectedItems:(NSArray *)arg1;
- (void)setPinnedHeaderView:(UIView *)arg1 animated:(BOOL)arg2;
- (void)setServiceViewController:(id <_UIDocumentPickerServiceViewController>)arg1;
- (void)setSortView:(_UIDocumentPickerSortOrderView *)arg1;
- (BOOL)supportsActions;

@end
