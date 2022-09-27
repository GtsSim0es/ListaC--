#include <stdlib.h>
#include <stdio.h>

float perfeito (int);

main (){
	float num;
	
	printf("Entre um numero: ");
	scanf("%f", &num);
	
	if(perfeito(num)){
		printf("Seu numero e perfeito");
	}else
	printf("Seu numero nao e perfeito");
}

float perfeito (int num){
	int i, soma;
	for(i=num; i<num; i--){
		num/2;
		soma = soma + num;
	}
	if(num == soma){
		return 1;
	}
	return 0;
}
