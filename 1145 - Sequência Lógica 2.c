#include <stdio.h>
 
int main() {
    int x, y, i, w=1;
    
    scanf("%d %d", &x, &y);
    
    for(i = 1; i <= y; i++){
        if(w < x){
	 		w++;
           	printf("%d ", i); 
        }else{
        	w = 1;
            printf("%d\n", i);
        }
       
        
    }
    return 0;
}
