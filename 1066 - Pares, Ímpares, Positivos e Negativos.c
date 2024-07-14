#include <stdio.h>
 
int main() {
    int valores[5], i, x=0, y=0, z=0, w=0;
    
    for(i = 0; i < 5; i++){
        scanf("%d", &valores[i]);
        if(valores[i] % 2 == 0) x++;
        if(valores[i] > 0) z++;
        if(valores[i] < 0) y++;
        if(valores[i] % 2 != 0) w++;
    }
    
    printf("%d valor(es) par(es)\n", x);
    printf("%d valor(es) impar(es)\n", w);
    printf("%d valor(es) positivo(s)\n", z);
    printf("%d valor(es) negativo(s)\n", y);
    return 0;
}
