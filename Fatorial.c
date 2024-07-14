#include <stdio.h>

int main(){
	
	int i, j, soma=1;
	scanf("%d", &j);
	for(i = 1; i <= j; i++) soma *= i;
	printf("Fatorial de %d = %d", i-1, soma);
}
