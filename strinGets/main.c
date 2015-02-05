#include <stdio.h>

int main(){
    char str[10];

    printf("Frase: ");

    fgets(str, sizeof(str), stdin);

    printf("%s\n", str);

    return 0;
}