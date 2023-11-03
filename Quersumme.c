#include <stdio.h>

int main(void){
	
	int numb = 0;
	
	printf("Aus welcher Zahl soll die Quersumme gebildet werden? ");
	scanf("%d", &numb);
	
	if (numb < 0){
		numb = numb * (-1);
	}
	printf("Aus %d soll die Quersumme gebildet werden!\n", numb);
	
	int initialNumb = numb;
	int result = 1;
	int divisor = 10;
	int sum = 0;	
	
	while (result != 0){
		result = numb%divisor;
		sum = result + sum;		
		numb = numb/10;		
	}
	
	printf("Die Quersumme von %d ist: %d !\n", initialNumb, sum);
	
	return 0;
}
