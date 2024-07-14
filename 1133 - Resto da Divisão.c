#include <stdio.h>
 
int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    
    if(x > 0 && y > 0){
        if(x > y){
            while(y < x){
                if(y % 5 == 2 || y % 5 == 3){
                	if(y != 2){
                		printf("%d\n", y);
					}
				}
				y++;  
            }
            
        }else if(y > x){
            while(x < y){
                if(x % 5 == 2 || x % 5 == 3){
                	if(x != 2){
                		printf("%d\n", x);
					}
				}  	
				x++;	
            }  
        }
    } 
    return 0;
}
