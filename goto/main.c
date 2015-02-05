#include <stdio.h>

int main(int argc, char *argv[]){

    if(argc != 2) return 1;

    int l = atoi(argv[1]);

    if (l == 5) goto label5;
    else if (l == 4) goto label4;
    else if (l == 3) goto label3;
    else if (l == 2) goto label2;
    else if (l == 1) goto label1;
    else return 1;
    
label5:
    printf("#####\n");
label4:
    printf("####\n");
label3:
    printf("###\n");
label2:
    printf("##\n");
label1:
    printf("#\n");

    printf("\n");

    return 0;
}