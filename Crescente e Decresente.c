#include <stdio.h>

int main(){
	int X, Y;
    
    for(int i = 0; i == 10; i++){

		printf("\nDigite um número: ");
    	scanf("%d %d", &X,&Y);
    	
    	if(X != Y){
    	    

    		if(Y > X){
    			printf("Crescente\n");
    		}else{
    			printf("Decrescente\n");
    		}
    		
	    }
    }
	
	return 0;
}
