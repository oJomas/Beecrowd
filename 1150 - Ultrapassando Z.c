#include <stdio.h>
 
int main() {
    int x, z, a = 0, c = 1, i;
    scanf("%d %d", &x, &z);
    while (z <= x) scanf("%d", &z);
    for(i = x; i < z; i++){
        a += i;
        if(a > z) break;
        c++;
    }
    printf("%d\n", c);
    return 0;
}
