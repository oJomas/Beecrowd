#include <stdio.h>
#include <stdlib.h>
int main() {
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);
    //system("cls") apagar o que foi escrito no terminal!
    system("cls");
    if(a < b && a < c){
        printf("%d\n", a);
        if(b < c){
            printf("%d\n", b);
            printf("%d\n", c);
        }else{
            printf("%d\n", c);
            printf("%d\n", b);
        }
    }else if(b < a && b < c){
        printf("%d\n", b);
        if(a < c){
            printf("%d\n", a);
            printf("%d\n", c);
        }else{
            printf("%d\n", c);
            printf("%d\n", a);
        }
    }else{
        printf("%d\n", c);
        if(a < b){
            printf("%d\n", a);
            printf("%d\n", b);
        }else{
            printf("%d\n", b);
            printf("%d\n", a);
        }
    }
	
    printf("\n%d\n%d\n%d\n", a, b, c);
    return 0;
}
