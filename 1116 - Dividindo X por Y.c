#include <stdio.h>
 
int main() {
    int x, y, n, i;
    float j=0;
    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
        scanf("%d %d", &x, &y);
        if(y != 0) printf("%.1f\n", (float)x/y);
        else if(y == 0) printf("divisao impossivel\n");
    }
    return 0;
}
