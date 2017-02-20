/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVMenuBarStackView : UIStackView {
    <_TVMenuBarStackViewDelegate> * _delegate;
    unsigned int  _selectedIndex;
    NSArray * _tabBarItems;
}

@property (nonatomic) <_TVMenuBarStackViewDelegate> *delegate;
@property (nonatomic) unsigned int selectedIndex;
@property (nonatomic, copy) NSArray *tabBarItems;

- (void).cxx_destruct;
- (void)_buttonEventTouchUpInside:(id)arg1;
- (void)_configureView;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (unsigned int)selectedIndex;
- (void)setDelegate:(id)arg1;
- (void)setSelectedIndex:(unsigned int)arg1;
- (void)setTabBarItems:(id)arg1;
- (id)tabBarItems;

@end