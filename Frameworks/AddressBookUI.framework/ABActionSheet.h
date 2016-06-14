/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABActionSheet : UIActionSheet {
    void * _ab_context;
    struct __CFArray { } * _tag2s;
    struct __CFArray { } * _tag3s;
    struct __CFArray { } * _tag4s;
    struct __CFArray { } * _tags;
}

@property (nonatomic) void*ab_context;

- (long long)_addButtonWithTitle:(id)arg1;
- (id)_addButtonWithTitle:(id)arg1 label:(id)arg2;
- (id)ab_addButtonWithTitle:(id)arg1 label:(id)arg2 tag:(long long)arg3;
- (id)ab_addButtonWithTitle:(id)arg1 label:(id)arg2 tag:(long long)arg3 tag2:(long long)arg4;
- (id)ab_addButtonWithTitle:(id)arg1 label:(id)arg2 tag:(long long)arg3 tag2:(long long)arg4 tag3:(const void*)arg5;
- (id)ab_addButtonWithTitle:(id)arg1 label:(id)arg2 tag:(long long)arg3 tag2:(long long)arg4 tag3:(const void*)arg5 tag4:(const void*)arg6;
- (long long)ab_addButtonWithTitle:(id)arg1 tag:(long long)arg2;
- (long long)ab_addButtonWithTitle:(id)arg1 tag:(long long)arg2 tag2:(long long)arg3;
- (void*)ab_context;
- (long long)ab_tag2AtIndex:(long long)arg1;
- (const void*)ab_tag3AtIndex:(long long)arg1;
- (const void*)ab_tag4AtIndex:(long long)arg1;
- (long long)ab_tagAtIndex:(long long)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (void)setAb_context:(void*)arg1;

@end