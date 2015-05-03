
/*
 * Learning from nginx source code 
 * 
 */
 
#include <ngx_config.h>
#include <ngx_core.h>


#define LOG_NAME	"/bqmp/hyx/nginx-1.4.4/src/unit/bin"

ngx_log_t          *log;

int unit_create_log()
{
    log = ngx_log_init(LOG_NAME);
    if (log == NULL) {
    		printf("ngx_log_init error.\n");
        return 1;
    }
    //log->log_level = 0x7fffffff;//NGX_LOG_DEBUG_ALL;
    log->log_level = NGX_LOG_DEBUG;
}


int
main(int argc, char *const *argv)
{
		printf("--------Start log Test---------\n");
		int ret;
		
		ret = unit_create_log();
		
		if(log){

        ngx_log_error(NGX_LOG_EMERG, log, 0, "ngx_log_error""This is the NGX_LOG_EMERG level. ");				
        ngx_log_error(NGX_LOG_ALERT, log, 0, "ngx_log_error""This is the NGX_LOG_ALERT level. ");				
        ngx_log_error(NGX_LOG_CRIT, log, 0, "ngx_log_error""This is the NGX_LOG_CRIT level. ");				                        
        ngx_log_error(NGX_LOG_ERR, log, 0, "ngx_log_error""This is the NGX_LOG_ERR level. ");				
        ngx_log_error(NGX_LOG_WARN, log, 0, "ngx_log_error""This is the NGX_LOG_WARN level. ");				
        ngx_log_error(NGX_LOG_NOTICE, log, 0, "ngx_log_error""This is the NGX_LOG_NOTICE level. ");				
        ngx_log_error(NGX_LOG_INFO, log, 0, "ngx_log_error""This is the NGX_LOG_INFO level. ");	
        ngx_log_error(NGX_LOG_DEBUG, log, 0, "ngx_log_error""This is the NGX_LOG_DEBUG level. ");	 
       
		    log->log_level = NGX_LOG_DEBUG_HTTP;
        ngx_log_debug(NGX_LOG_DEBUG_HTTP, log, 0, "ngx_log_debug""This is the NGX_LOG_DEBUG_HTTP level. ");
        ngx_log_debug(NGX_LOG_DEBUG_CORE, log, 0, "ngx_log_debug""This is the NGX_LOG_DEBUG_CORE level. ");        

		    log->log_level = NGX_LOG_DEBUG_CORE;
        ngx_log_debug(NGX_LOG_DEBUG_HTTP, log, 0, "ngx_log_debug""This is the NGX_LOG_DEBUG_HTTP level. ");
        ngx_log_debug(NGX_LOG_DEBUG_CORE, log, 0, "ngx_log_debug""This is the NGX_LOG_DEBUG_CORE level. ");           
       					                      
			}			
		printf("--------End log Test---------\n");		
		return ret;
	
}
 
 
