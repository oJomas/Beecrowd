#include <stdio.h>
 
int main() {
    int DiaIn, DiaFin, h1, m1, s1, h2, m2, s2;
    int w, x, y, z;
    scanf("Dia %d", &DiaIn);
    scanf("%d : %d : %d\n", &h1, &m1, &s1);
    scanf("Dia %d", &DiaFin);
    scanf("%d : %d : %d", &h2, &m2, &s2);
    
    w = DiaFin - DiaIn;
    x = h2 - h1;
    y = m2 - m1;
    z = s2 - s1;
    
    if(z < 0){
        z += 60;
        y--;
    }
    
    if(y < 0){
        y += 60;
        x--;
    }
    
    if(x < 0){
      x += 24;
      w--;
    }
    
    printf("%d dia(s)\n", w);
    printf("%d hora(s)\n", x);
    printf("%d minuto(s)\n", y);
    printf("%d segundo(s)\n", z);
    return 0;
}
