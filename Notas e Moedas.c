#include <stdio.h>
#include <math.h>

int main() {
    float N;

    scanf("%f", &N);
    
    if(N>0 && N <=1000000.00){
        printf("NOTAS:\n");
        printf("%d nota(s) de R$ 100.00\n", (int)N/ (int)100.00);
        N = fmod(N, 100);
        printf("%d nota(s) de R$ 50.00\n", (int)N/(int)50.00);
        N = fmod(N, 50);
        printf("%d nota(s) de R$ 20.00\n", (int)N/(int)20.00);
        N = fmod(N, 20);
        printf("%d nota(s) de R$ 10.00\n", (int)N/(int)10.00);
        N = fmod(N, 10);
        printf("%d nota(s) de R$ 5.00\n", (int)N/(int)5.00);
        N = fmod(N, 5);
        printf("%d nota(s) de R$ 2.00\n", (int)N/(int)2.00);
        N = fmod(N, 2);
        printf("MOEDAS:\n");
        printf("%d moeda(s) de R$ 1.00\n", (int)N/(int)1.00);
        N = fmod(N, 1);
        printf("%d moeda(s) de R$ 0.50\n", (int)(N/0.50));
        N = fmod(N, 0.50);
        printf("%d moeda(s) de R$ 0.25\n", (int)(N/0.25));
        N = fmod(N, 0.25);
        printf("%d moeda(s) de R$ 0.10\n", (int)(N/0.10));
        N = fmod(N, 0.10);
        printf("%d moeda(s) de R$ 0.05\n", (int)(N/0.05));
  
        //Aqui o programa não vai dividir todo o número ficando com 0.01 a mais
        //logo tem duas formas para resolver adicionando + 0.01
        //printf("%d moeda(s) de R$ 0.01\n", (int)(N/0.01+0.01));
        
        /*Ou multiplicando por *100 deixando assim o número em inteiro sem 
		precisar fazer o type casting*/
		N = fmod(N, 0.05)*100;
        printf("%.0f moeda(s) de R$ 0.01\n", (N/1));


    }
    return 0;
}
