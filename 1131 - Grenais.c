#include <stdio.h>
 
int main() {
    int Inter, Gremio, partidas=0, saida, vitorias_do_inter=0, vitorias_do_gremio=0, empate=0;
    
    while(scanf("%d %d", &Inter, &Gremio)){
        partidas++;
        if(Inter > Gremio) vitorias_do_inter++;
        else if(Gremio > Inter) vitorias_do_gremio++;
        else empate++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &saida);
        if(saida == 2) break;
    }
    
    printf("%d grenais\n", partidas);
    printf("Inter:%d\n", vitorias_do_inter);
    printf("Gremio:%d\n", vitorias_do_gremio);
    printf("Empates:%d\n", empate);
    if(vitorias_do_inter > vitorias_do_gremio) printf("Inter venceu mais\n");
    else printf("Gremio venceu mais\n");
    return 0;
}
