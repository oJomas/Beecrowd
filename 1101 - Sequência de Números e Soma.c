#include <stdio.h>
 
int main() {
    int m, n, i, j;
    
    
    while(scanf("%d %d", &m, &n)){
    	j=0;
        if(m < 0 || m ==0 || n < 0 || n == 0){
            break;
        }
        if(m > n){
        	for(i = n ; i <= m; i++){
         		j += i;
                printf("%d ", i);
            }  
            printf("Sum=%d\n", j);
    
        }else{
        	for(i = m ; i <= n; i++){
                j += i;
                printf("%d ", i);
            } 
            printf("Sum=%d\n", j);
            
        }
    }
    
    
    return 0;
}
