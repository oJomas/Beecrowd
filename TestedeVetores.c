#include <stdio.h>
#include <stdlib.h>
v
int main(){
	int v[5], i;
	int f[5] = {1, 2, 3, 4, 5};
	char ai[10] = {"o", "i"};
	for(i=0;i<5;i++){
		printf("Insira um dado: ");
		scanf("%d", &v[i]);
	}
	
	printf("Dados inseridos:\n");
	for(i=0;i<5;i++){
		printf("\n%d, ", v[i]);
	}
	for(i=0;i<5;i++){
		printf("\n%d, ", f[i]);
	}
	
	for(i=0;i<5;i++){
		printf("\n%c ", l[i]);
	}
}
