#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float VolumeEsfera(float);

int main() {
	float raio;

  	printf("Informe o raio da esfera: ");
  	scanf("%f", &raio);
  	
  	float resultado = VolumeEsfera(raio);
  	printf("Volume= %f", resultado);
  	
}

float VolumeEsfera(float raio) {
	float R = pow(raio, 3);
  return (4 * 3.14159265358979323846 * R)/3;
}  
