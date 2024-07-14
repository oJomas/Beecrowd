#include <stdio.h>
 
int main() {
    int i, j = 60;
    for(i = 1; i <= 60; i+=3){
		printf("I=%d J=%d\n", i, j);
		j -= 5;
		if(j < 0){
			break;
		}
    }
    return 0;
}
