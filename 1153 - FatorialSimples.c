#include <stdio.h>
 
typedef struct{
	int n;
	int i;
	int a;
	
}numero;
int main() {
	numero numeros;
	numeros.a = 1;
    scanf("%d", &numeros.n);
    if(numeros.n > 0 && numeros.n <= 13){
        for(numeros.i = 0; numeros.i < numeros.n; numeros.i++){
        	numeros.a *= numeros.n-numeros.i; 	
		}
        printf("%d\n",numeros.a);
    }
    
    return 0;
}
