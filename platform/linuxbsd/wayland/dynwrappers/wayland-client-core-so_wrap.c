// This file is generated. Do not edit!
// see https://github.com/hpvb/dynload-wrapper for details
// generated by ../dynload-wrapper/generate-wrapper.py 0.3 on 2023-01-25 17:36:12
// flags: ../dynload-wrapper/generate-wrapper.py --include ./thirdparty/linuxbsd_headers/wayland/wayland-client-core.h --sys-include "./thirdparty/linuxbsd_headers/wayland/wayland-client-core.h" --soname libwayland-client.so.0 --init-name wayland_client --output-header platform/linuxbsd/wayland/dynwrappers/wayland-client-core-so_wrap.h --output-implementation platform/linuxbsd/wayland/dynwrappers/wayland-client-core-so_wrap.c
//
// NOTE: This has been hand-patched to workaround some issues.
#include <stdint.h>

#define wl_list_init wl_list_init_dylibloader_orig_wayland_client
#define wl_list_insert wl_list_insert_dylibloader_orig_wayland_client
#define wl_list_remove wl_list_remove_dylibloader_orig_wayland_client
#define wl_list_length wl_list_length_dylibloader_orig_wayland_client
#define wl_list_empty wl_list_empty_dylibloader_orig_wayland_client
#define wl_list_insert_list wl_list_insert_list_dylibloader_orig_wayland_client
#define wl_array_init wl_array_init_dylibloader_orig_wayland_client
#define wl_array_release wl_array_release_dylibloader_orig_wayland_client
#define wl_array_add wl_array_add_dylibloader_orig_wayland_client
#define wl_array_copy wl_array_copy_dylibloader_orig_wayland_client
#define wl_event_queue_destroy wl_event_queue_destroy_dylibloader_orig_wayland_client
#define wl_proxy_marshal_flags wl_proxy_marshal_flags_dylibloader_orig_wayland_client
#define wl_proxy_marshal_array_flags wl_proxy_marshal_array_flags_dylibloader_orig_wayland_client
#define wl_proxy_marshal wl_proxy_marshal_dylibloader_orig_wayland_client
#define wl_proxy_marshal_array wl_proxy_marshal_array_dylibloader_orig_wayland_client
#define wl_proxy_create wl_proxy_create_dylibloader_orig_wayland_client
#define wl_proxy_create_wrapper wl_proxy_create_wrapper_dylibloader_orig_wayland_client
#define wl_proxy_wrapper_destroy wl_proxy_wrapper_destroy_dylibloader_orig_wayland_client
#define wl_proxy_marshal_constructor wl_proxy_marshal_constructor_dylibloader_orig_wayland_client
#define wl_proxy_marshal_constructor_versioned wl_proxy_marshal_constructor_versioned_dylibloader_orig_wayland_client
#define wl_proxy_marshal_array_constructor wl_proxy_marshal_array_constructor_dylibloader_orig_wayland_client
#define wl_proxy_marshal_array_constructor_versioned wl_proxy_marshal_array_constructor_versioned_dylibloader_orig_wayland_client
#define wl_proxy_destroy wl_proxy_destroy_dylibloader_orig_wayland_client
#define wl_proxy_add_listener wl_proxy_add_listener_dylibloader_orig_wayland_client
#define wl_proxy_get_listener wl_proxy_get_listener_dylibloader_orig_wayland_client
#define wl_proxy_add_dispatcher wl_proxy_add_dispatcher_dylibloader_orig_wayland_client
#define wl_proxy_set_user_data wl_proxy_set_user_data_dylibloader_orig_wayland_client
#define wl_proxy_get_user_data wl_proxy_get_user_data_dylibloader_orig_wayland_client
#define wl_proxy_get_version wl_proxy_get_version_dylibloader_orig_wayland_client
#define wl_proxy_get_id wl_proxy_get_id_dylibloader_orig_wayland_client
#define wl_proxy_set_tag wl_proxy_set_tag_dylibloader_orig_wayland_client
#define wl_proxy_get_tag wl_proxy_get_tag_dylibloader_orig_wayland_client
#define wl_proxy_get_class wl_proxy_get_class_dylibloader_orig_wayland_client
#define wl_proxy_set_queue wl_proxy_set_queue_dylibloader_orig_wayland_client
#define wl_display_connect wl_display_connect_dylibloader_orig_wayland_client
#define wl_display_connect_to_fd wl_display_connect_to_fd_dylibloader_orig_wayland_client
#define wl_display_disconnect wl_display_disconnect_dylibloader_orig_wayland_client
#define wl_display_get_fd wl_display_get_fd_dylibloader_orig_wayland_client
#define wl_display_dispatch wl_display_dispatch_dylibloader_orig_wayland_client
#define wl_display_dispatch_queue wl_display_dispatch_queue_dylibloader_orig_wayland_client
#define wl_display_dispatch_queue_pending wl_display_dispatch_queue_pending_dylibloader_orig_wayland_client
#define wl_display_dispatch_pending wl_display_dispatch_pending_dylibloader_orig_wayland_client
#define wl_display_get_error wl_display_get_error_dylibloader_orig_wayland_client
#define wl_display_get_protocol_error wl_display_get_protocol_error_dylibloader_orig_wayland_client
#define wl_display_flush wl_display_flush_dylibloader_orig_wayland_client
#define wl_display_roundtrip_queue wl_display_roundtrip_queue_dylibloader_orig_wayland_client
#define wl_display_roundtrip wl_display_roundtrip_dylibloader_orig_wayland_client
#define wl_display_create_queue wl_display_create_queue_dylibloader_orig_wayland_client
#define wl_display_prepare_read_queue wl_display_prepare_read_queue_dylibloader_orig_wayland_client
#define wl_display_prepare_read wl_display_prepare_read_dylibloader_orig_wayland_client
#define wl_display_cancel_read wl_display_cancel_read_dylibloader_orig_wayland_client
#define wl_display_read_events wl_display_read_events_dylibloader_orig_wayland_client
#define wl_log_set_handler_client wl_log_set_handler_client_dylibloader_orig_wayland_client
#include "./thirdparty/linuxbsd_headers/wayland/wayland-client-core.h"
#undef wl_list_init
#undef wl_list_insert
#undef wl_list_remove
#undef wl_list_length
#undef wl_list_empty
#undef wl_list_insert_list
#undef wl_array_init
#undef wl_array_release
#undef wl_array_add
#undef wl_array_copy
#undef wl_event_queue_destroy
#undef wl_proxy_marshal_flags
#undef wl_proxy_marshal_array_flags
#undef wl_proxy_marshal
#undef wl_proxy_marshal_array
#undef wl_proxy_create
#undef wl_proxy_create_wrapper
#undef wl_proxy_wrapper_destroy
#undef wl_proxy_marshal_constructor
#undef wl_proxy_marshal_constructor_versioned
#undef wl_proxy_marshal_array_constructor
#undef wl_proxy_marshal_array_constructor_versioned
#undef wl_proxy_destroy
#undef wl_proxy_add_listener
#undef wl_proxy_get_listener
#undef wl_proxy_add_dispatcher
#undef wl_proxy_set_user_data
#undef wl_proxy_get_user_data
#undef wl_proxy_get_version
#undef wl_proxy_get_id
#undef wl_proxy_set_tag
#undef wl_proxy_get_tag
#undef wl_proxy_get_class
#undef wl_proxy_set_queue
#undef wl_display_connect
#undef wl_display_connect_to_fd
#undef wl_display_disconnect
#undef wl_display_get_fd
#undef wl_display_dispatch
#undef wl_display_dispatch_queue
#undef wl_display_dispatch_queue_pending
#undef wl_display_dispatch_pending
#undef wl_display_get_error
#undef wl_display_get_protocol_error
#undef wl_display_flush
#undef wl_display_roundtrip_queue
#undef wl_display_roundtrip
#undef wl_display_create_queue
#undef wl_display_prepare_read_queue
#undef wl_display_prepare_read
#undef wl_display_cancel_read
#undef wl_display_read_events
#undef wl_log_set_handler_client
#include <dlfcn.h>
#include <stdio.h>
void (*wl_list_init_dylibloader_wrapper_wayland_client)(struct wl_list*);
void (*wl_list_insert_dylibloader_wrapper_wayland_client)(struct wl_list*,struct wl_list*);
void (*wl_list_remove_dylibloader_wrapper_wayland_client)(struct wl_list*);
int (*wl_list_length_dylibloader_wrapper_wayland_client)(struct wl_list*);
int (*wl_list_empty_dylibloader_wrapper_wayland_client)(struct wl_list*);
void (*wl_list_insert_list_dylibloader_wrapper_wayland_client)(struct wl_list*,struct wl_list*);
void (*wl_array_init_dylibloader_wrapper_wayland_client)(struct wl_array*);
void (*wl_array_release_dylibloader_wrapper_wayland_client)(struct wl_array*);
void* (*wl_array_add_dylibloader_wrapper_wayland_client)(struct wl_array*, size_t);
int (*wl_array_copy_dylibloader_wrapper_wayland_client)(struct wl_array*,struct wl_array*);
void (*wl_event_queue_destroy_dylibloader_wrapper_wayland_client)(struct wl_event_queue*);
struct wl_proxy* (*wl_proxy_marshal_flags_dylibloader_wrapper_wayland_client)(struct wl_proxy*, uint32_t,const struct wl_interface*, uint32_t, uint32_t,...);
struct wl_proxy* (*wl_proxy_marshal_array_flags_dylibloader_wrapper_wayland_client)(struct wl_proxy*, uint32_t,const struct wl_interface*, uint32_t, uint32_t,union wl_argument);
void (*wl_proxy_marshal_dylibloader_wrapper_wayland_client)(struct wl_proxy*, uint32_t,...);
void (*wl_proxy_marshal_array_dylibloader_wrapper_wayland_client)(struct wl_proxy*, uint32_t,union wl_argument);
struct wl_proxy* (*wl_proxy_create_dylibloader_wrapper_wayland_client)(struct wl_proxy*,const struct wl_interface*);
void* (*wl_proxy_create_wrapper_dylibloader_wrapper_wayland_client)( void*);
void (*wl_proxy_wrapper_destroy_dylibloader_wrapper_wayland_client)( void*);
struct wl_proxy* (*wl_proxy_marshal_constructor_dylibloader_wrapper_wayland_client)(struct wl_proxy*, uint32_t,const struct wl_interface*,...);
struct wl_proxy* (*wl_proxy_marshal_constructor_versioned_dylibloader_wrapper_wayland_client)(struct wl_proxy*, uint32_t,const struct wl_interface*, uint32_t,...);
struct wl_proxy* (*wl_proxy_marshal_array_constructor_dylibloader_wrapper_wayland_client)(struct wl_proxy*, uint32_t,union wl_argument,const struct wl_interface*);
struct wl_proxy* (*wl_proxy_marshal_array_constructor_versioned_dylibloader_wrapper_wayland_client)(struct wl_proxy*, uint32_t,union wl_argument,const struct wl_interface*, uint32_t);
void (*wl_proxy_destroy_dylibloader_wrapper_wayland_client)(struct wl_proxy*);
int (*wl_proxy_add_listener_dylibloader_wrapper_wayland_client)(struct wl_proxy*, void(**)(void), void*);
const void* (*wl_proxy_get_listener_dylibloader_wrapper_wayland_client)(struct wl_proxy*);
int (*wl_proxy_add_dispatcher_dylibloader_wrapper_wayland_client)(struct wl_proxy*, wl_dispatcher_func_t,const void*, void*);
void (*wl_proxy_set_user_data_dylibloader_wrapper_wayland_client)(struct wl_proxy*, void*);
void* (*wl_proxy_get_user_data_dylibloader_wrapper_wayland_client)(struct wl_proxy*);
uint32_t (*wl_proxy_get_version_dylibloader_wrapper_wayland_client)(struct wl_proxy*);
uint32_t (*wl_proxy_get_id_dylibloader_wrapper_wayland_client)(struct wl_proxy*);
void (*wl_proxy_set_tag_dylibloader_wrapper_wayland_client)(struct wl_proxy*,const char**);
const char** (*wl_proxy_get_tag_dylibloader_wrapper_wayland_client)(struct wl_proxy*);
const char* (*wl_proxy_get_class_dylibloader_wrapper_wayland_client)(struct wl_proxy*);
void (*wl_proxy_set_queue_dylibloader_wrapper_wayland_client)(struct wl_proxy*,struct wl_event_queue*);
struct wl_display* (*wl_display_connect_dylibloader_wrapper_wayland_client)(const char*);
struct wl_display* (*wl_display_connect_to_fd_dylibloader_wrapper_wayland_client)( int);
void (*wl_display_disconnect_dylibloader_wrapper_wayland_client)(struct wl_display*);
int (*wl_display_get_fd_dylibloader_wrapper_wayland_client)(struct wl_display*);
int (*wl_display_dispatch_dylibloader_wrapper_wayland_client)(struct wl_display*);
int (*wl_display_dispatch_queue_dylibloader_wrapper_wayland_client)(struct wl_display*,struct wl_event_queue*);
int (*wl_display_dispatch_queue_pending_dylibloader_wrapper_wayland_client)(struct wl_display*,struct wl_event_queue*);
int (*wl_display_dispatch_pending_dylibloader_wrapper_wayland_client)(struct wl_display*);
int (*wl_display_get_error_dylibloader_wrapper_wayland_client)(struct wl_display*);
uint32_t (*wl_display_get_protocol_error_dylibloader_wrapper_wayland_client)(struct wl_display*,const struct wl_interface**, uint32_t*);
int (*wl_display_flush_dylibloader_wrapper_wayland_client)(struct wl_display*);
int (*wl_display_roundtrip_queue_dylibloader_wrapper_wayland_client)(struct wl_display*,struct wl_event_queue*);
int (*wl_display_roundtrip_dylibloader_wrapper_wayland_client)(struct wl_display*);
struct wl_event_queue* (*wl_display_create_queue_dylibloader_wrapper_wayland_client)(struct wl_display*);
int (*wl_display_prepare_read_queue_dylibloader_wrapper_wayland_client)(struct wl_display*,struct wl_event_queue*);
int (*wl_display_prepare_read_dylibloader_wrapper_wayland_client)(struct wl_display*);
void (*wl_display_cancel_read_dylibloader_wrapper_wayland_client)(struct wl_display*);
int (*wl_display_read_events_dylibloader_wrapper_wayland_client)(struct wl_display*);
void (*wl_log_set_handler_client_dylibloader_wrapper_wayland_client)( wl_log_func_t);
int initialize_wayland_client(int verbose) {
  void *handle;
  char *error;
  handle = dlopen("libwayland-client.so.0", RTLD_LAZY);
  if (!handle) {
    if (verbose) {
      fprintf(stderr, "%s\n", dlerror());
    }
    return(1);
  }
  dlerror();
// wl_list_init
  *(void **) (&wl_list_init_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_list_init");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_list_insert
  *(void **) (&wl_list_insert_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_list_insert");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_list_remove
  *(void **) (&wl_list_remove_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_list_remove");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_list_length
  *(void **) (&wl_list_length_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_list_length");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_list_empty
  *(void **) (&wl_list_empty_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_list_empty");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_list_insert_list
  *(void **) (&wl_list_insert_list_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_list_insert_list");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_array_init
  *(void **) (&wl_array_init_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_array_init");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_array_release
  *(void **) (&wl_array_release_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_array_release");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_array_add
  *(void **) (&wl_array_add_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_array_add");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_array_copy
  *(void **) (&wl_array_copy_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_array_copy");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_event_queue_destroy
  *(void **) (&wl_event_queue_destroy_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_event_queue_destroy");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_proxy_marshal_flags
  *(void **) (&wl_proxy_marshal_flags_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_proxy_marshal_flags");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_proxy_marshal_array_flags
  *(void **) (&wl_proxy_marshal_array_flags_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_proxy_marshal_array_flags");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_proxy_marshal
  *(void **) (&wl_proxy_marshal_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_proxy_marshal");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_proxy_marshal_array
  *(void **) (&wl_proxy_marshal_array_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_proxy_marshal_array");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_proxy_create
  *(void **) (&wl_proxy_create_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_proxy_create");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_proxy_create_wrapper
  *(void **) (&wl_proxy_create_wrapper_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_proxy_create_wrapper");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_proxy_wrapper_destroy
  *(void **) (&wl_proxy_wrapper_destroy_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_proxy_wrapper_destroy");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_proxy_marshal_constructor
  *(void **) (&wl_proxy_marshal_constructor_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_proxy_marshal_constructor");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_proxy_marshal_constructor_versioned
  *(void **) (&wl_proxy_marshal_constructor_versioned_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_proxy_marshal_constructor_versioned");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_proxy_marshal_array_constructor
  *(void **) (&wl_proxy_marshal_array_constructor_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_proxy_marshal_array_constructor");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_proxy_marshal_array_constructor_versioned
  *(void **) (&wl_proxy_marshal_array_constructor_versioned_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_proxy_marshal_array_constructor_versioned");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_proxy_destroy
  *(void **) (&wl_proxy_destroy_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_proxy_destroy");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_proxy_add_listener
  *(void **) (&wl_proxy_add_listener_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_proxy_add_listener");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_proxy_get_listener
  *(void **) (&wl_proxy_get_listener_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_proxy_get_listener");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_proxy_add_dispatcher
  *(void **) (&wl_proxy_add_dispatcher_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_proxy_add_dispatcher");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_proxy_set_user_data
  *(void **) (&wl_proxy_set_user_data_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_proxy_set_user_data");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_proxy_get_user_data
  *(void **) (&wl_proxy_get_user_data_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_proxy_get_user_data");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_proxy_get_version
  *(void **) (&wl_proxy_get_version_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_proxy_get_version");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_proxy_get_id
  *(void **) (&wl_proxy_get_id_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_proxy_get_id");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_proxy_set_tag
  *(void **) (&wl_proxy_set_tag_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_proxy_set_tag");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_proxy_get_tag
  *(void **) (&wl_proxy_get_tag_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_proxy_get_tag");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_proxy_get_class
  *(void **) (&wl_proxy_get_class_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_proxy_get_class");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_proxy_set_queue
  *(void **) (&wl_proxy_set_queue_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_proxy_set_queue");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_display_connect
  *(void **) (&wl_display_connect_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_display_connect");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_display_connect_to_fd
  *(void **) (&wl_display_connect_to_fd_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_display_connect_to_fd");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_display_disconnect
  *(void **) (&wl_display_disconnect_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_display_disconnect");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_display_get_fd
  *(void **) (&wl_display_get_fd_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_display_get_fd");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_display_dispatch
  *(void **) (&wl_display_dispatch_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_display_dispatch");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_display_dispatch_queue
  *(void **) (&wl_display_dispatch_queue_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_display_dispatch_queue");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_display_dispatch_queue_pending
  *(void **) (&wl_display_dispatch_queue_pending_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_display_dispatch_queue_pending");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_display_dispatch_pending
  *(void **) (&wl_display_dispatch_pending_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_display_dispatch_pending");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_display_get_error
  *(void **) (&wl_display_get_error_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_display_get_error");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_display_get_protocol_error
  *(void **) (&wl_display_get_protocol_error_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_display_get_protocol_error");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_display_flush
  *(void **) (&wl_display_flush_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_display_flush");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_display_roundtrip_queue
  *(void **) (&wl_display_roundtrip_queue_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_display_roundtrip_queue");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_display_roundtrip
  *(void **) (&wl_display_roundtrip_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_display_roundtrip");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_display_create_queue
  *(void **) (&wl_display_create_queue_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_display_create_queue");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_display_prepare_read_queue
  *(void **) (&wl_display_prepare_read_queue_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_display_prepare_read_queue");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_display_prepare_read
  *(void **) (&wl_display_prepare_read_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_display_prepare_read");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_display_cancel_read
  *(void **) (&wl_display_cancel_read_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_display_cancel_read");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_display_read_events
  *(void **) (&wl_display_read_events_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_display_read_events");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// wl_log_set_handler_client
  *(void **) (&wl_log_set_handler_client_dylibloader_wrapper_wayland_client) = dlsym(handle, "wl_log_set_handler_client");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
return 0;
}
