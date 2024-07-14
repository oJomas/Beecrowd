#include <stdio.h>
 
int main() {
    int i, j=0, t;
    
     scanf("%d", &t);
     
    for(i = 0; i < 1000; i++){
    	printf("N[%d] = %d\n", i, j);
       j += 1;
       if(j == t){
           j = 0;
       }
    }
    return 0;
}
