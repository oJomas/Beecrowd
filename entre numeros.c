#include <stdio.h>

int main(){
	int num1, num2;
	
/*A entra da Vai ser num1 = menor n�mero e num2 = maior numero*/
	scanf("%d %d", &num1, &num2);
	
	/* O la�o de reti��o vai repitir at� num1 ser igual a num 2*/
	do{
		printf("%d\n", num1);
		// vai adicionar +1 no 'num1'
		num1++;	
	}while(num1 <= num2);
	
	return 0;
}
