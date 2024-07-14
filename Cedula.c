#include <stdio.h>
 
int main() {
    int N, Y, i = 1, cem = 0, cinquenta = 0, vinte = 0, dez = 0, cinco = 0, dois = 0, um = 0;
    
    scanf("%d", &N);
    
    Y = N;
    if(N > 0 && N <= 1000000){
        while(N > i){
            if(N >= 100){
                cem++;
                N -= 100;
            }
			if(N >= 50 && N < 100){
                cinquenta++;
                N -= 50;
            }
			if(N >= 20 && N < 50){
                vinte++;
                N -= 20;
            }
			if(N >= 10 && N < 20){
                dez++;
                N -= 10;
            }
			if(N >= 5 && N < 10){
                cinco++;
                N -= 5;
            }
			if(N >= 2 && N < 5){
                dois++;
                N -= 2;
            }
			if(N >= 1 && N < 2){
                um++;
                N -= 1;
            }
        }
        
    
    printf("%d\n", Y);	
    printf("%d nota(s) de R$ 100,00\n", cem);
    printf("%d nota(s) de R$ 50,00\n", cinquenta);
    printf("%d nota(s) de R$ 20,00\n", vinte);
    printf("%d nota(s) de R$ 10,00\n", dez);
    printf("%d nota(s) de R$ 5,00\n", cinco);
    printf("%d nota(s) de R$ 2,00\n", dois);
   	printf("%d nota(s) de R$ 1,00", um);
 }
 
 
    return 0;
}
