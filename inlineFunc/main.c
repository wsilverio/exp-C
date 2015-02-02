#include <stdio.h>

inline void Print(const char * frase){
	printf("%s\n", frase);
}

int main(){
	
	Print("Ola mundo");

	return 0;
}