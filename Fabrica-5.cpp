#include <stdio.h>
#include <conio.h>

int min(int);
int hour(int);

int main() {
	int sec, resultado;

  	printf("Informe o tempo em segundos da fabrica: ");
  	scanf("%i", &sec);

	printf("%i hora ou %i minutos ou %i segundos",hour(sec),min(sec),sec);
}

int min(int sec){
	return sec/60;
}

int hour(int sec){
	return (sec/60)/60;
}
