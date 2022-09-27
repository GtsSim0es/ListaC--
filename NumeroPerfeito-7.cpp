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
	int i, soma = 0;
	for(i=1; i<=num/2; i++){
		if(num % i ==0)
		soma = soma + i;
	}
	if(soma == num){
		return 1;
	}else
	return 0;
}
