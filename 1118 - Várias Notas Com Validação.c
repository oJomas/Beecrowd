#include <stdio.h>
 
int main() {
    int saida, i, x;
    float a, b, soma;
    
    do{
    	i=0;
    	soma = 0;
    	x=0;
    	saida = 4;
        while(i < 2){
            scanf("%f", &a);
            if(a > 0 && a <= 10){
                i++;
                soma += a;
            }else printf("nota invalida\n");
            
            scanf("%f", &b);
            if(b > 0 && b <= 10){
                i++;
                soma += b;
            }else printf("nota invalida\n");
        }
        
        printf("media = %.2f\n", soma/2);
        
       	while(x < 2){
			if(saida == 1 || saida == 2) x++;
			else{
				printf("novo calculo (1-sim 2-nao)\n");
      			scanf("%d", &saida); 
			}	
		}
    }while(saida == 1);
    return 0;
    
}
