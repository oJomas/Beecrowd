#include <stdio.h>
#include <math.h>
int main() {
    double A, B, C, baskara, delta;
    
    scanf("%lf %lf %lf", &A, &B, &C);
   	delta = B*B-4*A*C;
    if(A > 0 && B > 0 && C > 0 && delta > 0){
        baskara = (-B+sqrt(delta))/(2*A);
        printf("R1 = %.5lf\n", baskara);
        baskara = (-B-sqrt(B*B-4*A*C))/(2*A);
        printf("R2 = %.5lf\n", baskara);

    }else{
        printf("Impossivel calcular\n");
    }
    return 0;
}
