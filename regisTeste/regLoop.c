#include <limits.h>
#include <stdio.h>

int main(){
    
    for (register unsigned int a = 0; a < UINT_MAX; ++a);

    return 0;
}

/*
real    0m1.962s
user    0m1.956s
sys 0m0.004s
*/