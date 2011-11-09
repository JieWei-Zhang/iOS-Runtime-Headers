/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class NSArray, NSString, NSObject<WebPDFViewPlaceholderDelegate>, WebDataSource;

@interface WebPDFViewPlaceholder : WAKView <WebPDFDocumentView, WebPDFDocumentRepresentation> {
    NSString *_title;
    NSArray *_pageRects;
    struct CGPDFDocument { } *_document;
    WebDataSource *_dataSource;
    NSObject<WebPDFViewPlaceholderDelegate> *_delegate;
    BOOL _didFinishLoadAndMemoryMap;
}

@property(readonly) struct CGPDFDocument { }* doc;
@property(readonly) unsigned int totalPages;
@property(retain) NSString * title;
@property(readonly) struct CGPDFDocument { }* document;
@property(retain) NSArray * pageRects;
@property NSObject<WebPDFViewPlaceholderDelegate> * delegate;

+ (void)setAsPDFDocRepAndView;
+ (id)supportedMIMETypes;
+ (Class)_representationClassForWebFrame:(id)arg1;

- (void)setDocument:(struct CGPDFDocument { }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)didUnlockDocument;
- (void)setPageRects:(id)arg1;
- (struct CGPDFDocument { }*)document;
- (id)pageRects;
- (struct CGPDFDocument { }*)doc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForPageNumber:(unsigned int)arg1;
- (unsigned int)totalPages;
- (void)layout;
- (id)title;
- (id)delegate;
- (void)setTitle:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)_updateTitleForURL:(id)arg1;
- (void)_notifyDidCompleteLayout;
- (struct CGSize { float x1; float x2; })_computePageRects:(struct CGPDFDocument { }*)arg1;
- (void)_updateTitleForDocumentIfAvailable;
- (void)_evaluateJSForDocument:(struct CGPDFDocument { }*)arg1;
- (void)_doPostLoadOrUnlockTasks;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_getPDFPageBounds:(struct CGPDFPage { }*)arg1;
- (BOOL)canProvideDocumentSource;
- (id)documentSource;
- (void)viewWillMoveToHostWindow:(id)arg1;
- (void)viewDidMoveToHostWindow;
- (void)dataSourceMemoryMapped;
- (void)dataSourceMemoryMapFailed;
- (void)finishedLoadingWithDataSource:(id)arg1;
- (void)receivedData:(id)arg1 withDataSource:(id)arg2;
- (void)dataSourceUpdated:(id)arg1;
- (void)receivedError:(id)arg1 withDataSource:(id)arg2;
- (void)dealloc;

@end