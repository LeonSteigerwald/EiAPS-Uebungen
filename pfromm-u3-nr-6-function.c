#include <stdio.h>

int prim(int input){ //Funktion: Primzahlen test mit Ausgabe: 0 oder 1.
	int prim = 1;  // 1 für true - 0 für flase.
	
	for (int i = 2; i < input; i++) {
		if (input % i == 0) {
			prim = 0;
		}
	}
	return prim;
} 

void printResultat(int input) { //Funktion: Ausgabe des Testresultates als Sideeffekt.
	if (prim(input)== 1){
		printf("Primzahltest für %d ist positiv.\n",input);
	} else {
		printf("Primzahltest für %d ist negativ.\n",input);
	}
}

int main(void){
	int input = 7; // Testfall 7.
	printResultat(input);
	
	
	input = 9; // Testfall 9.
	printResultat(input);
	
	return 0;
}