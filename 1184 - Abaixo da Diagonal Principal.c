#include <stdio.h>
 
int main() {
    double m[12][12], soma = 0;
    char op[5];
    int c, l;
    scanf("%s", &op);
    
    for(c = 0; c < 12; c++)
    for(l = 0; l < 12; l++)
        scanf("%lf", &m[c][l]);
        
    
    for(l = 0; l < 12; l++)
    for(c = l+1; c < 12; c++)
        soma += m[c][l];
    
    //A divisão por 66 são o números de célula em uma matriz de 144, 66 é os que foi somado
    //por isso a divisão vai ser por 66.
    if(op[0] == 'M') soma = soma/66;
    
    printf("%.1lf\n", soma);
    
    return 0;
}
