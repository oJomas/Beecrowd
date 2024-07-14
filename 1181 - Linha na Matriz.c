# include <stdio.h>

int main(){
	double m[12][12];
	int l;
	char op[5];
	int i, j;
	double soma = 0;
	scanf("%d", &l);
	scanf("%s", &op);
	
	for(i = 0; i < 12; i++)
	for(j = 0; j < 12; j++)
		scanf("%lf", &m[i][j]);
	
	for(j = 0; j < 12; j++)
		soma += m[l][j];		
		
	if(op[0] == 'M') soma = soma/12;
	printf("%.1f\n", soma);
	
	return 0;
}
