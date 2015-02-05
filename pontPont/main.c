#include <stdio.h>

int main(){

    char meses[12][3] = {"Jan", "Fev", "Mar", "Abr", "Mai", "Jun", "Jul", "Ago", "Set", "Out", "Nov", "Dez"}; // sem \0
    char *mes = &meses[0][0];

    for(int i = 0; i < 12; i++){
        for (int j = 0; j < 3; j++){
            printf("%c", *(mes++));
        }
        printf("\n");
    }

    printf("\n");


    char *pmeses[12] = {"Jan", "Fev", "Mar", "Abr", "Mai", "Jun", "Jul", "Ago", "Set", "Out", "Nov", "Dez"};
    char *(*pmes)[] = &pmeses;
    char *(**pletra)[] = &pmes;

    for(int i = 0; i < 12; i++)
        printf("%c: %s\n", *(**pletra)[i], *(*pmes+i));

    return 0;
}