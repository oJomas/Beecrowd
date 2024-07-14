#include <stdio.h>
 
int main() {
    float salario, isento = 2000;
    
    scanf("%f", &salario);
    
    if(salario < 4500){
        if(salario < 3000){
            if(salario <= 2000) printf("Isento\n");
            else printf("R$ %.2f\n", (salario - isento)*0.08);
        }else{
        	if(salario > 2000 && salario <= 3000) 
				printf("R$ %.2f\n", (salario - isento)*0.08);
        	else 
				printf("R$ %.2f\n", 1000*0.08 + (salario-3000)*0.18);
		}
		 
    }else{
    	if(salario > 3000 && salario <= 4500) 
			printf("R$ %.2f\n", ((salario - isento - 1500)*0.08)+((salario - isento - 1000)*0.18));
    	else 
			printf("R$ %.2f\n", (1000*0.08)+(1500*0.18)+((salario - 4500)*0.28));
	} 
    
    return 0;
}
