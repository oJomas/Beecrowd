#include <stdio.h>
 
int main() {
    int n, i, j=0, x=0, u=0;
    scanf("%d", &n);
    while(n < 0 && n > 46) scanf("%d", &n);
    
    for(i = 2; i <= n; i++){
    	if(x == 0 && u == 0){
    		printf("%d ", j);
    		x++;
		}
    	j = x+u;
    	x = u;
    	u = j;
    	if(i < n) printf("%d ", j);
		else if(i == n) printf("%d\n", j);
    }
    return 0;
}
