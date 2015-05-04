
/*
 * Learning from nginx source code 
 * 
 */

#include <public.h>

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


int unit_create_pool()
{
  
  if(unit_create_log()){
    printf("unit_create_pool error.\n");
  	return NGX_ERROR;
  }

  ngx_os_init(mylog); 
 		  
  pool = ngx_create_pool(NGX_CYCLE_POOL_SIZE, mylog); 
  if (pool == NULL) {
      printf("ngx_create_pool error.\n");  
      return NGX_ERROR;
  }
  return NGX_OK;  
}  