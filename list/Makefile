
CC =	xlc
CFLAGS =  -g 
CPP =	
LINK =	$(CC)

HOME_PATH = /bqmp/hyx
NGINX_PATH = $(HOME_PATH)/nginx-1.4.4
SRC_PATH = $(NGINX_PATH)/src

TEST_UNIT=list


ALL_INCS = -I $(SRC_PATH)/core \
	-I $(SRC_PATH)/event \
	-I $(SRC_PATH)/event/modules \
	-I $(SRC_PATH)/os/unix \
	-I $(HOME_PATH)/pcre-8.12 \
	-I $(HOME_PATH)/zlib-1.2.3 \
	-I $(NGINX_PATH) \
	-I $(SRC_PATH)/unit/$(TEST_UNIT) \
	-I $(SRC_PATH)/http \
	-I $(SRC_PATH)/http/modules \
	-I $(SRC_PATH)/mail \
	-I $(SRC_PATH)/unit/public	


CORE_DEPS = $(SRC_PATH)/core/nginx.h \
    $(SRC_PATH)/core/ngx_config.h \
    $(SRC_PATH)/core/ngx_core.h \
    $(SRC_PATH)/core/ngx_log.h \
    $(SRC_PATH)/core/ngx_palloc.h \
    $(SRC_PATH)/core/ngx_array.h \
    $(SRC_PATH)/core/ngx_list.h \
    $(SRC_PATH)/core/ngx_hash.h \
    $(SRC_PATH)/core/ngx_buf.h \
    $(SRC_PATH)/core/ngx_queue.h \
    $(SRC_PATH)/core/ngx_string.h \
    $(SRC_PATH)/core/ngx_parse.h \
    $(SRC_PATH)/core/ngx_inet.h \
    $(SRC_PATH)/core/ngx_file.h \
    $(SRC_PATH)/core/ngx_crc.h \
    $(SRC_PATH)/core/ngx_crc32.h \
    $(SRC_PATH)/core/ngx_murmurhash.h \
    $(SRC_PATH)/core/ngx_md5.h \
    $(SRC_PATH)/core/ngx_sha1.h \
    $(SRC_PATH)/core/ngx_rbtree.h \
    $(SRC_PATH)/core/ngx_radix_tree.h \
    $(SRC_PATH)/core/ngx_slab.h \
    $(SRC_PATH)/core/ngx_times.h \
    $(SRC_PATH)/core/ngx_shmtx.h \
    $(SRC_PATH)/core/ngx_connection.h \
    $(SRC_PATH)/core/ngx_cycle.h \
    $(SRC_PATH)/core/ngx_conf_file.h \
    $(SRC_PATH)/core/ngx_resolver.h \
    $(SRC_PATH)/core/ngx_open_file_cache.h \
    $(SRC_PATH)/core/ngx_crypt.h \
    $(SRC_PATH)/event/ngx_event.h \
    $(SRC_PATH)/event/ngx_event_timer.h \
    $(SRC_PATH)/event/ngx_event_posted.h \
    $(SRC_PATH)/event/ngx_event_busy_lock.h \
    $(SRC_PATH)/event/ngx_event_connect.h \
    $(SRC_PATH)/event/ngx_event_pipe.h \
    $(SRC_PATH)/os/unix/ngx_time.h \
    $(SRC_PATH)/os/unix/ngx_errno.h \
    $(SRC_PATH)/os/unix/ngx_alloc.h \
    $(SRC_PATH)/os/unix/ngx_files.h \
    $(SRC_PATH)/os/unix/ngx_channel.h \
    $(SRC_PATH)/os/unix/ngx_shmem.h \
    $(SRC_PATH)/os/unix/ngx_process.h \
    $(SRC_PATH)/os/unix/ngx_setaffinity.h \
    $(SRC_PATH)/os/unix/ngx_setproctitle.h \
    $(SRC_PATH)/os/unix/ngx_atomic.h \
    $(SRC_PATH)/os/unix/ngx_gcc_atomic_x86.h \
    $(SRC_PATH)/os/unix/ngx_thread.h \
    $(SRC_PATH)/os/unix/ngx_socket.h \
    $(SRC_PATH)/os/unix/ngx_os.h \
    $(SRC_PATH)/os/unix/ngx_user.h \
    $(SRC_PATH)/os/unix/ngx_process_cycle.h \
    $(SRC_PATH)/os/unix/ngx_posix_config.h \
    $(SRC_PATH)/event/ngx_event_openssl.h \
    $(SRC_PATH)/core/ngx_regex.h \
		$(HOME_PATH)/pcre-8.12/pcre.h \
		$(NGINX_PATH)/ngx_auto_config.h \
		$(SRC_PATH)/unit/public/public.h


CORE_INCS = -I $(SRC_PATH)/core \
	-I $(SRC_PATH)/event \
	-I $(SRC_PATH)/event/modules \
	-I $(SRC_PATH)/os/unix \
	-I $(HOME_PATH)/pcre-8.12 \
	-I $(HOME_PATH)/zlib-1.2.3 \
	-I $(NGINX_PATH) \
	-I $(SRC_PATH)/unit/public  \
	-I $(SRC_PATH)/unit/$(TEST_UNIT) 		


HTTP_DEPS = $(SRC_PATH)/http/ngx_http.h \
    $(SRC_PATH)/http/ngx_http_request.h \
    $(SRC_PATH)/http/ngx_http_config.h \
    $(SRC_PATH)/http/ngx_http_core_module.h \
    $(SRC_PATH)/http/ngx_http_cache.h \
    $(SRC_PATH)/http/ngx_http_variables.h \
    $(SRC_PATH)/http/ngx_http_script.h \
    $(SRC_PATH)/http/ngx_http_upstream.h \
    $(SRC_PATH)/http/ngx_http_upstream_round_robin.h \
    $(SRC_PATH)/http/ngx_http_busy_lock.h \
    $(SRC_PATH)/http/modules/ngx_http_ssi_filter_module.h \
    $(SRC_PATH)/http/modules/ngx_http_ssl_module.h


HTTP_INCS = -I $(SRC_PATH)/http \
	-I $(SRC_PATH)/http/modules

ADDON_DEPS = $(CORE_DEPS)  $(HTTP_DEPS)


