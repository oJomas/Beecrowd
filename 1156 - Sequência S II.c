#include <stdio.h>
 
int main() {
 float s = 1, i, j=0;
 
 for(i = 1; s <= 39; i*2){
     j += (s+2)/i;
 }
 printf("%.2f\n", j);
    return 0;
}
