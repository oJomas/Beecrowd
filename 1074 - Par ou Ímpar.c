#include <stdio.h>
 
int main() {
    int n, i;
    scanf("%d", &n);
    int valores[n];
    if(n < 10000){
	    for(i = 0; i < n; i++){
	        scanf("%d", &valores[i]);
	    }
	}
	
	for(i = 0; i < n; i++){
		if(valores[i] == 0) printf("NULL\n");
	        
	    if(valores[i] % 2 == 0 && valores[i] != 0){
	        if(valores[i] > 0) printf("EVEN POSITIVE\n");
	        else if(valores[i] < 0)printf("EVEN NEGATIVE\n");
	           
	    }else if(valores[i] % 2 != 0 && valores[i] != 0){
	        if(valores[i] > 0) printf("ODD POSITIVE\n");
	        else printf("ODD NEGATIVE\n");
    	}
	}
    return 0;
}
