#include <stdio.h>
#include <stdlib.h>

int media(int);
float total;
int i=1;


int main(){
int flag, a;

do{
	printf ("Digite um numero positivo: ");
	scanf (" %i", &a);	
	media(a);
	i++;
	
	printf ("\nDESEJA SAIR?: (0) para sair ou (1) para continuar\n");
	scanf ("%i", &flag);
}while(flag == 1);

return 0;

}

int media(int a){
	total+=a;
	printf("Media = %.2f", total/i);
	return 0;
}


