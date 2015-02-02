#include <stdio.h>

typedef enum {
    false, true
} boolean;

int main(){
    
    boolean trava = true;

    if(trava){
        printf("true\n");
    }else{
        printf("false\n");
    }

    return 0;
}