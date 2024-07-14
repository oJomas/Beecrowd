#include <stdio.h>
 
int main() {
    float idade, j=0, i=0;
    while(scanf("%f", &idade)){
        if(idade > 0){
            j += idade;
            i++;
        }else break;
    }
    
    printf("%.2f\n", j/i);
    return 0;
}
