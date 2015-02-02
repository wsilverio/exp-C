#include <stdio.h>

#define min(a, b) ((a < b)? a : b)
#define max(a, b) ((a > b)? a : b)

int main(){
    
    int a, b;

    printf("a: ");
    scanf("%d", &a);

    printf("b: ");
    scanf("%d", &b);

    printf("\nmin: %d\nmax: %d\n", min(a, b), max(a, b));

    return 0;
}