$(NGINX_PATH)/$(TEST_UNIT): $(SRC_PATH)/unit/$(TEST_UNIT)/$(TEST_UNIT).o \
	$(SRC_PATH)/core/mynginx.o  \
	$(SRC_PATH)/core/ngx_log.o \
	$(SRC_PATH)/core/ngx_palloc.o \
	$(SRC_PATH)/core/ngx_array.o \
	$(SRC_PATH)/core/ngx_list.o \
	$(SRC_PATH)/core/ngx_hash.o \
	$(SRC_PATH)/core/ngx_buf.o \
	$(SRC_PATH)/core/ngx_queue.o \
	$(SRC_PATH)/core/ngx_output_chain.o \
	$(SRC_PATH)/core/ngx_string.o \
	$(SRC_PATH)/core/ngx_parse.o \
	$(SRC_PATH)/core/ngx_inet.o \
	$(SRC_PATH)/core/ngx_file.o \
	$(SRC_PATH)/core/ngx_crc32.o \
	$(SRC_PATH)/core/ngx_murmurhash.o \
	$(SRC_PATH)/core/ngx_md5.o \
	$(SRC_PATH)/core/ngx_rbtree.o \
	$(SRC_PATH)/core/ngx_radix_tree.o \
	$(SRC_PATH)/core/ngx_slab.o \
	$(SRC_PATH)/core/ngx_times.o \
	$(SRC_PATH)/core/ngx_shmtx.o \
	$(SRC_PATH)/core/ngx_connection.o \
	$(SRC_PATH)/core/ngx_cycle.o \
	$(SRC_PATH)/core/ngx_spinlock.o \
	$(SRC_PATH)/core/ngx_cpuinfo.o \
	$(SRC_PATH)/core/ngx_conf_file.o \
	$(SRC_PATH)/core/ngx_resolver.o \
	$(SRC_PATH)/core/ngx_open_file_cache.o \
	$(SRC_PATH)/core/ngx_crypt.o \
	$(SRC_PATH)/event/ngx_event.o \
	$(SRC_PATH)/event/ngx_event_timer.o \
	$(SRC_PATH)/event/ngx_event_posted.o \
	$(SRC_PATH)/event/ngx_event_busy_lock.o \
	$(SRC_PATH)/event/ngx_event_accept.o \
	$(SRC_PATH)/event/ngx_event_connect.o \
	$(SRC_PATH)/event/ngx_event_pipe.o \
	$(SRC_PATH)/os/unix/ngx_time.o \
	$(SRC_PATH)/os/unix/ngx_errno.o \
	$(SRC_PATH)/os/unix/ngx_alloc.o \
	$(SRC_PATH)/os/unix/ngx_files.o \
	$(SRC_PATH)/os/unix/ngx_socket.o \
	$(SRC_PATH)/os/unix/ngx_recv.o \
	$(SRC_PATH)/os/unix/ngx_readv_chain.o \
	$(SRC_PATH)/os/unix/ngx_udp_recv.o \
	$(SRC_PATH)/os/unix/ngx_send.o \
	$(SRC_PATH)/os/unix/ngx_writev_chain.o \
	$(SRC_PATH)/os/unix/ngx_channel.o \
	$(SRC_PATH)/os/unix/ngx_shmem.o \
	$(SRC_PATH)/os/unix/ngx_process.o \
	$(SRC_PATH)/os/unix/ngx_daemon.o \
	$(SRC_PATH)/os/unix/ngx_setaffinity.o \
	$(SRC_PATH)/os/unix/ngx_setproctitle.o \
	$(SRC_PATH)/os/unix/ngx_posix_init.o \
	$(SRC_PATH)/os/unix/ngx_user.o \
	$(SRC_PATH)/os/unix/ngx_process_cycle.o \
	$(SRC_PATH)/event/modules/ngx_select_module.o \
	$(SRC_PATH)/event/modules/ngx_poll_module.o \
	$(SRC_PATH)/event/ngx_event_openssl.o \
	$(SRC_PATH)/event/ngx_event_openssl_stapling.o \
	$(SRC_PATH)/core/ngx_regex.o \
	$(SRC_PATH)/http/ngx_http.o \
	$(SRC_PATH)/http/ngx_http_core_module.o \
	$(SRC_PATH)/http/ngx_http_special_response.o \
	$(SRC_PATH)/http/ngx_http_request.o \
	$(SRC_PATH)/http/ngx_http_parse.o \
	$(SRC_PATH)/http/ngx_http_header_filter_module.o \
	$(SRC_PATH)/http/ngx_http_write_filter_module.o \
	$(SRC_PATH)/http/ngx_http_copy_filter_module.o \
	$(SRC_PATH)/http/modules/ngx_http_log_module.o \
	$(SRC_PATH)/http/ngx_http_request_body.o \
	$(SRC_PATH)/http/ngx_http_variables.o \
	$(SRC_PATH)/http/ngx_http_script.o \
	$(SRC_PATH)/http/ngx_http_upstream.o \
	$(SRC_PATH)/http/ngx_http_upstream_round_robin.o \
	$(SRC_PATH)/http/ngx_http_parse_time.o \
	$(SRC_PATH)/http/modules/ngx_http_static_module.o \
	$(SRC_PATH)/http/modules/ngx_http_index_module.o \
	$(SRC_PATH)/http/modules/ngx_http_chunked_filter_module.o \
	$(SRC_PATH)/http/modules/ngx_http_range_filter_module.o \
	$(SRC_PATH)/http/modules/ngx_http_headers_filter_module.o \
	$(SRC_PATH)/http/modules/ngx_http_not_modified_filter_module.o \
	$(SRC_PATH)/http/ngx_http_busy_lock.o \
	$(SRC_PATH)/http/ngx_http_file_cache.o \
	$(SRC_PATH)/http/modules/ngx_http_gzip_filter_module.o \
	$(SRC_PATH)/http/ngx_http_postpone_filter_module.o \
	$(SRC_PATH)/http/modules/ngx_http_ssi_filter_module.o \
	$(SRC_PATH)/http/modules/ngx_http_charset_filter_module.o \
	$(SRC_PATH)/http/modules/ngx_http_userid_filter_module.o \
	$(SRC_PATH)/http/modules/ngx_http_autoindex_module.o \
	$(SRC_PATH)/http/modules/ngx_http_auth_basic_module.o \
	$(SRC_PATH)/http/modules/ngx_http_access_module.o \
	$(SRC_PATH)/http/modules/ngx_http_limit_conn_module.o \
	$(SRC_PATH)/http/modules/ngx_http_limit_req_module.o \
	$(SRC_PATH)/http/modules/ngx_http_geo_module.o \
	$(SRC_PATH)/http/modules/ngx_http_map_module.o \
	$(SRC_PATH)/http/modules/ngx_http_split_clients_module.o \
	$(SRC_PATH)/http/modules/ngx_http_referer_module.o \
	$(SRC_PATH)/http/modules/ngx_http_rewrite_module.o \
	$(SRC_PATH)/http/modules/ngx_http_ssl_module.o \
	$(SRC_PATH)/http/modules/ngx_http_proxy_module.o \
	$(SRC_PATH)/http/modules/ngx_http_fastcgi_module.o \
	$(SRC_PATH)/http/modules/ngx_http_uwsgi_module.o \
	$(SRC_PATH)/http/modules/ngx_http_scgi_module.o \
	$(SRC_PATH)/http/modules/ngx_http_memcached_module.o \
	$(SRC_PATH)/http/modules/ngx_http_empty_gif_module.o \
	$(SRC_PATH)/http/modules/ngx_http_browser_module.o \
	$(SRC_PATH)/http/modules/ngx_http_upstream_ip_hash_module.o \
	$(SRC_PATH)/http/modules/ngx_http_upstream_least_conn_module.o \
	$(SRC_PATH)/http/modules/ngx_http_upstream_keepalive_module.o \
	$(NGINX_PATH)/addon/mytest/ngx_http_mytest_module.o \
	$(NGINX_PATH)/ngx_modules.o \
	$(HOME_PATH)/pcre-8.12/.libs/libpcre.a \
	$(HOME_PATH)/zlib-1.2.3/libz.a \
	$(SRC_PATH)/unit/public/public.o  	
	
	
	$(LINK) -bnoquiet -o   $(SRC_PATH)/unit/bin/$(TEST_UNIT) \
	$(SRC_PATH)/unit/public/public.o  \
	$(SRC_PATH)/core/mynginx.o 	\
	$(SRC_PATH)/unit/$(TEST_UNIT)/$(TEST_UNIT).o 	\
	$(SRC_PATH)/core/ngx_log.o \
	$(SRC_PATH)/core/ngx_palloc.o \
	$(SRC_PATH)/core/ngx_array.o \
	$(SRC_PATH)/core/ngx_list.o \
	$(SRC_PATH)/core/ngx_hash.o \
	$(SRC_PATH)/core/ngx_buf.o \
	$(SRC_PATH)/core/ngx_queue.o \
	$(SRC_PATH)/core/ngx_output_chain.o \
	$(SRC_PATH)/core/ngx_string.o \
	$(SRC_PATH)/core/ngx_parse.o \
	$(SRC_PATH)/core/ngx_inet.o \
	$(SRC_PATH)/core/ngx_file.o \
	$(SRC_PATH)/core/ngx_crc32.o \
	$(SRC_PATH)/core/ngx_murmurhash.o \
	$(SRC_PATH)/core/ngx_md5.o \
	$(SRC_PATH)/core/ngx_rbtree.o \
	$(SRC_PATH)/core/ngx_radix_tree.o \
	$(SRC_PATH)/core/ngx_slab.o \
	$(SRC_PATH)/core/ngx_times.o \
	$(SRC_PATH)/core/ngx_shmtx.o \
	$(SRC_PATH)/core/ngx_connection.o \
	$(SRC_PATH)/core/ngx_cycle.o \
	$(SRC_PATH)/core/ngx_spinlock.o \
	$(SRC_PATH)/core/ngx_cpuinfo.o \
	$(SRC_PATH)/core/ngx_conf_file.o \
	$(SRC_PATH)/core/ngx_resolver.o \
	$(SRC_PATH)/core/ngx_open_file_cache.o \
	$(SRC_PATH)/core/ngx_crypt.o \
	$(SRC_PATH)/event/ngx_event.o \
	$(SRC_PATH)/event/ngx_event_timer.o \
	$(SRC_PATH)/event/ngx_event_posted.o \
	$(SRC_PATH)/event/ngx_event_busy_lock.o \
	$(SRC_PATH)/event/ngx_event_accept.o \
	$(SRC_PATH)/event/ngx_event_connect.o \
	$(SRC_PATH)/event/ngx_event_pipe.o \
	$(SRC_PATH)/os/unix/ngx_time.o \
	$(SRC_PATH)/os/unix/ngx_errno.o \
	$(SRC_PATH)/os/unix/ngx_alloc.o \
	$(SRC_PATH)/os/unix/ngx_files.o \
	$(SRC_PATH)/os/unix/ngx_socket.o \
	$(SRC_PATH)/os/unix/ngx_recv.o \
	$(SRC_PATH)/os/unix/ngx_readv_chain.o \
	$(SRC_PATH)/os/unix/ngx_udp_recv.o \
	$(SRC_PATH)/os/unix/ngx_send.o \
	$(SRC_PATH)/os/unix/ngx_writev_chain.o \
	$(SRC_PATH)/os/unix/ngx_channel.o \
	$(SRC_PATH)/os/unix/ngx_shmem.o \
	$(SRC_PATH)/os/unix/ngx_process.o \
	$(SRC_PATH)/os/unix/ngx_daemon.o \
	$(SRC_PATH)/os/unix/ngx_setaffinity.o \
	$(SRC_PATH)/os/unix/ngx_setproctitle.o \
	$(SRC_PATH)/os/unix/ngx_posix_init.o \
	$(SRC_PATH)/os/unix/ngx_user.o \
	$(SRC_PATH)/os/unix/ngx_process_cycle.o \
	$(SRC_PATH)/event/modules/ngx_select_module.o \
	$(SRC_PATH)/event/modules/ngx_poll_module.o \
	$(SRC_PATH)/event/ngx_event_openssl.o \
	$(SRC_PATH)/event/ngx_event_openssl_stapling.o \
	$(SRC_PATH)/core/ngx_regex.o \
	$(SRC_PATH)/http/ngx_http.o \
	$(SRC_PATH)/http/ngx_http_core_module.o \
	$(SRC_PATH)/http/ngx_http_special_response.o \
	$(SRC_PATH)/http/ngx_http_request.o \
	$(SRC_PATH)/http/ngx_http_parse.o \
	$(SRC_PATH)/http/ngx_http_header_filter_module.o \
	$(SRC_PATH)/http/ngx_http_write_filter_module.o \
	$(SRC_PATH)/http/ngx_http_copy_filter_module.o \
	$(SRC_PATH)/http/modules/ngx_http_log_module.o \
	$(SRC_PATH)/http/ngx_http_request_body.o \
	$(SRC_PATH)/http/ngx_http_variables.o \
	$(SRC_PATH)/http/ngx_http_script.o \
	$(SRC_PATH)/http/ngx_http_upstream.o \
	$(SRC_PATH)/http/ngx_http_upstream_round_robin.o \
	$(SRC_PATH)/http/ngx_http_parse_time.o \
	$(SRC_PATH)/http/modules/ngx_http_static_module.o \
	$(SRC_PATH)/http/modules/ngx_http_index_module.o \
	$(SRC_PATH)/http/modules/ngx_http_chunked_filter_module.o \
	$(SRC_PATH)/http/modules/ngx_http_range_filter_module.o \
	$(SRC_PATH)/http/modules/ngx_http_headers_filter_module.o \
	$(SRC_PATH)/http/modules/ngx_http_not_modified_filter_module.o \
	$(SRC_PATH)/http/ngx_http_busy_lock.o \
	$(SRC_PATH)/http/ngx_http_file_cache.o \
	$(SRC_PATH)/http/modules/ngx_http_gzip_filter_module.o \
	$(SRC_PATH)/http/ngx_http_postpone_filter_module.o \
	$(SRC_PATH)/http/modules/ngx_http_ssi_filter_module.o \
	$(SRC_PATH)/http/modules/ngx_http_charset_filter_module.o \
	$(SRC_PATH)/http/modules/ngx_http_userid_filter_module.o \
	$(SRC_PATH)/http/modules/ngx_http_autoindex_module.o \
	$(SRC_PATH)/http/modules/ngx_http_auth_basic_module.o \
	$(SRC_PATH)/http/modules/ngx_http_access_module.o \
	$(SRC_PATH)/http/modules/ngx_http_limit_conn_module.o \
	$(SRC_PATH)/http/modules/ngx_http_limit_req_module.o \
	$(SRC_PATH)/http/modules/ngx_http_geo_module.o \
	$(SRC_PATH)/http/modules/ngx_http_map_module.o \
	$(SRC_PATH)/http/modules/ngx_http_split_clients_module.o \
	$(SRC_PATH)/http/modules/ngx_http_referer_module.o \
	$(SRC_PATH)/http/modules/ngx_http_rewrite_module.o \
	$(SRC_PATH)/http/modules/ngx_http_ssl_module.o \
	$(SRC_PATH)/http/modules/ngx_http_proxy_module.o \
	$(SRC_PATH)/http/modules/ngx_http_fastcgi_module.o \
	$(SRC_PATH)/http/modules/ngx_http_uwsgi_module.o \
	$(SRC_PATH)/http/modules/ngx_http_scgi_module.o \
	$(SRC_PATH)/http/modules/ngx_http_memcached_module.o \
	$(SRC_PATH)/http/modules/ngx_http_empty_gif_module.o \
	$(SRC_PATH)/http/modules/ngx_http_browser_module.o \
	$(SRC_PATH)/http/modules/ngx_http_upstream_ip_hash_module.o \
	$(SRC_PATH)/http/modules/ngx_http_upstream_least_conn_module.o \
	$(SRC_PATH)/http/modules/ngx_http_upstream_keepalive_module.o \
	$(NGINX_PATH)/addon/mytest/ngx_http_mytest_module.o \
	$(NGINX_PATH)/ngx_modules.o \
	$(HOME_PATH)/pcre-8.12/.libs/libpcre.a -lssl -lcrypto $(HOME_PATH)/zlib-1.2.3/libz.a

	
		
