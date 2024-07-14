#include <stdio.h>
 
int main() {
    double m[12][12], soma = 0;
    int c = 1, l, i = 12;
    char op[1];
    
    scanf("%s", &op);
    
    for(c = 0; c < 12; c++)
    for(l = 0; l < 12; l++)
        scanf("%lf", &m[c][l]);
    
    for(c = 0; c < 12; c++){
    	for(l = i; l < 12; l++)
    		soma += m[c][l];
        i--;	
	}

    if(op[0] == 'M') soma = soma / 66;
    
    printf("%.1lf\n", soma);
    return 0;
}
