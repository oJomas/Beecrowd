#include <stdio.h>
 
int main() {
    int n, i, quantia, total=0, totalC=0, totalR=0, totalS=0;
    float percC, percR, percS;
    char cobaia;
    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
        scanf("%d %c", &quantia, &cobaia);
        if(quantia >= 1 && quantia <= 15){
            total += quantia;
            if(cobaia == 'C') totalC += quantia;
            else if(cobaia == 'R') totalR += quantia;
            else totalS += quantia;
        }
    }
    
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", totalC);
    printf("Total de ratos: %d\n", totalR);
    printf("Total de sapos: %d\n", totalS);
    printf("Percentual de coelhos: %.2f %\n", (float)(100*totalC)/total);
    printf("Percentual de ratos: %.2f %\n", (float)(100*totalR)/total);
    printf("Percentual de sapos: %.2f %\n", (float)(100*totalS)/total);
    return 0;
}
