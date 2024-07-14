#include <stdio.h>
 
int main() {
    int i, x, maior = 0, posicao;
    
    for(i = 1; i <= 100; i++){
        scanf("%d", &x);
        
        if(x > maior){
            maior = x;
            posicao = i;
        }
    }
    
    printf("%d\n", maior);
    printf("%d\n", posicao);
    return 0;
}