$(SRC_PATH)/unit/public/public.o: $(ADDON_DEPS) \
	$(SRC_PATH)/unit/public/public.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o $(SRC_PATH)/unit/public/public.o \
		$(SRC_PATH)/unit/public/public.c		
		
		
$(NGINX_PATH)/ngx_modules.o:	$(CORE_DEPS) \
	$(NGINX_PATH)/ngx_modules.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(NGINX_PATH)/ngx_modules.o \
		$(NGINX_PATH)/ngx_modules.c

$(SRC_PATH)/core/mynginx.o:	$(CORE_DEPS) \
    $(SRC_PATH)/core/mynginx.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/core/mynginx.o \
	    $(SRC_PATH)/core/mynginx.c
		
$(SRC_PATH)/core/ngx_log.o:	$(CORE_DEPS) \
    $(SRC_PATH)/core/ngx_log.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/core/ngx_log.o \
	    $(SRC_PATH)/core/ngx_log.c


$(SRC_PATH)/core/ngx_palloc.o:	$(CORE_DEPS) \
    $(SRC_PATH)/core/ngx_palloc.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/core/ngx_palloc.o \
	    $(SRC_PATH)/core/ngx_palloc.c


$(SRC_PATH)/core/ngx_array.o:	$(CORE_DEPS) \
    $(SRC_PATH)/core/ngx_array.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/core/ngx_array.o \
	    $(SRC_PATH)/core/ngx_array.c


