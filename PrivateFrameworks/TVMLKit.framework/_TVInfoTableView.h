/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVInfoTableView : _TVFocusRedirectView <TVAppTemplateImpressionable> {
    UIView * _footerView;
    UIView * _headerView;
    NSArray * _infoViews;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *footerView;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIView *headerView;
@property (nonatomic, retain) NSArray *infoViews;
@property (readonly) Class superclass;

+ (id)infoTableViewWithElement:(id)arg1 existingView:(id)arg2;

- (void).cxx_destruct;
- (float)_normalizedInfoHeaderWidth;
- (id)footerView;
- (id)headerView;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (id)infoViews;
- (void)layoutSubviews;
- (void)setFooterView:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setInfoViews:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
