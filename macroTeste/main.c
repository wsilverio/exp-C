#include <stdio.h>

int main(){
    #define teste 1
    
    if (teste){
        printf("Ola, mundo.\n");
    }

    #undef teste

    if (teste){
        printf("Ola, mundo.\n");
    }

    return 0;
}