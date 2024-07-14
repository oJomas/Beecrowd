#include <stdio.h>

int main() {
    const float p1 = 3.5;
    const float p2 = 7.5;
    
    double A, B, mediaP;
    
    scanf("%lf", &A);
    scanf("%lf", &B);
    
    mediaP = ((A*p1)+(B*p2))/(p1+p2);
    
    printf("MEDIA = %.5f", mediaP);
    return 0;
}
