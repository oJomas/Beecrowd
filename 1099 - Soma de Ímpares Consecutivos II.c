#include <stdio.h>
 
int main() {
    int i, n, x, y, soma=0, j;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
        scanf("%d %d", &x, &y);
	        if(x > y){
	            if(y % 2 == 0){
	                for(j = y+1; j < x; j+=2){
	                    soma += j;   
	                }
	            }else{
	                for(j = y; j < x; j+=2){
	                	if(j != y){
	                		soma += j; 
						}   
	                }  
	            }
	            
	        }else{
	            if(x % 2 == 0){
	                for(j = x+1; j < y; j+=2){
	                    soma += j;
	                }
	            }else{
	                for(j = x; j < y; j+=2){
	                   	if(j != x){
	                		soma += j; 
						}
	                }
	            }
	        }
	        
	        printf("%d\n", soma);
	        soma = 0;  		
    }
    
    return 0;
}
