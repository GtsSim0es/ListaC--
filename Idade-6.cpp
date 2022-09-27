#include <stdlib.h>
#include <stdio.h>

int idade (int, int ,int);

main (){
	int anos, meses, dias;
	
	printf("Quantos anos voce tem?");
	scanf("%i", &anos);
	
	printf("Quantos meses voce tem?");
	scanf("%i", &meses);
	
	printf("Quantos dias voce tem?");
	scanf("%i", &dias);
	
	printf("Voce tem %i dias de idade", idade(anos, meses, dias));
}

int idade (int anos, int meses, int dias){
	int total;
	total = anos * 365;
	total = total + meses*30;
	total = total + dias;
	return total;
}
