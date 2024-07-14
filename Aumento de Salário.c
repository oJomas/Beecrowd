#include <stdio.h>
 
int main() {
    float salario;
    
    scanf("%f", &salario);
    
    if(salario <= 2000){
        if(salario <= 1200){
            if(salario <= 800){
                if(salario <= 400){
                    printf("Novo salario: %.2f\n", (salario * 0.15)+salario);
                    printf("Reajuste ganho: %.2f\n", (salario * 0.15));
                    printf("Em percentual: 15 %\n");
                }else{
                    printf("Novo salario: %.2f\n", (salario * 0.12)+salario);
                    printf("Reajuste ganho: %.2f\n", (salario * 0.12));
                    printf("Em percentual: 12 %\n");
                }
            }else{
                printf("Novo salario: %.2f\n", (salario * 0.10)+salario);
                printf("Reajuste ganho: %.2f\n", (salario * 0.10));
                printf("Em percentual: 10 %\n");
                }
        }else{
            printf("Novo salario: %.2f\n", (salario * 0.07)+salario);
            printf("Reajuste ganho: %.2f\n", (salario * 0.07));
            printf("Em percentual: 7 %\n");
        }
    }else{
        printf("Novo salario: %.2f\n", (salario * 0.04)+salario);
        printf("Reajuste ganho: %.2f\n", (salario * 0.04));
        printf("Em percentual: 4 %\n");
        
    }
    return 0;
}
