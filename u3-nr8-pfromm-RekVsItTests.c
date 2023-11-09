#include <stdio.h>

//Division in Iteration und Rekursion
//----------------------------------------------------------------------------
// Rekursion: Wenn die Funktion sich selbst aufruft.
// 1.Wir brauchen immer eine Abbruchbedingung als Basecase.
// 2. Ausgabe des Basecase bestimmen. Was würden wir Ausgeben, wenn wir beim Basecase wären.
// 3. Von nun an müssen wir dafür sorgen, dass der Basecase eintreten kann.

//Division Iteration:
int divit(int dividend, int divisor){
	int res = 0;
	while (dividend >= divisor){
		dividend = dividend - divisor;
		res++;
	}
	return res;
}

//Divison Rekursion:
int divrek(int dividend, int divisor){
	if (dividend < divisor) {
		return 0; // Return im Basecase: Beispiel: Ergebnis von 1/2 = 0.
	}		
	return 1 + divrek(dividend-divisor, divisor);
}


//Modulo in Iteration und Rekursion
//----------------------------------------------------------------------------

//Modulo Iteration:
int modit(int dividend, int modulo){
	while (dividend >= modulo){
		dividend = dividend - modulo;		
	}
	return dividend;
}

//Modulo Rekursion:
int modrek(int dividend, int modulo){
	if (dividend < modulo) {
		return dividend;
	}
	return modrek(dividend-modulo, modulo);
}


//Fibonacci in Iteration und Rekursion
//----------------------------------------------------------------------------

//Fibonacci Rekursion
int fib(int in) {
	if (in == 1){
		return 1;
	}
	if (in == 2){
		return 1;
	}
	return fib(in-1) + fib(in-2); //Ableitung aus der mathematischen Formel.
}

int fibit(int in){
	if (in == 1){
		return 1;
	}
	if (in == 2){
		return 1;
	}
	
	int num1 = 1;
	int num2 = 1;
	int sum = num1 + num2;
	int pos = 3; // Counter.
	
	while (pos < in	){
		num1 = num2;
		num2 = sum;
		sum = num1 + num2;
		pos++;
	}
	return sum;
}




// main(void) 
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
// Iteration: Linearer Verlauf
// Rekursion: Exponentieller Verlauf => kann ne weile Dauern, auch auf dem MacBook Pro von Leon.

int main(void){
	
	int res = divit(7,2);
	printf("divit: %d\n", res);
	
	res = divrek(8,2);
	printf("divrek: %d\n", res);
	
	res = modit(7,2);
	printf("modit: %d\n", res);
	
	res = modrek(3,5);
	printf("modrek: %d\n", res);
	
	printf("fibonacci rekursion: %d\n", fib(20));
	
	printf("fibonacci iteration: %d\n", fibit(20));
	
	return 0;
}