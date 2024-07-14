#include <stdio.h>
 
int main() {
    float s = 1, i, j=0;
    for(i = 1; i <= 100; i++) j += s/i;
    printf("%.2f\n", j);
    return 0;
}
