/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDKeychainItem : NSObject {
    NSMutableSet * _dirtyProperties;
    const struct __CFData { } * _persistentRef;
    NSMutableDictionary * _properties;
}

@property (copy) NSString *accessGroup;
@property (copy) NSString *accessibility;
@property (copy) NSDictionary *metadata;
@property (readonly) const struct __CFData { }*persistentRef;
@property (copy) NSString *service;
@property bool synchronizable;
@property (copy) NSString *username;
@property long long version;

- (void).cxx_destruct;
- (void)_clearDirtyProperties;
- (void)_markPropertyDirty:(id)arg1;
- (id)_metadataWithError:(id*)arg1;
- (id)_modifiedProperties;
- (void)_reloadProperties;
- (bool)_setMetadata:(id)arg1 withError:(id*)arg2;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (id)accessGroup;
- (id)accessibility;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)initWithPersistentRef:(const struct __CFData { }*)arg1;
- (id)initWithPersistentRef:(const struct __CFData { }*)arg1 properties:(id)arg2;
- (id)metadata;
- (const struct __CFData { }*)persistentRef;
- (void)reload;
- (bool)save:(id*)arg1;
- (id)service;
- (void)setAccessGroup:(id)arg1;
- (void)setAccessibility:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setService:(id)arg1;
- (void)setSynchronizable:(bool)arg1;
- (void)setUsername:(id)arg1;
- (void)setVersion:(long long)arg1;
- (bool)synchronizable;
- (id)username;
- (long long)version;

@end