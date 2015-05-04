
/*
 * Learning from nginx source code 
 * 
 */
 
#include <ngx_config.h>
#include <ngx_core.h>

//#define TEST_ngx_palloc_large 1
#define TEST_ngx_palloc_block 1
//#define TEST_ngx_pool_cleanup_add  1



static void
ngx_cleanup_callback(void *data)
{
   
	  printf("\n--------ngx_cleanup_callback--------\n");		
	  
    if (data) {
        ngx_free(data);
    }
}


static u_char *LOG_NAME="/bqmp/hyx/nginx-1.4.4/src/unit/bin";

ngx_log_t          *mylog;

int unit_create_log()
{
    mylog = ngx_log_init(LOG_NAME);
    if (mylog == NULL) {
    		printf("ngx_log_init error.\n");
        return NGX_ERROR;
    }
    /* mylog->log_level = 0x7fffffff;//NGX_LOG_DEBUG_ALL; */
    mylog->log_level = NGX_LOG_DEBUG;
    
    return NGX_OK;
}


void dump_pool(ngx_pool_t* pool) 
{   
		while (pool){
		   printf("pool = 0x%p\n", pool);
		   printf("  .d\n");
		   printf("     .last = 0x%p\n", pool->d.last);
		   printf("     .end  = 0x%p\n", pool->d.end);
		   printf("     .next = 0x%p\n", pool->d.next);
		   printf("     .failed = %d\n", pool->d.failed);
		   printf(" .max      = %d\n", pool->max);
		   printf(" .current  = 0x%p\n", pool->current);
		   printf(" .chain    = 0x%p\n", pool->chain);
		   printf("     .buf  = 0x%p\n", pool->chain->buf);
		   printf("     .next = 0x%p\n", pool->chain->next);
		   printf(" .large    = 0x%p\n", pool->large);
		   printf("     .next = 0x%p\n", pool->large->next);		   
		   printf("     .alloc= 0x%p\n", pool->large->alloc);		   
		   printf(" .cleanup  = 0x%p\n", pool->cleanup);
		   printf("     .handler  = 0x%p\n", pool->cleanup->handler);	
		   printf("     .data     = 0x%p\n", pool->cleanup->data);				   		   
		   printf("     .next     = 0x%p\n", pool->cleanup->next);	  
		   printf(" .log      = 0x%p\n", pool->log);		   
		   
		   printf("available pool memory = %d\n\n", pool->d.end - pool->d.last);
		   pool = pool->d.next;     
		} 
}

