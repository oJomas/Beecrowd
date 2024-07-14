#include <stdio.h>
 
int main() {
    long long int t, n, i, resultado, anterio1, anterio2, j;
    
    scanf("%lli", &t);
    
    for(i = 0; i < t; i++){
        resultado = 0, anterio1 = 0, anterio2 = 1;
        scanf("%lli", &n);
        
        if(n >= 0 && n <= 60){
            for(j = 0; j < n; j++){
                resultado = anterio1 + anterio2;
                anterio2 = anterio1;
                anterio1 = resultado;
            }
            printf("Fib(%lli) = %lli\n", n, resultado);
        }
    }
    return 0;
}
