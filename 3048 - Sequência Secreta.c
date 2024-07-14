#include <stdio.h>

int main() {
    int sequencia, i, contador = 0;
    
    scanf("%d", &sequencia);
    int v[sequencia];
    
    for(i = 0; i < sequencia; i++){
    	scanf("%d", &v[i]);		
	}
	
	for(i = 0; i < sequencia; i++){
		if(v[i] != v[i-1] && v[i] != v[i+1]){
    		contador++;
		}
	}
		
    printf("%d\n", contador);
    return 0;
}
