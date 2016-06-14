/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
 */

@interface DisplayListPool : NSObject {
    DisplayListPoolPrivate * _private;
}

+ (id)sharedPool;

- (void).cxx_destruct;
- (void)dealloc;
- (int)displayListCount;
- (bool)getCGPDFPageIdentifiers:(id)arg1 outDocumentId:(int*)arg2 outPageId:(int*)arg3;
- (id)hasKeyForDocumentId:(int)arg1 pageId:(int)arg2;
- (id)hashKeyForDocumentId:(id)arg1;
- (id)hashKeyForPDFDisplayList:(id)arg1;
- (id)init;
- (void)releaseDisplayList:(id)arg1;
- (void)requestDisplayListForPage:(id)arg1 forTarget:(id)arg2;
- (void)updateWorkQueue;

@end