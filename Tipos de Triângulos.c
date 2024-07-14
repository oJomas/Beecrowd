#include <stdio.h>
 
int main() {
    float A, B, C;
    
    scanf("%f %f %f", &A, &B, &C);
    
    if(A < (B+C) && C < (A+B) && B < (C+A)){	
	    if((A*A) == (B*B)+(C*C) || (B*B) == (A*A)+(C*C) || (C*C) == (B*B)+(A*A)){
    		printf("TRIANGULO RETANGULO\n");	 
		}else
    		    	
		    if((A*A) > (B*B)+(C*C) || (C*C) > (B*B)+(A*A) || (B*B) > (A*A)+(C*C)){
		        printf("TRIANGULO OBTUSANGULO\n");
		    }else if((A*A) < (B*B)+(C*C) || (B*B) < (A*A)+(C*C) || (C*C) < (B*B)+(A*A)){
		        printf("TRIANGULO ACUTANGULO\n");
		    }
		    if(A == B && A == C && B == C){
		        printf("TRIANGULO EQUILATERO\n");
		    }else if(A == B || A == C || B == C){
		        printf("TRIANGULO ISOSCELES\n");
		    }
	}else
		printf("NAO FORMA TRIANGULO\n");
    return 0;
}
