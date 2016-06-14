/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDLocationDirectedSearchParameters : PBCodable <NSCopying> {
    struct { 
        unsigned int maxResults : 1; 
        unsigned int searchType : 1; 
        unsigned int sortOrder : 1; 
    }  _has;
    unsigned int  _maxResults;
    GEOPDNearestTransitParameters * _nearestTransitParameters;
    GEOLatLng * _searchLocation;
    NSString * _searchString;
    int  _searchType;
    int  _sortOrder;
    GEOPDViewportInfo * _viewportInfo;
}

@property (nonatomic) bool hasMaxResults;
@property (nonatomic, readonly) bool hasNearestTransitParameters;
@property (nonatomic, readonly) bool hasSearchLocation;
@property (nonatomic, readonly) bool hasSearchString;
@property (nonatomic) bool hasSearchType;
@property (nonatomic) bool hasSortOrder;
@property (nonatomic, readonly) bool hasViewportInfo;
@property (nonatomic) unsigned int maxResults;
@property (nonatomic, retain) GEOPDNearestTransitParameters *nearestTransitParameters;
@property (nonatomic, retain) GEOLatLng *searchLocation;
@property (nonatomic, retain) NSString *searchString;
@property (nonatomic) int searchType;
@property (nonatomic) int sortOrder;
@property (nonatomic, retain) GEOPDViewportInfo *viewportInfo;

- (int)StringAsSearchType:(id)arg1;
- (int)StringAsSortOrder:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMaxResults;
- (bool)hasNearestTransitParameters;
- (bool)hasSearchLocation;
- (bool)hasSearchString;
- (bool)hasSearchType;
- (bool)hasSortOrder;
- (bool)hasViewportInfo;
- (unsigned long long)hash;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned int)maxResults;
- (void)mergeFrom:(id)arg1;
- (id)nearestTransitParameters;
- (bool)readFrom:(id)arg1;
- (id)searchLocation;
- (id)searchString;
- (int)searchType;
- (id)searchTypeAsString:(int)arg1;
- (void)setHasMaxResults:(bool)arg1;
- (void)setHasSearchType:(bool)arg1;
- (void)setHasSortOrder:(bool)arg1;
- (void)setMaxResults:(unsigned int)arg1;
- (void)setNearestTransitParameters:(id)arg1;
- (void)setSearchLocation:(id)arg1;
- (void)setSearchString:(id)arg1;
- (void)setSearchType:(int)arg1;
- (void)setSortOrder:(int)arg1;
- (void)setViewportInfo:(id)arg1;
- (int)sortOrder;
- (id)sortOrderAsString:(int)arg1;
- (id)viewportInfo;
- (void)writeTo:(id)arg1;

@end