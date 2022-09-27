#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

float Aritmetica(float, float, float);
float Ponderada(float, float, float);
float Harmonica(float, float, float);

int main() {
	float nota1, nota2, nota3, resultado;
	char media;
	
	printf("Informe o tipo de media (A)Aritmetica (P)Ponderada (H)Harmonica: ");
  	scanf("%c", &media);

  	printf("Informe a nota 1: ");
  	scanf("%f", &nota1);
  	
  	printf("Informe a nota 2: ");
  	scanf("%f", &nota2);
  	
  	printf("Informe a nota 3: ");
  	scanf("%f", &nota3);
  	
  	switch(media) {
	   	case 'A':
	   		resultado = Aritmetica(nota1, nota2, nota3);
	      	break; 
	   	case 'P':
	   		resultado = Ponderada(nota1, nota2, nota3);
	      	break; 
		case 'H':
			resultado = Harmonica(nota1, nota2, nota3);
			break;
			}

	printf("\nMedia= %f", resultado);
	return 0;
}

float Aritmetica(float nota1, float nota2, float nota3) {
  return (nota1 + nota2 + nota3)/3;
} 

float Ponderada(float nota1, float nota2, float nota3){
  return (nota1 * 5 + nota2 * 3 + nota3 * 2)/10;
} 

float Harmonica(float nota1, float nota2, float nota3){
  return 3/(1/nota1+1/nota2+1/nota3);
} 

