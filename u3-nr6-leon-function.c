#include <stdio.h>

int prim (int input){
	if (input == 0 || input == 1){
		printf("%d ist als Eingabe nicht zugelassen!\n", input);
		return 0;
	}
	for(int i = 2; i < input; i++){
		int res;
		res = input % i;
		
		if (res == 0){
			return 1;
		}
	}
}

int printresult(int eingabe){
	int test = prim(eingabe);
	if (test == 0){
		printf("%d ist EINE Primzahl\n", eingabe);
	} else if (test ==1){
		printf("%d ist keine Primzahl\n", eingabe);
	}
	
}

int main(void){	

	for(int i = 0; i<= 100; i++){
		printresult(i);
	}
	
	return 0;
}