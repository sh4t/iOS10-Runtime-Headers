/* Generated by RuntimeBrowser
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_connection : NSObject <OS_nw_connection> {
    unsigned int  adaptive_read_timeout_count;
    id /* block */  adaptive_read_timeout_handler;
    unsigned int  adaptive_write_timeout_count;
    id /* block */  adaptive_write_timeout_handler;
    bool  better_path_available;
    id /* block */  better_path_available_handler;
    id /* block */  cancel_handler;
    NSObject<OS_nw_endpoint_handler> * candidate_endpoint_handler;
    id /* block */  client_handler;
    NSObject<OS_dispatch_queue> * client_queue;
    NSObject<OS_nw_endpoint_handler> * connected_endpoint_handler;
    NSObject<OS_nw_endpoint_handler> * dry_run_endpoint_handler;
    NSObject<OS_nw_endpoint> * endpoint;
    struct __CFArray { } * errors;
    unsigned int  excessive_keepalive_count;
    id /* block */  excessive_keepalive_handler;
    unsigned int  excessive_keepalive_interval;
    bool  initial_payload_sent;
    id /* block */  low_throughput_handler;
    unsigned short  num_timestamps;
    NSObject<OS_nw_parameters> * parameters;
    NSObject<OS_nw_endpoint_handler> * parent_endpoint_handler;
    id /* block */  path_changed_handler;
    id /* block */  read_close_handler;
    NSObject<OS_nw_endpoint_handler> * ready_dry_run_endpoint_handler;
    bool  should_report_stats;
    unsigned long long  start_time;
    int  state;
    int  stats_reason;
    struct netcore_stats_tcp_report { bool x1; int x2; struct netcore_stats_tcp_statistics_report { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; bool x_3_1_4; int x_3_1_5; unsigned int x_3_1_6; unsigned int x_3_1_7; unsigned int x_3_1_8; unsigned int x_3_1_9; int x_3_1_10; bool x_3_1_11; unsigned int x_3_1_12; bool x_3_1_13; bool x_3_1_14; bool x_3_1_15; bool x_3_1_16; bool x_3_1_17; bool x_3_1_18; unsigned long long x_3_1_19; unsigned long long x_3_1_20; unsigned long long x_3_1_21; unsigned long long x_3_1_22; unsigned long long x_3_1_23; unsigned long long x_3_1_24; unsigned long long x_3_1_25; unsigned long long x_3_1_26; unsigned long long x_3_1_27; unsigned long long x_3_1_28; unsigned int x_3_1_29; unsigned int x_3_1_30; unsigned int x_3_1_31; unsigned int x_3_1_32; unsigned int x_3_1_33; bool x_3_1_34; unsigned int x_3_1_35; unsigned int x_3_1_36; unsigned int x_3_1_37; unsigned int x_3_1_38; } x3; struct netcore_stats_tcp_cell_fallback_report { bool x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; unsigned int x_4_1_4; struct netcore_stats_network_event { int x_5_2_1; unsigned int x_5_2_2; } x_4_1_5[20]; unsigned int x_4_1_6; struct netcore_stats_data_usage_snapshot { unsigned long long x_7_2_1; unsigned long long x_7_2_2; } x_4_1_7[20]; } x4; unsigned int x5; struct netcore_stats_tcp_statistics_report { unsigned int x_6_1_1; unsigned int x_6_1_2; unsigned int x_6_1_3; bool x_6_1_4; int x_6_1_5; unsigned int x_6_1_6; unsigned int x_6_1_7; unsigned int x_6_1_8; unsigned int x_6_1_9; int x_6_1_10; bool x_6_1_11; unsigned int x_6_1_12; bool x_6_1_13; bool x_6_1_14; bool x_6_1_15; bool x_6_1_16; bool x_6_1_17; bool x_6_1_18; unsigned long long x_6_1_19; unsigned long long x_6_1_20; unsigned long long x_6_1_21; unsigned long long x_6_1_22; unsigned long long x_6_1_23; unsigned long long x_6_1_24; unsigned long long x_6_1_25; unsigned long long x_6_1_26; unsigned long long x_6_1_27; unsigned long long x_6_1_28; unsigned int x_6_1_29; unsigned int x_6_1_30; unsigned int x_6_1_31; unsigned int x_6_1_32; unsigned int x_6_1_33; bool x_6_1_34; unsigned int x_6_1_35; unsigned int x_6_1_36; unsigned int x_6_1_37; unsigned int x_6_1_38; } x6[10]; } * stats_report;
    bool  stats_reported;
    struct nw_connection_throughput_monitor_s { 
        void *timer; 
        unsigned int minimum; 
        unsigned long long current_bytes; 
        unsigned long long current_time; 
        unsigned long long last_bytes; 
        unsigned long long last_time; 
    }  throughput_monitor;
    struct nw_connection_timestamp_s { unsigned long long x1; unsigned long long x2; struct nw_endpoint_handler_event_s { unsigned int x_3_1_1; unsigned int x_3_1_2; } x3; long long x4; } * timestamps;
    unsigned short  used_timestamps;
    id /* block */  viability_changed_handler;
    id /* block */  write_close_handler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2;

@end