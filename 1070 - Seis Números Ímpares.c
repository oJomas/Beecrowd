#include <stdio.h>
 
int main() {
    int i, x;
    
    scanf("%d", &x); 
    
    if(x % 2 == 0){
    	for(i = x+1; i <= x+12; i += 2){
        	printf("%d\n", i);
    	}
	}else{
    	for(i = x; i <= x+11; i += 2){
        	printf("%d\n", i);
		}	
	}
	
	return 0;
    
}
