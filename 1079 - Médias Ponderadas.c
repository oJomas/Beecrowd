#include <stdio.h>
 
int main() {
    int n, i;
    float v1, v2, v3, media;
    scanf("%d", &n);

    for(i = 0; i < n; i++){
    	scanf("%f %f %f", &v1, &v2, &v3);
		media = (v1*2+v2*3+v3*5)/(2+3+5);
		printf("%.1f\n", media);	  
	}
	
    return 0;
}
