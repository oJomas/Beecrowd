#include <stdio.h>
 
int main() {
    int a, n, i, t=0;
    scanf("%d %d", &a, &n);
    while(n <= 0) scanf("%d", &n);
    for(i = a; i < a+n; i++) t += i;
    
    printf("%d\n", t);
    
    return 0;
}
