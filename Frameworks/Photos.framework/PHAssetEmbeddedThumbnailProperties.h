/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetEmbeddedThumbnailProperties : NSObject {
    PHAsset *_asset;
    short _embeddedThumbnailHeight;
    int _embeddedThumbnailLength;
    int _embeddedThumbnailOffset;
    short _embeddedThumbnailWidth;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (nonatomic, readonly) NSData *embeddedThumbnailData;
@property (nonatomic, readonly) short embeddedThumbnailHeight;
@property (nonatomic, readonly) int embeddedThumbnailLength;
@property (nonatomic, readonly) int embeddedThumbnailOffset;
@property (nonatomic, readonly) short embeddedThumbnailWidth;
@property (nonatomic, readonly) BOOL hasEmbeddedThumbnail;

- (void).cxx_destruct;
- (id)asset;
- (id)embeddedThumbnailData;
- (short)embeddedThumbnailHeight;
- (int)embeddedThumbnailLength;
- (int)embeddedThumbnailOffset;
- (short)embeddedThumbnailWidth;
- (BOOL)hasEmbeddedThumbnail;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2;

@end