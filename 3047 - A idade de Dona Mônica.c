#include <stdio.h>
 
int main() {
    int monica;
    scanf("%d", &monica);
    
    if(monica <= 40 || monica > 110){
        scanf("%d", &monica);
    }
    
    int filho1, filho2, filho3;
    scanf("%d %d", &filho1, &filho2);
    
    if(filho1 > monica || filho2 > monica || filho1 == filho2){
        scanf("%d %d", &filho1, &filho2);
    }
       
    filho3 =  monica - (filho1 + filho2);
    
    if(filho3 > filho2 && filho3 > filho1){
        printf("%d\n", filho3);
        
    }else if(filho2 > filho3 && filho2 > filho1){
        printf("%d\n", filho2);
        
    }else printf("%d\n", filho1);
        
    return 0;
}
