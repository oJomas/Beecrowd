#include <stdio.h>
 
int main() {
    int i, j, x = 7, y = 5;
    
    for(i = 1; i <= 9; i += 2){
        for(j = x; j >= y; j--){
            printf("I=%d J=%d\n", i, j);
        }
        if(j == 13){
        	break;
		}
		y += 2;
        x += 2;
    }
    return 0;
}
