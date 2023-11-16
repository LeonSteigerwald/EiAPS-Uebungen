#include <stdio.h>
// C sagt: "Macht doch was ihr wollt!"
// Pro-Tipp: Arrays aufmalen.
int main(void){
	
	int maxa = 4;
	int maxb = 5;
	int maxc = 9;
	
	int felda[] = {1, 3, 5, 7};
	int feldb[] = {2 , 4, 6, 8, 10};
	int feldc[9];
	
// (!) wir brauchen für jedes Array einen Zahlindex, 
//     da sie unterschiedlich lange sind.
	int ia = 0;
	int ib = 0;
	
	for (int ic = 0; ic < maxc; ic++) {	
	//Sonderfälle
		if (ia >= maxa){
			feldc[ic] = feldb[ib];
			ib++;
			continue;
		}  
		if (ib >= maxb){
			feldc[ic] = felda[ia];
			ia++;
			continue;
		} 	
	//Hauptteil	
		if (felda[ia] < feldb[ib]){
			feldc[ic] = felda[ia];
			ia++; // ia wird erhöht, da wir einen Wert von felda eintragen.
		} else {
			feldc[ic] = feldb[ib];
			ib++;
		}
	}
	
	for (int i = 0; i < maxc; i++) {
		printf("%d\n", feldc[i]);
	}
	
	return 0;
}