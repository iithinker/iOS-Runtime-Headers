/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUSection;



@interface SUNavigationController : UINavigationController 
{
    BOOL _loading;
    SUSection *_section;
}

@property(retain) SUSection *section;
@property(getter=isLoading) BOOL loading;


- (void)setLoading:(BOOL)arg1;
- (void)restoreArchivableContext:(id)arg1;
- (id)copyScriptViewController;
- (id)initWithSection:(id)arg1 rootViewController:(id)arg2;
- (void)_loadingDidChangeNotification:(id)arg1;
- (void)setSection:(id)arg1;
- (id)initWithSection:(id)arg1;
- (id)copyArchivableContext;
- (id)_sectionForViewController:(id)arg1;
- (void)removeChildViewController:(id)arg1;
- (void)setViewControllers:(id)arg1;
- (BOOL)isLoading;
- (id)initWithRootViewController:(id)arg1;
- (void)addChildViewController:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)setParentViewController:(id)arg1;
- (id)moreListImage;
- (id)moreListSelectedImage;
- (id)section;
- (BOOL)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(NSInteger)arg2;
- (void)dealloc;

@end