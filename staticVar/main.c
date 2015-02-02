#include <stdio.h>

int incrementa(){
    static int var = 0;
    return var += var + 1;
}

int main(){
    for (int i = 0; i < 5; ++i)
        printf("%d\n", incrementa());

    return 0;
}