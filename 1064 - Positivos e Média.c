#include <stdio.h>
 
int main() {
    int j = 6, i, y=0;
    float valores[j], x=0;
    
    for(i = 0; i < j; i++){
        scanf("%f", &valores[i]);
        if(valores[i] > 0){
            y++;
            x += valores[i];
        }
    }
    
    printf("%d valores positivos\n", y);
    printf("%.1f\n", x/y);
    return 0;
}
