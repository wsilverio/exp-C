#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define QTDE INT_MAX / 2

// FAZER O SENO ********************

int main(){
    // gnome-system-monitor

    printf("Alocando memoria...\n");
    int *p = (int *)malloc(QTDE*sizeof(int));

    if(!p){
        printf("Memoria insuficiente. Altere a constante QTDE.\n");
    }else{
        for (register int i = 0; i < QTDE; ++i){
            p[i] = i;
            // printf("%d\t", i);
        }

        printf("\nPressione ENTER para liberar a memoria.\n");
        getchar();
        printf("Liberando memoria...\n");
        free(p);
    }

    return 0;
}