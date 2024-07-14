#include <stdio.h>
 
int main() {
    int x[15], y[5], z[5], i, t=0, p, m=0, j;
    
    for(i = 0; i < 15; i++){
        scanf("%d", &x[i]);
    }
    
    for(i = 0; i < 15; i++){
        if(x[i] % 2 == 0){
            if(t == 5){
            	t = 0;
                for(p = 0; p < 5; p++){
                    printf("par[%d] = %d\n", p, y[p]);
                }
            	y[t] = x[i];
            	t++;
            }else{
                y[t] = x[i];
                t++;
            }
            
        }else if(x[i] % 2 != 0){
        	
           if(m == 5){
           		m = 0;
                for(j = 0; j < 5; j++){
                    printf("impar[%d] = %d\n", j, z[j]);
                } 
                z[m] = x[i];
                m++;
            }else{
                z[m] = x[i];
                m++;
            } 
        }   
    }
    for(j = 0; j < m; j++)printf("impar[%d] = %d\n", j, z[j]);
    
    for(p = 0; p < t; p++) printf("par[%d] = %d\n", p, y[p]);
    
    return 0;
}
