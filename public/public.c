
/*
 * Learning from nginx source code 
 * 
 */

#include <public.h>

int unit_create_log()
{
    log = ngx_log_init(LOG_NAME);
    if (log == NULL) {
    		printf("ngx_log_init error.\n");
        return NGX_ERROR;
    }
    //log->log_level = 0x7fffffff;//NGX_LOG_DEBUG_ALL;
    log->log_level = NGX_LOG_DEBUG;
    
    return NGX_OK;
}


int unit_create_pool()
{
	void   	*ret;
	void   	*freeptr;
	ngx_pool_t			*curptr;
	ngx_int_t rlt;
  
  if(unit_create_log()){
    printf("unit_create_pool error.\n");
  	return NGX_ERROR;
  }

  ngx_os_init(log); 
 		  
  pool = ngx_create_pool(NGX_CYCLE_POOL_SIZE, log); 
  if (pool == NULL) {
      printf("ngx_create_pool error.\n");  
      return NGX_ERROR;
  }
  return NGX_OK;  
}  