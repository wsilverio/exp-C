#include <stdio.h>

int main(){

    char cara = 'W';
    char *p = &cara; // cara

    printf("%c\n", *p); // 'W'

    char frase[] = "aBcDe";
    p = frase; // 'a'

    do{
        printf("%c\n", *p);
    }while(*p++); // aBcDe\0

    p = frase; // 'a'

    p++; // 'B'
    printf("%c\n", *p);

    (*p)++; // 'B' + 1 = 'C'
    printf("%c\n", *p);

    *(p++); // 'c'
    printf("%c\n", *p);

    return 0;
}