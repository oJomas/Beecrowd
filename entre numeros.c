#include <stdio.h>

int main(){
	int num1, num2;
	
/*A entra da Vai ser num1 = menor número e num2 = maior numero*/
	scanf("%d %d", &num1, &num2);
	
	/* O laço de retição vai repitir até num1 ser igual a num 2*/
	do{
		printf("%d\n", num1);
		// vai adicionar +1 no 'num1'
		num1++;	
	}while(num1 <= num2);
	
	return 0;
}
