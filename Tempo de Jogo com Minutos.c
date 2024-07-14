#include <stdio.h>
 
int main() {
    int h1, h2, m1, m2;
    
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
	
	if(h1+h2 <= 48 && m1+m2 <= 120){
		if(h1 == h2 && m1 == m2){
				printf("O JOGO DUROU 24 HORA(S) E %d MINUTO(S)\n", m2-m1);
		}else{
			if(m1 > m2){
				
				if(h1>h2){
		    		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (h2+24)-h1-1, (m2+60)-m1);
		    	}else if(h2 > h1){
		    		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (h2-h1)-1, (m2+60)-m1);
				}else if(h1 == h2){
					printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h2-h1, (m2+60)-m1);
				}
		   		
			}else if(m2 > m1){
				
				if(h1 > h2){
					printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (h2+24)-h1, m2-m1);
				}else if (h1 == h2){
					printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h2-h1+(24-1), m2-m1);
				}else{
					printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h2-h1, m2-m1);
				}	
									
			}else if(m1 == m2){
				if(h1 > h2){
					printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (h2+24)-h1, m2-m1);
				}else if(h2 > h1){
					printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h2-h1, m2-m1);		
				}
			}
		}
	}
    return 0;
}
