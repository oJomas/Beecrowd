#include <stdio.h>
 
int main() {
    int n, i, j = 2;
    
    scanf("%d", &n);
    
    if(n > 5 && n < 2000){
        for(i = 2; i <= n; i++){
            if(i % 2 == 0){
                printf("%d^2 = %d\n", i, i*i);
            }
        }
    }
    
    return 0;
}