$(SRC_PATH)/core/ngx_list.o:	$(CORE_DEPS) \
    $(SRC_PATH)/core/ngx_list.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/core/ngx_list.o \
	    $(SRC_PATH)/core/ngx_list.c


$(SRC_PATH)/core/ngx_hash.o:	$(CORE_DEPS) \
    $(SRC_PATH)/core/ngx_hash.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/core/ngx_hash.o \
	    $(SRC_PATH)/core/ngx_hash.c


$(SRC_PATH)/core/ngx_buf.o:	$(CORE_DEPS) \
    $(SRC_PATH)/core/ngx_buf.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/core/ngx_buf.o \
	    $(SRC_PATH)/core/ngx_buf.c


$(SRC_PATH)/core/ngx_queue.o:	$(CORE_DEPS) \
    $(SRC_PATH)/core/ngx_queue.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/core/ngx_queue.o \
	    $(SRC_PATH)/core/ngx_queue.c


$(SRC_PATH)/core/ngx_output_chain.o:	$(CORE_DEPS) \
    $(SRC_PATH)/core/ngx_output_chain.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/core/ngx_output_chain.o \
	    $(SRC_PATH)/core/ngx_output_chain.c


$(SRC_PATH)/core/ngx_string.o:	$(CORE_DEPS) \
    $(SRC_PATH)/core/ngx_string.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/core/ngx_string.o \
	    $(SRC_PATH)/core/ngx_string.c


$(SRC_PATH)/core/ngx_parse.o:	$(CORE_DEPS) \
    $(SRC_PATH)/core/ngx_parse.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/core/ngx_parse.o \
	    $(SRC_PATH)/core/ngx_parse.c


