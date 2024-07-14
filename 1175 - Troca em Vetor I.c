#include <stdio.h>
 
int main() {
    int n[20], i, y = 19;
    
    for(i = 0; i < 20; i++){
        scanf("%d", &n[i]);
    }
    
    for(i = 0; i < 20; i++){
        printf("N[%d] = %d\n", i, n[y]);
        y--;
    }
    

    return 0;
}
