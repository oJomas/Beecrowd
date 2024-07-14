#include <stdio.h>
 
int main() {
 	int i, j;
    float x=0;
    for(i = 0; i <= 20; i = i += 2){
    	x = i/10.0;
    	for(j = 1; j <= 3; ++j){
    		/*A %g caso for um número inteiro motra apenas ele
    		porém se for um com decimal, mostrará o inteiro e o decimal.*/
    		printf("I=%g J=%g\n", x, j+x);
		}
		  
    
    }
    return 0;
}
