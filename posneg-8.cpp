#include <stdlib.h>
#include <stdio.h>

float sinal (float);

main (){
	float num;
	
	printf("Entre um numero: ");
	scanf("%f", &num);
	
	if(sinal(num)){
		printf("Seu numero e positivo");
	}else
	printf("Seu numero nao e negativo");
}

float sinal (float num){
	if(num > 0)
	return 1;
	else
	return 0;
}
