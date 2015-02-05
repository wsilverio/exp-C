#include <stdio.h>

char *testeVF(int var){
    return (var)? "verdadeiro":"falso";
}

int main(){

    char cara = 'W';
    char *p = &cara; // cara: 'W'

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

    p = frase;
    printf("\n%c == %c: %s\n", *(p+2), p[2], testeVF(   *(p + 2) == p[2]    )); // *p = 'a', *(p+1) = 'B', ... | p[0] = 'a', p[1] = 'B', ...

    return 0;
}