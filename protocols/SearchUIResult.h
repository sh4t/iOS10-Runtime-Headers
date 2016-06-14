/* Generated by RuntimeBrowser.
 */

@protocol SearchUIResult <NSObject>

@required

- (<SearchUIActionButtonItem> *)actionButton;
- (<SearchUIAuxiliaryInfo> *)auxiliaryInfo;
- (NSArray *)cardSections;
- (bool)centered;
- (NSURL *)destinationURL;
- (NSString *)footnote;
- (UIImage *)image;
- (NSArray *)richTextItems;
- (NSArray *)rowSections;
- (NSString *)secondaryTitle;
- (NSString *)title;
- (unsigned long long)titleMaxLines;

@optional

- (NSURL *)cardURL;
- (void)didDisplayResultWithRefreshHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (double)imageCornerRadius;
- (bool)isLocalApplicationResult;
- (bool)requiresTwoLineTitles;
- (UIImage *)secondaryImage;
- (bool)secondaryTitleDetached;
- (bool)shouldCropImageToCircle;

@end