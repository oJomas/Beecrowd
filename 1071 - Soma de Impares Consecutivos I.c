#include <stdio.h>
 
int main() {
    int X, Y, Z = 0, i;
    
    scanf("%d %d", &X, &Y);
    
        if(X > 0 && Y > 0){
        	if(X > Y){
        		for(i = Y; i < X; i++){
        			if(i % 2 != 0) Z += i;
				}
			}else{
				for(i = X; i < Y; i++){
					if(i % 2 != 0)
						Z += i;
				}
			}
			
		}else{
			if(X > Y){
        		for(i = Y+1; i < X; i++){
       		  		if(i % 2 != 0) Z+= i;
				}
			}else{
				for(i = X+1; i < Y; i++){
					if(i % 2 != 0)Z+=i;
			    }
			}
        }
     
    printf("%d\n", Z);
    return 0;

}
