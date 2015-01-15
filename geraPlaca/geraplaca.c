/*
real    0m30.988s
user    0m28.464s
sys 0m1.864s
*/

#include <stdio.h>

int main(int argc, char const *argv[]){
    if (argc > 1){
        
        FILE *placas;

        const char* arquivo = argv[1];
    
        placas = fopen(arquivo, "w");

        for(char L1 = 'A'; L1 <= 'Z'; ++L1)
            for(char L2 = 'A'; L2 <= 'Z'; ++L2)
                for(char L3 = 'A'; L3 <= 'Z'; ++L3)
                    for(int N = 0; N < 10000; ++N)
                        fprintf(placas, "%c%c%c-%04d\n", L1, L2, L3, N);
        
        fclose(placas);
            
    }else{
        printf("Informe um nome para o arquivo.");
    }

    return 0;
}
