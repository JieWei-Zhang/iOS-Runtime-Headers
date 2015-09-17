/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUINavigationBarViewElement : SKUIViewElement {
    BOOL _hidesBackButton;
    BOOL _hidesShadow;
}

@property (nonatomic, readonly) BOOL hidesBackButton;
@property (nonatomic, readonly) BOOL hidesShadow;
@property (nonatomic, readonly) BOOL isTransparent;
@property (nonatomic, readonly) NSArray *mainViewElements;
@property (nonatomic, readonly) NSArray *navigationPalettes;
@property (nonatomic, readonly) UIColor *tintColor;

- (id)applyUpdatesWithElement:(id)arg1;
- (BOOL)hidesBackButton;
- (BOOL)hidesShadow;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (BOOL)isTransparent;
- (id)mainViewElements;
- (id)navigationPalettes;
- (id)tintColor;

@end