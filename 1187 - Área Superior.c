#include <stdio.h>
 
int main() {
    double m[12][12], soma = 0;
    int c, l, i = 12;
    char op[1];
    
    scanf("%s", &op);
    
    for(l = 0; l < 12; l++)
    for(c = 0; c < 12; c++)
        scanf("%lf", &m[c][l]);
    
    for(l = 0; l < 12; l++){
        i--;
        for(c = l + 1; c < i; c++)
            soma += m[c][l];
    }
    
    if(op[0] == 'M') soma = soma / 30;
    
    printf("%.1lf\n", soma);
    return 0;
}
