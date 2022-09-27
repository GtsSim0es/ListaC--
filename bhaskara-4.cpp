#include <stdio.h>
#include <conio.h>

float bhaskara(float, float, float);

int main() {
	float a, b, c, resultado;

  	printf("Informe o valor de a: ");
  	scanf("%f", &a);
  	
  	printf("Informe o valor de b: ");
  	scanf("%f", &b);
  	
  	printf("Informe o valor de c: ");
  	scanf("%f", &c);
  	
  	resultado = bhaskara(a, b, c);

	printf("\Raiz=%.0f", resultado);
	return 0;
}

float bhaskara(float a, float b, float c){
	return b*b - 4 * a *c;
}
