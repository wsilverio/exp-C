#include <limits.h>
#include <stdio.h>

int main(){
    
    for (unsigned int a = 0; a < UINT_MAX; ++a);

    return 0;
}
/*
real    0m12.080s
user    0m12.050s
sys 0m0.018s
*/