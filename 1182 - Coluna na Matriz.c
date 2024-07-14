#include <stdio.h>
 
int main() {
    double matriz[12][12];
    int c_operacao, c, l, i;
    char op[5];
    double soma = 0;
    
    scanf("%d", &c_operacao);
    scanf("%s", &op);
    
    for(c = 0; c < 12; c++)
    for(l = 0; l < 12; l++)
    	scanf("%lf", &matriz[c][l]);  
    
    for(i = 0; i < 12; i++)
        soma += matriz[i][c_operacao];
        
    if(op[0] == 'M') soma = soma/12;
    
    printf("%.1lf\n", soma);
    
    return 0;
}
