#include <stdio.h>
 
int main() {
 	int i, j;
    float x=0;
    for(i = 0; i <= 20; i = i += 2){
    	x = i/10.0;
    	for(j = 1; j <= 3; ++j){
    		/*A %g caso for um n�mero inteiro motra apenas ele
    		por�m se for um com decimal, mostrar� o inteiro e o decimal.*/
    		printf("I=%g J=%g\n", x, j+x);
		}
		  
    
    }
    return 0;
}
