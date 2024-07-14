#include <stdio.h>
 
int main() {
 int codigo, quantidade;
 float preco = 0;
 
 scanf("%d %d", &codigo, &quantidade);
 
 switch(codigo){
    case 1:
        preco = quantidade * 4;
        printf("Total: %.2f", preco);
        break;
    case 2:
        preco = quantidade * 4.5;
        printf("Total: %.2f", preco);
        break;
    case 3:
        preco = quantidade * 5;
        printf("Total: %.2f", preco);
        break;
    case 4:
        preco = quantidade * 2;
        printf("Total: %.2f", preco);
        break;
    case 5:
        preco = quantidade * 1.5;
        printf("Total: %.2f", preco);
        break;
 }
 
 
    return 0;
}
