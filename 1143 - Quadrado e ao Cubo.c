#include <stdio.h>
 
int main() {
    int n, i, j;
    scanf("%d", &n);
    //Operador tern�rio = (codi��o) ? true : false;
    n = (n > 1 && n < 1000) ? n : scanf("%d", &n);
    for(i = 1; i <= n; i++) printf("%d %d %d\n", i, i*i, i*i*i);
    
    return 0;
}
