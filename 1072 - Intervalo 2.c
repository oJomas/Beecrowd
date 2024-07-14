#include <stdio.h>

int main() {
    int n, i, in=0, out=0;
    scanf("%d", &n);
    int x[n];
    
    for(i = 0; i < n; i++){
        scanf("%d", &x[i]);
        if(x[i] <= 20 && x[i] >= 10) in++;
        else out++;
        }
 		
 	printf("%d in\n", in);
 	printf("%d out\n", out);
		
    return 0;
}
