#include <stdio.h>
#include <math.h>

const int b_dois = 2, b_oito = 8, b_dezesseis = 16;

void binario(int decimal){
	if(decimal > 0){
		if(decimal == 0){
			printf("%d", (int)decimal);
		}else{
			binario(decimal/b_dois);
			printf("%d", (int)(fmod(decimal, b_dois)));
		}
	}else{
		
	}
}

int main(){
	int decimal;
	printf("Digite um valor para ser convertido: ");
	scanf("%d", &decimal);
	
	binario(decimal);
	
	return 0;
}
