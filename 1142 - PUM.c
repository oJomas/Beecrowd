#include <stdio.h>
 
int main() {
    int n, i, j=0, a=0, x=1;
    
    scanf("%d", &n);
 
    for(i = 0; i < n; i++){
        for(j = 0; j < 3; j++){
        	printf("%d ", a+x);
        	x++;
		}
        printf("PUM\n");
        a++;
 
    }
    return 0;
}