$(SRC_PATH)/core/ngx_inet.o:	$(CORE_DEPS) \
    $(SRC_PATH)/core/ngx_inet.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/core/ngx_inet.o \
	    $(SRC_PATH)/core/ngx_inet.c


$(SRC_PATH)/core/ngx_file.o:	$(CORE_DEPS) \
    $(SRC_PATH)/core/ngx_file.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/core/ngx_file.o \
	    $(SRC_PATH)/core/ngx_file.c


$(SRC_PATH)/core/ngx_crc32.o:	$(CORE_DEPS) \
    $(SRC_PATH)/core/ngx_crc32.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/core/ngx_crc32.o \
	    $(SRC_PATH)/core/ngx_crc32.c


$(SRC_PATH)/core/ngx_murmurhash.o:	$(CORE_DEPS) \
    $(SRC_PATH)/core/ngx_murmurhash.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/core/ngx_murmurhash.o \
	    $(SRC_PATH)/core/ngx_murmurhash.c


$(SRC_PATH)/core/ngx_md5.o:	$(CORE_DEPS) \
    $(SRC_PATH)/core/ngx_md5.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/core/ngx_md5.o \
	    $(SRC_PATH)/core/ngx_md5.c


$(SRC_PATH)/core/ngx_rbtree.o:	$(CORE_DEPS) \
    $(SRC_PATH)/core/ngx_rbtree.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/core/ngx_rbtree.o \
	    $(SRC_PATH)/core/ngx_rbtree.c


$(SRC_PATH)/core/ngx_radix_tree.o:	$(CORE_DEPS) \
    $(SRC_PATH)/core/ngx_radix_tree.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/core/ngx_radix_tree.o \
	    $(SRC_PATH)/core/ngx_radix_tree.c


$(SRC_PATH)/core/ngx_slab.o:	$(CORE_DEPS) \
    $(SRC_PATH)/core/ngx_slab.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/core/ngx_slab.o \
	    $(SRC_PATH)/core/ngx_slab.c


$(SRC_PATH)/core/ngx_times.o:	$(CORE_DEPS) \
    $(SRC_PATH)/core/ngx_times.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/core/ngx_times.o \
	    $(SRC_PATH)/core/ngx_times.c


$(SRC_PATH)/core/ngx_shmtx.o:	$(CORE_DEPS) \
    $(SRC_PATH)/core/ngx_shmtx.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/core/ngx_shmtx.o \
	    $(SRC_PATH)/core/ngx_shmtx.c


$(SRC_PATH)/core/ngx_connection.o:	$(CORE_DEPS) \
    $(SRC_PATH)/core/ngx_connection.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/core/ngx_connection.o \
	    $(SRC_PATH)/core/ngx_connection.c


$(SRC_PATH)/core/ngx_cycle.o:	$(CORE_DEPS) \
    $(SRC_PATH)/core/ngx_cycle.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/core/ngx_cycle.o \
	    $(SRC_PATH)/core/ngx_cycle.c


$(SRC_PATH)/core/ngx_spinlock.o:	$(CORE_DEPS) \
    $(SRC_PATH)/core/ngx_spinlock.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/core/ngx_spinlock.o \
	    $(SRC_PATH)/core/ngx_spinlock.c


$(SRC_PATH)/core/ngx_cpuinfo.o:	$(CORE_DEPS) \
    $(SRC_PATH)/core/ngx_cpuinfo.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/core/ngx_cpuinfo.o \
	    $(SRC_PATH)/core/ngx_cpuinfo.c


$(SRC_PATH)/core/ngx_conf_file.o:	$(CORE_DEPS) \
    $(SRC_PATH)/core/ngx_conf_file.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/core/ngx_conf_file.o \
	    $(SRC_PATH)/core/ngx_conf_file.c


$(SRC_PATH)/core/ngx_resolver.o:	$(CORE_DEPS) \
    $(SRC_PATH)/core/ngx_resolver.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/core/ngx_resolver.o \
	    $(SRC_PATH)/core/ngx_resolver.c


$(SRC_PATH)/core/ngx_open_file_cache.o:	$(CORE_DEPS) \
    $(SRC_PATH)/core/ngx_open_file_cache.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/core/ngx_open_file_cache.o \
	    $(SRC_PATH)/core/ngx_open_file_cache.c


$(SRC_PATH)/core/ngx_crypt.o:	$(CORE_DEPS) \
    $(SRC_PATH)/core/ngx_crypt.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/core/ngx_crypt.o \
	    $(SRC_PATH)/core/ngx_crypt.c


$(SRC_PATH)/event/ngx_event.o:	$(CORE_DEPS) \
    $(SRC_PATH)/event/ngx_event.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/event/ngx_event.o \
	    $(SRC_PATH)/event/ngx_event.c


$(SRC_PATH)/event/ngx_event_timer.o:	$(CORE_DEPS) \
    $(SRC_PATH)/event/ngx_event_timer.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/event/ngx_event_timer.o \
	    $(SRC_PATH)/event/ngx_event_timer.c


$(SRC_PATH)/event/ngx_event_posted.o:	$(CORE_DEPS) \
    $(SRC_PATH)/event/ngx_event_posted.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/event/ngx_event_posted.o \
	    $(SRC_PATH)/event/ngx_event_posted.c


$(SRC_PATH)/event/ngx_event_busy_lock.o:	$(CORE_DEPS) \
    $(SRC_PATH)/event/ngx_event_busy_lock.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/event/ngx_event_busy_lock.o \
	    $(SRC_PATH)/event/ngx_event_busy_lock.c


$(SRC_PATH)/event/ngx_event_accept.o:	$(CORE_DEPS) \
    $(SRC_PATH)/event/ngx_event_accept.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/event/ngx_event_accept.o \
	    $(SRC_PATH)/event/ngx_event_accept.c


$(SRC_PATH)/event/ngx_event_connect.o:	$(CORE_DEPS) \
    $(SRC_PATH)/event/ngx_event_connect.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/event/ngx_event_connect.o \
	    $(SRC_PATH)/event/ngx_event_connect.c


$(SRC_PATH)/event/ngx_event_pipe.o:	$(CORE_DEPS) \
    $(SRC_PATH)/event/ngx_event_pipe.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/event/ngx_event_pipe.o \
	    $(SRC_PATH)/event/ngx_event_pipe.c


$(SRC_PATH)/os/unix/ngx_time.o:	$(CORE_DEPS) \
    $(SRC_PATH)/os/unix/ngx_time.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/os/unix/ngx_time.o \
	    $(SRC_PATH)/os/unix/ngx_time.c


