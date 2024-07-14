#include <stdio.h>
#include <math.h>
int main() {
    float A, B, C, perimetro, areaTriangulo, areaTrapezio;
    
    scanf("%f %f %f", &A, &B, &C);
    
    if(A < (B+C) && C < (A+B) && B < (C+A)){
        printf("Perimetro = %.1f\n", (A+B+C));
    }else{
    	printf("Area = %.1f\n", ((A+B)*C)/2);
    } 

    return 0;
}
