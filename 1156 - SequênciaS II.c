#include <stdio.h>
 
int main() {
 float s = 1, i, j=0;
 
 for(i = 1; s < 39; s+=2){
    j += s/i;
 	i *= 2;
 }
 printf("%.2f\n", j);
    return 0;
}