$(SRC_PATH)/os/unix/ngx_errno.o:	$(CORE_DEPS) \
    $(SRC_PATH)/os/unix/ngx_errno.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/os/unix/ngx_errno.o \
	    $(SRC_PATH)/os/unix/ngx_errno.c


$(SRC_PATH)/os/unix/ngx_alloc.o:	$(CORE_DEPS) \
    $(SRC_PATH)/os/unix/ngx_alloc.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/os/unix/ngx_alloc.o \
	    $(SRC_PATH)/os/unix/ngx_alloc.c


$(SRC_PATH)/os/unix/ngx_files.o:	$(CORE_DEPS) \
    $(SRC_PATH)/os/unix/ngx_files.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/os/unix/ngx_files.o \
	    $(SRC_PATH)/os/unix/ngx_files.c


$(SRC_PATH)/os/unix/ngx_socket.o:	$(CORE_DEPS) \
    $(SRC_PATH)/os/unix/ngx_socket.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/os/unix/ngx_socket.o \
	    $(SRC_PATH)/os/unix/ngx_socket.c


$(SRC_PATH)/os/unix/ngx_recv.o:	$(CORE_DEPS) \
    $(SRC_PATH)/os/unix/ngx_recv.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/os/unix/ngx_recv.o \
	    $(SRC_PATH)/os/unix/ngx_recv.c


$(SRC_PATH)/os/unix/ngx_readv_chain.o:	$(CORE_DEPS) \
    $(SRC_PATH)/os/unix/ngx_readv_chain.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/os/unix/ngx_readv_chain.o \
	    $(SRC_PATH)/os/unix/ngx_readv_chain.c


$(SRC_PATH)/os/unix/ngx_udp_recv.o:	$(CORE_DEPS) \
    $(SRC_PATH)/os/unix/ngx_udp_recv.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/os/unix/ngx_udp_recv.o \
	    $(SRC_PATH)/os/unix/ngx_udp_recv.c


$(SRC_PATH)/os/unix/ngx_send.o:	$(CORE_DEPS) \
    $(SRC_PATH)/os/unix/ngx_send.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/os/unix/ngx_send.o \
	    $(SRC_PATH)/os/unix/ngx_send.c


$(SRC_PATH)/os/unix/ngx_writev_chain.o:	$(CORE_DEPS) \
    $(SRC_PATH)/os/unix/ngx_writev_chain.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/os/unix/ngx_writev_chain.o \
	    $(SRC_PATH)/os/unix/ngx_writev_chain.c


$(SRC_PATH)/os/unix/ngx_channel.o:	$(CORE_DEPS) \
    $(SRC_PATH)/os/unix/ngx_channel.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/os/unix/ngx_channel.o \
	    $(SRC_PATH)/os/unix/ngx_channel.c


$(SRC_PATH)/os/unix/ngx_shmem.o:	$(CORE_DEPS) \
    $(SRC_PATH)/os/unix/ngx_shmem.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/os/unix/ngx_shmem.o \
	    $(SRC_PATH)/os/unix/ngx_shmem.c


$(SRC_PATH)/os/unix/ngx_process.o:	$(CORE_DEPS) \
    $(SRC_PATH)/os/unix/ngx_process.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/os/unix/ngx_process.o \
	    $(SRC_PATH)/os/unix/ngx_process.c


$(SRC_PATH)/os/unix/ngx_daemon.o:	$(CORE_DEPS) \
    $(SRC_PATH)/os/unix/ngx_daemon.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/os/unix/ngx_daemon.o \
	    $(SRC_PATH)/os/unix/ngx_daemon.c


$(SRC_PATH)/os/unix/ngx_setaffinity.o:	$(CORE_DEPS) \
    $(SRC_PATH)/os/unix/ngx_setaffinity.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/os/unix/ngx_setaffinity.o \
	    $(SRC_PATH)/os/unix/ngx_setaffinity.c


$(SRC_PATH)/os/unix/ngx_setproctitle.o:	$(CORE_DEPS) \
    $(SRC_PATH)/os/unix/ngx_setproctitle.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/os/unix/ngx_setproctitle.o \
	    $(SRC_PATH)/os/unix/ngx_setproctitle.c


$(SRC_PATH)/os/unix/ngx_posix_init.o:	$(CORE_DEPS) \
    $(SRC_PATH)/os/unix/ngx_posix_init.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/os/unix/ngx_posix_init.o \
	    $(SRC_PATH)/os/unix/ngx_posix_init.c


$(SRC_PATH)/os/unix/ngx_user.o:	$(CORE_DEPS) \
    $(SRC_PATH)/os/unix/ngx_user.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/os/unix/ngx_user.o \
	    $(SRC_PATH)/os/unix/ngx_user.c


$(SRC_PATH)/os/unix/ngx_process_cycle.o:	$(CORE_DEPS) \
    $(SRC_PATH)/os/unix/ngx_process_cycle.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/os/unix/ngx_process_cycle.o \
	    $(SRC_PATH)/os/unix/ngx_process_cycle.c


$(SRC_PATH)/event/modules/ngx_select_module.o:	$(CORE_DEPS) \
    $(SRC_PATH)/event/modules/ngx_select_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/event/modules/ngx_select_module.o \
	    $(SRC_PATH)/event/modules/ngx_select_module.c


$(SRC_PATH)/event/modules/ngx_poll_module.o:	$(CORE_DEPS) \
    $(SRC_PATH)/event/modules/ngx_poll_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/event/modules/ngx_poll_module.o \
	    $(SRC_PATH)/event/modules/ngx_poll_module.c


$(SRC_PATH)/event/ngx_event_openssl.o:	$(CORE_DEPS) \
    $(SRC_PATH)/event/ngx_event_openssl.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/event/ngx_event_openssl.o \
	    $(SRC_PATH)/event/ngx_event_openssl.c


$(SRC_PATH)/event/ngx_event_openssl_stapling.o:	$(CORE_DEPS) \
    $(SRC_PATH)/event/ngx_event_openssl_stapling.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/event/ngx_event_openssl_stapling.o \
	    $(SRC_PATH)/event/ngx_event_openssl_stapling.c


$(SRC_PATH)/core/ngx_regex.o:	$(CORE_DEPS) \
    $(SRC_PATH)/core/ngx_regex.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o $(SRC_PATH)/core/ngx_regex.o \
	    $(SRC_PATH)/core/ngx_regex.c


$(SRC_PATH)/http/ngx_http.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/ngx_http.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/ngx_http.o \
	    $(SRC_PATH)/http/ngx_http.c


