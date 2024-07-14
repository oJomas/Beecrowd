#include <stdio.h>
 
int main() {
    float x, media = 0, contador=0;
    
    do{
        scanf("%f", &x);
        if(x >= 0 && x <= 10){
            media += x;
            contador++;
        }else{
           printf("nota invalida\n"); 
        } 
        
    }while(contador < 2);
     
    printf("media = %.2f\n", media/2);
    return 0;
}
