#include <stdio.h>

void printStr(char *str){
    printf("%s\n", str);
}

void printSoma(int a, int b){
    printf("%d+%d=%d\n", a,b,a+b);
}

int main(){
    
    char frase[] = "Teste\n";

    void (*p)() = printStr;

    p(frase);

    p = printSoma;

    p(1,2);

    return 0;
}