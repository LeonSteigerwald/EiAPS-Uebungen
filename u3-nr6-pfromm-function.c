#include <stdio.h>

int prim(int input) {
	if (input == 1) { // Check: Ob 1 eingegeben wurde && 1 ist keine Primzahl.
		return 0; //Return beendet die Funktion
	}
	
	for (int i = 2; i < input; i++) {
		if (input % i == 0) {
			return 0;
		}
	}
	
	return 1;
} 

void printResultat(int input) {
	int res = prim(input);
	if (res) {
		printf("%d ist eine Primzahl.\n", input);
	} else {
		printf("%d ist keine Primzahl.\n", input);
	}
	}

int main(void){
	
	printResultat(7);
	printResultat(9);
	
	return 0;
}