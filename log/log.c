
/*
 * Learning from nginx source code 
 * 
 */
 
#include <ngx_config.h>
#include <ngx_core.h>

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


int
main(int argc, char *const *argv)
{
		printf("--------Start mylog Test---------\n");
		int ret;
		
		unit_create_log();
		
		if(mylog){

        ngx_log_error(NGX_LOG_EMERG, mylog, 0, "ngx_log_error""This is the NGX_LOG_EMERG level. ");				
        ngx_log_error(NGX_LOG_ALERT, mylog, 0, "ngx_log_error""This is the NGX_LOG_ALERT level. ");				
        ngx_log_error(NGX_LOG_CRIT, mylog, 0, "ngx_log_error""This is the NGX_LOG_CRIT level. ");				                        
        ngx_log_error(NGX_LOG_ERR, mylog, 0, "ngx_log_error""This is the NGX_LOG_ERR level. ");				
        ngx_log_error(NGX_LOG_WARN, mylog, 0, "ngx_log_error""This is the NGX_LOG_WARN level. ");				
        ngx_log_error(NGX_LOG_NOTICE, mylog, 0, "ngx_log_error""This is the NGX_LOG_NOTICE level. ");				
        ngx_log_error(NGX_LOG_INFO, mylog, 0, "ngx_log_error""This is the NGX_LOG_INFO level. ");	
        ngx_log_error(NGX_LOG_DEBUG, mylog, 0, "ngx_log_error""This is the NGX_LOG_DEBUG level. ");	 
       
		    mylog->log_level = NGX_LOG_DEBUG_HTTP;
        ngx_log_debug(NGX_LOG_DEBUG_HTTP, mylog, 0, "ngx_log_debug""This is the NGX_LOG_DEBUG_HTTP level. ");
        ngx_log_debug(NGX_LOG_DEBUG_CORE, mylog, 0, "ngx_log_debug""This is the NGX_LOG_DEBUG_CORE level. ");        

		    mylog->log_level = NGX_LOG_DEBUG_CORE;
        ngx_log_debug(NGX_LOG_DEBUG_HTTP, mylog, 0, "ngx_log_debug""This is the NGX_LOG_DEBUG_HTTP level. ");
        ngx_log_debug(NGX_LOG_DEBUG_CORE, mylog, 0, "ngx_log_debug""This is the NGX_LOG_DEBUG_CORE level. ");           
       					                      
			}			
		printf("--------End mylog Test---------\n");		
		return ret;
	
}
 
 
