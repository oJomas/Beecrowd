#include <stdio.h>
 
int main() {
    const double P1 = 2, P2 = 3, P3 = 5;
    double A, B, C, mediaP;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    
    mediaP = ((A*P1)+(B*P2)+(C*P3))/(P1+P2+P3);
    
    printf("MEDIA = %.1lf\n", mediaP);
 
    return 0;
}
