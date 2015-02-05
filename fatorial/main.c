#include <stdio.h>

unsigned long long fatorial(int n){
    return (n > 0)? n*fatorial(n-1):1;
}

int main(int argc, char const *argv[]){
    if(argc != 2){
        printf("Argumentos nulos ou invalidos\n");
        return 1;
    }

    int n = atoi(argv[1]);
    unsigned long long res = fatorial(n);

    if(!res)    printf("Resultado muito grande.\n");
    else        printf("%d! = %llu\n", n, res);

    return 0;
}