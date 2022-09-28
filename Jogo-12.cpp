#include <stdio.h>
#include <stdlib.h>

int result(int, int);

int main(int argc, char *argv[])
{

	int horas_inicio, horas_termino;

	printf("Digite a hora do inicio da Partida: ");
	scanf("%i",&horas_inicio);

	printf("Digite a hora do termino da partida: ");
	scanf("%i",&horas_termino); 
	
	result(horas_inicio, horas_termino);

	system("pause");	
	return 0;
}


int result (int horas_inicio, int horas_termino) {
	if(horas_inicio >= horas_termino)
	{
		int duracao = ( 24 - horas_inicio) + horas_termino;
		printf("%i",duracao);
	}else
	{
		int duracao = horas_termino - horas_inicio;
		printf("duracao: %i horas\n",duracao);
	}
}
