#include <stdio.h>

void imprimir(int x){

	if(x >= 0){
			printf("N�meros impares: %d\n", x);
				imprimir(x-2);
		
	}else{
		printf("N�meros impares: %d\n", x);
	}
}
int main(){
	int n;
	scanf("%d", &n);
	imprimir(n);
}
