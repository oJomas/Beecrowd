#include <stdio.h>
 
int main() {
    int j = 6, i, x = 0;
    float valores[j];
    
    for(i = 0; i < 6; i++){
        scanf("%f", &valores[i]);
        if(valores[i] > 0){
            x++;
        }
    }
    printf("%d valores positivos\n", x);

    return 0;
}