int
main(int argc, char *const *argv)
{
	void   	*ret;
	void   	*freeptr;
	ngx_pool_t			*curptr;
	ngx_int_t rlt;
	printf("--------pool Test---------\n");
  ngx_pool_t          *pool;
  
  unit_create_log();  
  
  /*The the value of the ngx_pool_s.max be wrong if missing this call.
   *Because the ngx_pagesize = getpagesize() should be call for getting real page size. 
   *In function  ngx_create_pool:
   *   #define NGX_MAX_ALLOC_FROM_POOL  (ngx_pagesize - 1)   
   *   size = size - sizeof(ngx_pool_t);
   *   p->max = (size < NGX_MAX_ALLOC_FROM_POOL) ? size : NGX_MAX_ALLOC_FROM_POOL;
   *The max will be size - sizeof(ngx_pool_t)
   */
   
  ngx_os_init(mylog); 
  
  ngx_log_error_core(NGX_LOG_NOTICE, mylog, 0,"ngx_create_pool size:%d", NGX_CYCLE_POOL_SIZE);

	printf("--System memory setting---------\n");  
  printf("Value of NGX_DEFAULT_POOL_SIZE size = %d\n", NGX_CYCLE_POOL_SIZE);   
	printf("Value of ngx_pagesize:getpagesize() = %d\n", getpagesize());   
  printf("Value of NGX_MAX_ALLOC_FROM_POOL£ºngx_pagesize-1= %d\n", NGX_MAX_ALLOC_FROM_POOL);   
	printf("size of ngx_pool_data_t = %d\n", sizeof(ngx_pool_data_t)); 
	printf("size of ngx_pool_t      = %d\n", sizeof(ngx_pool_t));    
	printf("size of ngx_pool_large_t= %d\n", sizeof(ngx_pool_large_t));    	
	


		  
  
  printf("\n\n--------ngx_create_pool--------\n");  
  //#define NGX_DEFAULT_POOL_SIZE    (16 * 1024)  
  printf("ngx_create_pool using NGX_DEFAULT_POOL_SIZE size = %d\n", NGX_CYCLE_POOL_SIZE); 
	printf("--------------------------------------\n");  
  pool = ngx_create_pool(NGX_CYCLE_POOL_SIZE, mylog); 
  if (pool == NULL) {
      return NULL;
  }
	dump_pool(pool);
		
	printf("\n--------size of ngx_align_ptr(p, a):--------\n");  	
	printf("pool->d.last=%p,size of ngx_align_ptr(p, a) = %p\n",pool->d.last,ngx_align_ptr(pool->d.last, NGX_ALIGNMENT));  		
	printf("NGX_ALIGNMENT = %d\n", NGX_ALIGNMENT);  	

	printf("\n--------alloc block 1024 from the pool:--------\n");   
	printf("pool->d.last=%p,size of ngx_align_ptr(p, a) = %p\n",pool->d.last,ngx_align_ptr(pool->d.last, NGX_ALIGNMENT));  		
	ret = ngx_palloc(pool, 1024); 
	printf("--------return address:0x%p--------\n",ret);
	dump_pool(pool);	

		
	printf("--------alloc block 1000 from the pool:--------\n");   
	printf("pool->d.last=%p,size of ngx_align_ptr(p, a) = %p\n",pool->d.last,ngx_align_ptr(pool->d.last, NGX_ALIGNMENT));  		
	ret = ngx_palloc(pool, 1000); 
	printf("--------return address:0x%p--------\n",ret);	
	dump_pool(pool);

#if (TEST_ngx_palloc_large)	
	printf("--------alloc large block 3 from the pool:--------\n"); 
	printf("pool->d.last=%p,size of ngx_align_ptr(p, a) = %p\n",pool->d.last,ngx_align_ptr(pool->d.last, NGX_ALIGNMENT));  		  
	ret = ngx_palloc(pool,  3*1024); 
	printf("--------return address:0x%p--------\n",ret);	
	dump_pool(pool);
	
	printf("--------alloc large block  4 from the pool:--------\n");   
	printf("pool->d.last=%p,size of ngx_align_ptr(p, a) = %p\n",pool->d.last,ngx_align_ptr(pool->d.last, NGX_ALIGNMENT));  		
	ret = ngx_palloc(pool, 4*1024); 
	freeptr =  ret;
	printf("--------return address:0x%p--------\n",ret);	
	dump_pool(pool);

	printf("--------alloc large block  5 from the pool:--------\n");  
	printf("pool->d.last=%p,size of ngx_align_ptr(p, a) = %p\n",pool->d.last,ngx_align_ptr(pool->d.last, NGX_ALIGNMENT));  		 
	ret = ngx_palloc(pool, 5*1024); 
	printf("--------return address:0x%p--------\n",ret);	
	dump_pool(pool);

	printf("--------free large block  4 from the pool:--------\n");  
  printf("block 4 address = p\n", freeptr);   
	rlt = ngx_pfree(pool,freeptr);
	if (rlt == NGX_OK){
	    printf("block 4 address deleted\n");   
			dump_pool(pool);
	}
	else{
	    printf("ngx_pfree return error=%d\n",rlt);   
	}

	printf("--------alloc large block  6 from the pool:--------\n");  
	printf("pool->d.last=%p,size of ngx_align_ptr(p, a) = %p\n",pool->d.last,ngx_align_ptr(pool->d.last, NGX_ALIGNMENT));  		 
	ret = ngx_palloc(pool, 6*1024); 
	printf("--------return address:0x%p--------\n",ret);	
	dump_pool(pool);		
#endif	


#if (TEST_ngx_palloc_block)
	for(int i=0;i<30;i++){
			printf("--------Loop alloc block 1024 from the pool:[%d]--------\n",i);   	
			printf("pool->d.last=%p,size of ngx_align_ptr(p, a) = %p\n",pool->d.last,ngx_align_ptr(pool->d.last, NGX_ALIGNMENT));  		
			ret = ngx_palloc(pool, 4095); 
			printf("--------return address:0x%p--------\n",ret);	
			dump_pool(pool);
	}


			
#endif	


#if (TEST_ngx_pool_cleanup_add)
  	printf("\n--------test for ngx_pool_cleanup_add : --------\n");		
  	ngx_pool_cleanup_t        *cln;
  	void											*buf;

		buf = ngx_pcalloc(pool, 100);
    cln = ngx_pool_cleanup_add(pool, 0);
    if (cln == NULL) {
    		printf("\n--------ngx_pool_cleanup_add failure --------\n");		
        return NGX_ERROR;
    }
      
    cln->handler = ngx_cleanup_callback;
    cln->data = buf;
    
    
#endif	

	

	
	printf("\n--------call ngx_destroy_pool--------\n");		
	dump_pool(pool);	
	ngx_destroy_pool(pool);     
	
  
	return 0;
	
}
 
 

 
 
