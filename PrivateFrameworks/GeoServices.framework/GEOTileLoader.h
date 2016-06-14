/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileLoader : NSObject

@property (nonatomic, readonly) int diskHits;
@property (nonatomic, readonly) int memoryHits;
@property (nonatomic, readonly) int networkHits;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)diskCacheLocation;
+ (id)modernLoader;
+ (id)modernLoaderForResourceManifestConfiguration:(id)arg1 locale:(id)arg2;
+ (id)modernLoaderForTileGroupIdentifier:(unsigned int)arg1 locale:(id)arg2;
+ (void)setDiskCacheLocation:(id)arg1;
+ (void)setMemoryCacheCountLimit:(unsigned long long)arg1;
+ (void)setMemoryCacheMinCapacity:(unsigned long long)arg1;
+ (void)setMemoryCacheTotalCostLimit:(unsigned long long)arg1;
+ (void)setServerProxyClass:(Class)arg1;
+ (void)setTrackUsage:(bool)arg1;
+ (id)sharedLoader;
+ (id)singletonConfiguration;
+ (void)useLocalLoader;
+ (void)useRemoteLoader;

- (void)_loadTiles:(id)arg1 options:(unsigned long long)arg2 progress:(id /* block */)arg3 finished:(id /* block */)arg4 error:(id /* block */)arg5;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1 forClient:(id)arg2 exclusive:(bool)arg3;
- (id)cachedTileForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)calculateFreeableSizeWithCallbackQ:(id)arg1 finished:(id /* block */)arg2;
- (void)cancelAllForClient:(id)arg1;
- (void)cancelKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 forClient:(id)arg2;
- (void)cancelRequest:(id)arg1;
- (void)clearAllCaches;
- (void)closeDatabase;
- (void)closeForClient:(id)arg1;
- (id)descriptionDictionaryRepresentation;
- (int)diskHits;
- (void)endPreloadSession;
- (void)endPreloadSessionForClient:(id)arg1;
- (void)expireTilesWithPredicate:(id /* block */)arg1;
- (id)expireTilesWithType:(unsigned char)arg1 provider:(unsigned short)arg2 olderThan:(double)arg3;
- (id)internalDelegate;
- (id)internalDelegateQ;
- (void)loadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 callbackQ:(id)arg5 beginNetwork:(id /* block */)arg6 callback:(id /* block */)arg7;
- (void)loadTiles:(id)arg1 progress:(id /* block */)arg2 finished:(id /* block */)arg3 error:(id /* block */)arg4;
- (void)loadTilesFromCache:(id)arg1 progress:(id /* block */)arg2 finished:(id /* block */)arg3 error:(id /* block */)arg4;
- (void)loadTilesFromCacheAndNetwork:(id)arg1 progress:(id /* block */)arg2 finished:(id /* block */)arg3 error:(id /* block */)arg4;
- (int)memoryHits;
- (int)networkHits;
- (void)openDatabase;
- (void)openForClient:(id)arg1;
- (void)preloadTiles:(id)arg1 requireWiFi:(bool)arg2 progress:(id /* block */)arg3 finished:(id /* block */)arg4 error:(id /* block */)arg5;
- (void)registerTileDecoder:(id)arg1;
- (void)registerTileLoader:(Class)arg1;
- (id)renderDataForKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)renderDataForKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 asyncHandler:(id /* block */)arg2;
- (void)reportCorruptTile:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (bool)reprioritizeKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 forClient:(id)arg2 newPriority:(unsigned int)arg3;
- (void)setInternalDelegate:(id)arg1;
- (void)setInternalDelegateQ:(id)arg1;
- (void)setSortPoint:(const struct { double x1; double x2; }*)arg1;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1 callbackQ:(id)arg2 finished:(id /* block */)arg3;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1 finished:(id /* block */)arg2;

@end