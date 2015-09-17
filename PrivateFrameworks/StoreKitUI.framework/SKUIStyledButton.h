/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStyledButton : UIControl <SKUIViewElementOfferButton> {
    SKUIAttributedStringView *_attributedStringView;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _bigHitInsets;
    SKUIButtonBorderStyle *_borderStyle;
    SKUIShapeView *_borderView;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _buttonPadding;
    int _buttonType;
    BOOL _didInitialHighlightForTouch;
    UIImageView *_disclosureImageView;
    float _imageTextPaddingInterior;
    SKUIImageView *_imageView;
    float _imageYAdjustment;
    SKUIItemOfferButton *_itemOfferButton;
    <SKUIItemOfferButtonDelegate> *_itemOfferDelegate;
    BOOL _useBigHitTarget;
    BOOL _usesTintColor;
}

@property (nonatomic, readonly) float baselineOffset;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } bigHitInsets;
@property (nonatomic, copy) SKUIButtonBorderStyle *borderStyle;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } buttonPadding;
@property (nonatomic) int buttonType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) float firstBaselineOffset;
@property (readonly) unsigned int hash;
@property (nonatomic) float imageTextPaddingInterior;
@property (nonatomic, readonly) SKUIImageView *imageView;
@property (nonatomic) float imageYAdjustment;
@property (nonatomic) <SKUIItemOfferButtonDelegate> *itemOfferDelegate;
@property (readonly) Class superclass;
@property (nonatomic, retain) SKUIAttributedStringLayout *titleLayout;
@property (nonatomic) BOOL useBigHitTarget;
@property (nonatomic) BOOL usesTintColor;
@property (getter=isUsingItemOfferAppearance, nonatomic, readonly) BOOL usingItemOfferAppearance;

+ (int)buttonTypeForElement:(id)arg1;
+ (struct CGSize { float x1; float x2; })sizeForTextSize:(struct CGSize { float x1; float x2; })arg1 buttonType:(int)arg2;
+ (struct CGSize { float x1; float x2; })sizeForTextSize:(struct CGSize { float x1; float x2; })arg1 buttonType:(int)arg2 borderStyle:(id)arg3;
+ (struct CGSize { float x1; float x2; })sizeForTextSize:(struct CGSize { float x1; float x2; })arg1 buttonType:(int)arg2 borderStyle:(id)arg3 interiorPadding:(float)arg4;
+ (BOOL)usesItemOfferAppearanceForButtonType:(int)arg1 itemState:(id)arg2;

- (void).cxx_destruct;
- (id)_borderColor;
- (id)_borderFillColor;
- (void)_cancelConfirmationAction:(id)arg1;
- (void)_itemOfferButtonAction:(id)arg1;
- (void)_reloadDisclosureImage;
- (void)_reloadImageView;
- (void)_reloadOverrideTextColor;
- (void)_showConfirmationAction:(id)arg1;
- (id)_textBackgroundColor;
- (id)_textColor;
- (BOOL)_usesTintColor;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (float)baselineOffset;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })bigHitInsets;
- (id)borderStyle;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })buttonPadding;
- (int)buttonType;
- (void)dealloc;
- (float)firstBaselineOffset;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hitRect;
- (float)imageTextPaddingInterior;
- (id)imageView;
- (float)imageYAdjustment;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isUsingItemOfferAppearance;
- (id)itemOfferDelegate;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)setBigHitInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setBorderStyle:(id)arg1;
- (void)setButtonPadding:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setButtonType:(int)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setImageTextPaddingInterior:(float)arg1;
- (void)setImageYAdjustment:(float)arg1;
- (void)setItemOfferDelegate:(id)arg1;
- (void)setTitleLayout:(id)arg1;
- (void)setTitleLayout:(id)arg1 forceRefresh:(BOOL)arg2;
- (void)setUseBigHitTarget:(BOOL)arg1;
- (void)setUsesTintColor:(BOOL)arg1;
- (BOOL)setValuesUsingBuyButtonDescriptor:(id)arg1 itemState:(id)arg2 clientContext:(id)arg3 animated:(BOOL)arg4;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)tintColorDidChange;
- (id)titleLayout;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (BOOL)useBigHitTarget;
- (BOOL)usesTintColor;

@end