$(SRC_PATH)/http/ngx_http_core_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/ngx_http_core_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/ngx_http_core_module.o \
	    $(SRC_PATH)/http/ngx_http_core_module.c


$(SRC_PATH)/http/ngx_http_special_response.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/ngx_http_special_response.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/ngx_http_special_response.o \
	    $(SRC_PATH)/http/ngx_http_special_response.c


$(SRC_PATH)/http/ngx_http_request.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/ngx_http_request.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/ngx_http_request.o \
	    $(SRC_PATH)/http/ngx_http_request.c


$(SRC_PATH)/http/ngx_http_parse.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/ngx_http_parse.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/ngx_http_parse.o \
	    $(SRC_PATH)/http/ngx_http_parse.c


$(SRC_PATH)/http/ngx_http_header_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/ngx_http_header_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/ngx_http_header_filter_module.o \
	    $(SRC_PATH)/http/ngx_http_header_filter_module.c


$(SRC_PATH)/http/ngx_http_write_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/ngx_http_write_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/ngx_http_write_filter_module.o \
	    $(SRC_PATH)/http/ngx_http_write_filter_module.c


$(SRC_PATH)/http/ngx_http_copy_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/ngx_http_copy_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/ngx_http_copy_filter_module.o \
	    $(SRC_PATH)/http/ngx_http_copy_filter_module.c


$(SRC_PATH)/http/modules/ngx_http_log_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/modules/ngx_http_log_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/modules/ngx_http_log_module.o \
	    $(SRC_PATH)/http/modules/ngx_http_log_module.c


$(SRC_PATH)/http/ngx_http_request_body.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/ngx_http_request_body.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/ngx_http_request_body.o \
	    $(SRC_PATH)/http/ngx_http_request_body.c


$(SRC_PATH)/http/ngx_http_variables.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/ngx_http_variables.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/ngx_http_variables.o \
	    $(SRC_PATH)/http/ngx_http_variables.c


$(SRC_PATH)/http/ngx_http_script.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/ngx_http_script.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/ngx_http_script.o \
	    $(SRC_PATH)/http/ngx_http_script.c


$(SRC_PATH)/http/ngx_http_upstream.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/ngx_http_upstream.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/ngx_http_upstream.o \
	    $(SRC_PATH)/http/ngx_http_upstream.c


$(SRC_PATH)/http/ngx_http_upstream_round_robin.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/ngx_http_upstream_round_robin.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/ngx_http_upstream_round_robin.o \
	    $(SRC_PATH)/http/ngx_http_upstream_round_robin.c


$(SRC_PATH)/http/ngx_http_parse_time.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/ngx_http_parse_time.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/ngx_http_parse_time.o \
	    $(SRC_PATH)/http/ngx_http_parse_time.c


$(SRC_PATH)/http/modules/ngx_http_static_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/modules/ngx_http_static_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/modules/ngx_http_static_module.o \
	    $(SRC_PATH)/http/modules/ngx_http_static_module.c


$(SRC_PATH)/http/modules/ngx_http_index_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/modules/ngx_http_index_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/modules/ngx_http_index_module.o \
	    $(SRC_PATH)/http/modules/ngx_http_index_module.c


$(SRC_PATH)/http/modules/ngx_http_chunked_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/modules/ngx_http_chunked_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/modules/ngx_http_chunked_filter_module.o \
	    $(SRC_PATH)/http/modules/ngx_http_chunked_filter_module.c


$(SRC_PATH)/http/modules/ngx_http_range_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/modules/ngx_http_range_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/modules/ngx_http_range_filter_module.o \
	    $(SRC_PATH)/http/modules/ngx_http_range_filter_module.c


$(SRC_PATH)/http/modules/ngx_http_headers_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/modules/ngx_http_headers_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/modules/ngx_http_headers_filter_module.o \
	    $(SRC_PATH)/http/modules/ngx_http_headers_filter_module.c


$(SRC_PATH)/http/modules/ngx_http_not_modified_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/modules/ngx_http_not_modified_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/modules/ngx_http_not_modified_filter_module.o \
	    $(SRC_PATH)/http/modules/ngx_http_not_modified_filter_module.c


$(SRC_PATH)/http/ngx_http_busy_lock.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/ngx_http_busy_lock.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/ngx_http_busy_lock.o \
	    $(SRC_PATH)/http/ngx_http_busy_lock.c


$(SRC_PATH)/http/ngx_http_file_cache.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/ngx_http_file_cache.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/ngx_http_file_cache.o \
	    $(SRC_PATH)/http/ngx_http_file_cache.c


$(SRC_PATH)/http/modules/ngx_http_gzip_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/modules/ngx_http_gzip_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/modules/ngx_http_gzip_filter_module.o \
	    $(SRC_PATH)/http/modules/ngx_http_gzip_filter_module.c


$(SRC_PATH)/http/ngx_http_postpone_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/ngx_http_postpone_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/ngx_http_postpone_filter_module.o \
	    $(SRC_PATH)/http/ngx_http_postpone_filter_module.c


$(SRC_PATH)/http/modules/ngx_http_ssi_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/modules/ngx_http_ssi_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/modules/ngx_http_ssi_filter_module.o \
	    $(SRC_PATH)/http/modules/ngx_http_ssi_filter_module.c


$(SRC_PATH)/http/modules/ngx_http_charset_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/modules/ngx_http_charset_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/modules/ngx_http_charset_filter_module.o \
	    $(SRC_PATH)/http/modules/ngx_http_charset_filter_module.c


$(SRC_PATH)/http/modules/ngx_http_userid_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/modules/ngx_http_userid_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/modules/ngx_http_userid_filter_module.o \
	    $(SRC_PATH)/http/modules/ngx_http_userid_filter_module.c


$(SRC_PATH)/http/modules/ngx_http_autoindex_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/modules/ngx_http_autoindex_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/modules/ngx_http_autoindex_module.o \
	    $(SRC_PATH)/http/modules/ngx_http_autoindex_module.c


$(SRC_PATH)/http/modules/ngx_http_auth_basic_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/modules/ngx_http_auth_basic_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/modules/ngx_http_auth_basic_module.o \
	    $(SRC_PATH)/http/modules/ngx_http_auth_basic_module.c


$(SRC_PATH)/http/modules/ngx_http_access_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/modules/ngx_http_access_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/modules/ngx_http_access_module.o \
	    $(SRC_PATH)/http/modules/ngx_http_access_module.c


