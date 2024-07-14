#include <stdio.h>
#include <conio.h>
/*
O getchar() faz com o que o usuário digite um dado e tenha que aperta 'enter'
O getche faz com que o usuário digite um dado e ele é mostrado
O Getch faz com que o usuário digite um dado, mas só da para ver ele na saída(printf)
*/
int main(){
	double N1, N2, N3, N4, media = 0, notaExame;
	 
 	scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);
	 
	media = ((N1*2)+(N2*3)+(N3*4)+(N4*1))/(2+3+4+1);
	if(media >= 7){
		printf("Media: %.1lf\n", media);
	 	printf("Aluno aprovado.\n");
	 	getchar();
	}else if(media < 5){
		printf("Media: %.1lf\n", media);
		printf("Aluno reprovado.\n");
		getchar();
	}else if(media >= 5 && media < 7){
		printf("Media: %.1lf\n", media);
	 	printf("Aluno em exame.\n");
	 	scanf("%lf", &notaExame);
	 	printf("Nota do exame: %.1lf\n", notaExame);
	 	media = (media + notaExame)/2;
	 	getchar();
	 	if(media >= 5){
	 		printf("Aluno aprovado.\n");
	 		getchar();
		}else if(media < 5){
			printf("Aluno reprovado.\n");
			getchar();
		}
		printf("Media final: %.1lf\n", media);
	}	
	
}
