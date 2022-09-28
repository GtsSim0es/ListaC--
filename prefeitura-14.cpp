#include <stdio.h>
#include <stdlib.h>

int crescente(int, int, int);

int main(){
int salario, salariot, i = 1, filhos, filhost, maior=0, percentual, menor=0;
int flag = '1';

do{
	printf ("Digite o salario da pessoa %i: \n", i);
	scanf (" %i", &salario);
	
	printf ("Digite o numero de filhos da pessoa %i: \n", i);
	scanf (" %i", &filhos);
	
	salariot += salario;
	
	printf ("Salario Medio: R$ %i \n", salariot/i);
	
	filhost += filhos;
	
	printf ("Numero Medio de Filhos: %i \n", filhost/i);
	
	if(salario>maior)
		maior = salario;
		
		
	printf ("O maior salario foi de: R$ %i \n", salario);
	
	printf ("\nDESEJA SAIR?: (0) para sair ou (1) para continuar\n");
	scanf ("%i", &flag);
	
	i++;
	
}while(flag == 1);

return 0;

}