$(SRC_PATH)/http/modules/ngx_http_limit_conn_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/modules/ngx_http_limit_conn_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/modules/ngx_http_limit_conn_module.o \
	    $(SRC_PATH)/http/modules/ngx_http_limit_conn_module.c


$(SRC_PATH)/http/modules/ngx_http_limit_req_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/modules/ngx_http_limit_req_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/modules/ngx_http_limit_req_module.o \
	    $(SRC_PATH)/http/modules/ngx_http_limit_req_module.c


$(SRC_PATH)/http/modules/ngx_http_geo_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/modules/ngx_http_geo_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/modules/ngx_http_geo_module.o \
	    $(SRC_PATH)/http/modules/ngx_http_geo_module.c


$(SRC_PATH)/http/modules/ngx_http_map_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/modules/ngx_http_map_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/modules/ngx_http_map_module.o \
	    $(SRC_PATH)/http/modules/ngx_http_map_module.c


$(SRC_PATH)/http/modules/ngx_http_split_clients_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/modules/ngx_http_split_clients_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/modules/ngx_http_split_clients_module.o \
	    $(SRC_PATH)/http/modules/ngx_http_split_clients_module.c


$(SRC_PATH)/http/modules/ngx_http_referer_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/modules/ngx_http_referer_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/modules/ngx_http_referer_module.o \
	    $(SRC_PATH)/http/modules/ngx_http_referer_module.c


$(SRC_PATH)/http/modules/ngx_http_rewrite_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/modules/ngx_http_rewrite_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/modules/ngx_http_rewrite_module.o \
	    $(SRC_PATH)/http/modules/ngx_http_rewrite_module.c


$(SRC_PATH)/http/modules/ngx_http_ssl_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/modules/ngx_http_ssl_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/modules/ngx_http_ssl_module.o \
	    $(SRC_PATH)/http/modules/ngx_http_ssl_module.c


$(SRC_PATH)/http/modules/ngx_http_proxy_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/modules/ngx_http_proxy_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/modules/ngx_http_proxy_module.o \
	    $(SRC_PATH)/http/modules/ngx_http_proxy_module.c


$(SRC_PATH)/http/modules/ngx_http_fastcgi_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/modules/ngx_http_fastcgi_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/modules/ngx_http_fastcgi_module.o \
	    $(SRC_PATH)/http/modules/ngx_http_fastcgi_module.c


$(SRC_PATH)/http/modules/ngx_http_uwsgi_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/modules/ngx_http_uwsgi_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/modules/ngx_http_uwsgi_module.o \
	    $(SRC_PATH)/http/modules/ngx_http_uwsgi_module.c


$(SRC_PATH)/http/modules/ngx_http_scgi_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/modules/ngx_http_scgi_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/modules/ngx_http_scgi_module.o \
	    $(SRC_PATH)/http/modules/ngx_http_scgi_module.c


$(SRC_PATH)/http/modules/ngx_http_memcached_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/modules/ngx_http_memcached_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/modules/ngx_http_memcached_module.o \
	    $(SRC_PATH)/http/modules/ngx_http_memcached_module.c


$(SRC_PATH)/http/modules/ngx_http_empty_gif_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/modules/ngx_http_empty_gif_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/modules/ngx_http_empty_gif_module.o \
	    $(SRC_PATH)/http/modules/ngx_http_empty_gif_module.c


$(SRC_PATH)/http/modules/ngx_http_browser_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/modules/ngx_http_browser_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/modules/ngx_http_browser_module.o \
	    $(SRC_PATH)/http/modules/ngx_http_browser_module.c


$(SRC_PATH)/http/modules/ngx_http_upstream_ip_hash_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/modules/ngx_http_upstream_ip_hash_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/modules/ngx_http_upstream_ip_hash_module.o \
	    $(SRC_PATH)/http/modules/ngx_http_upstream_ip_hash_module.c


$(SRC_PATH)/http/modules/ngx_http_upstream_least_conn_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/modules/ngx_http_upstream_least_conn_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/modules/ngx_http_upstream_least_conn_module.o \
	    $(SRC_PATH)/http/modules/ngx_http_upstream_least_conn_module.c


$(SRC_PATH)/http/modules/ngx_http_upstream_keepalive_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
    $(SRC_PATH)/http/modules/ngx_http_upstream_keepalive_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o $(SRC_PATH)/http/modules/ngx_http_upstream_keepalive_module.o \
	    $(SRC_PATH)/http/modules/ngx_http_upstream_keepalive_module.c


$(NGINX_PATH)/addon/mytest/ngx_http_mytest_module.o:	$(ADDON_DEPS) \
	$(SRC_PATH)/addons/mytest/ngx_http_mytest_module.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o $(NGINX_PATH)/addon/mytest/ngx_http_mytest_module.o \
		$(SRC_PATH)/addons/mytest/ngx_http_mytest_module.c

$(SRC_PATH)/unit/$(TEST_UNIT)/$(TEST_UNIT).o: $(ADDON_DEPS) \
	$(SRC_PATH)/unit/$(TEST_UNIT)/$(TEST_UNIT).c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o $(SRC_PATH)/unit/$(TEST_UNIT)/$(TEST_UNIT).o \
		$(SRC_PATH)/unit/$(TEST_UNIT)/$(TEST_UNIT).c		


$(HOME_PATH)/pcre-8.12/pcre.h:	$(HOME_PATH)/pcre-8.12/Makefile

$(HOME_PATH)/pcre-8.12/Makefile:	$(NGINX_PATH)/Makefile
	cd $(HOME_PATH)/pcre-8.12 \
	&& if [ -f Makefile ]; then $(MAKE) distclean; fi \
	&& CC="$(CC)" CFLAGS="" \
	./configure --disable-shared 

$(HOME_PATH)/pcre-8.12/.libs/libpcre.a:	$(HOME_PATH)/pcre-8.12/Makefile
	cd $(HOME_PATH)/pcre-8.12 \
	&& $(MAKE) libpcre.la


$(HOME_PATH)/zlib-1.2.3/libz.a:	$(NGINX_PATH)/Makefile
	cd $(HOME_PATH)/zlib-1.2.3 \
	&& $(MAKE) distclean \
	&& CFLAGS="" CC="$(CC)" \
		./configure \
	&& $(MAKE) libz.a		

build:
	$(MAKE) -f $(SRC_PATH)/unit/$(TEST_UNIT)/Makefile
	
clean:
	@-rm -f $(SRC_PATH)/unit/$(TEST_UNIT)/$(TEST_UNIT).o 
	@-rm -f $(SRC_PATH)/unit/bin/$(TEST_UNIT) 	