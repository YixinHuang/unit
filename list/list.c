
/*
 * Learning from nginx source code 
 * 
 */
 
#include <public.h>

#define TEST_ngx_list_init 0

ngx_list_t            *list; 

void dump_list(ngx_list_t   *list) 
{   
	ngx_list_part_t 	*part;
	void							*data;	
	ngx_uint_t      				i;
	
  part = &list->part;
  data = part->elts;  	

	printf("========dump_list=============\n");	
	for (i=0;;i++){
	    if (i >= part->nelts){
	       if (part->next == NULL){
	    	 		break;
	    	 }
	    part = part->next;
	    data = part->elts;
	    i = 0; 
	    printf("========Move Next =============\n");   	 	    
	    }
	  	data = (char *) part->elts + list->size * i ;
		  printf(" Loop %d adress:= %p, data:= %s\n",(int)i, data,(char *)data);    
	}
}
  
 
int
main(int argc, char *const *argv)
{
  	printf("--------ngx_list_t Test---------\n");
  	int i = 0;
  	void  *elts;

  	if (unit_create_pool()) {
  		 printf("--------unit_create_pool  error---------\n");  
  		 return 	NGX_ERROR;  	
  	}

#if (TEST_ngx_list_init)	
    ngx_list_t        mylist; 
    
    list  = &mylist;
    if (ngx_list_init(list,pool, 10, 100)){
				  printf("--------ngx_list_init error ---------\n");
				  return 	NGX_ERROR;  	    
    }
#else
		list =  ngx_list_create(pool, 10, 100);
#endif			
		
		for (i = 0 ;i < 100; i++){
				elts = ngx_list_push(list);
				if(elts){
				  
				  sprintf(elts,"No %d",i);
				  printf("push %d elements: elts=%p,data=%s ---------\n",i,elts,(char*)elts); 
				}
				else{
				  printf("--------ngx_list_push error ---------\n");
				  return 	NGX_ERROR;  	
				}
		}
    dump_list(list);

	  ngx_destroy_pool(pool);     
	  return 0;
}
 
 
