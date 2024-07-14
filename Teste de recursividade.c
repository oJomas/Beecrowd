#include <stdio.h>

void imprimir(int x){

	if(x >= 0){
			printf("Números impares: %d\n", x);
				imprimir(x-2);
		
	}else{
		printf("Números impares: %d\n", x);
	}
}
int main(){
	int n;
	scanf("%d", &n);
	imprimir(n);
}
