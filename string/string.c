
/*
 * Learning from nginx source code 
 * 
 */
 
#include <public.h>


void test_ngx_cpymem()
{
  	printf("--------ngx_cpymem Test---------\n");
  	
  	ngx_str_t  buf1 = ngx_string("I'm buff one.");
  	ngx_str_t  buf2 = ngx_string("I'm buff two.");
  	u_char     *p, *phead;
  	
  	phead = p = ngx_pcalloc(pool, 1024);
  	
  	// The point move to new position after copy  new string 
    p = ngx_cpymem(p,buf1.data,buf1.len);
    p = ngx_cpymem(p,buf2.data,buf2.len);   
    p = ngx_copy(p, buf1.data,buf1.len);
    
    printf("Buff all: %s \n",phead);
    
    printf("NGX_PTR_SIZE is:[%d] \n",NGX_PTR_SIZE);
    printf("value of -1 is:[%p] \n",(void *) -1);
    printf("value of -16 is:[%p] \n",(void *) -16);
    printf("value of 1 is:[%p] \n",(void *) 1);
}
 
 
 
 
int
main(int argc, char *const *argv)
{
  	printf("--------ngx_str_t Test---------\n");

  	if (unit_create_pool()) {
  		 printf("--------unit_create_pool  error---------\n");  
  		 return 	NGX_OK;  	
  	}
  	  	
    test_ngx_cpymem();
    
    
    ngx_destroy_pool(pool);   
	  return 0;
}
 
 
