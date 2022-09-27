#include <stdlib.h>
#include <stdio.h>

float imparpar (int);

main (){
	int num;
	
	printf("Entre um numero: ");
	scanf("%i", &num);
	
	if(imparpar(num)){
		printf("Seu numero e um numero impar");
	}else
	printf("Seu numero e um numero par");
}

float imparpar (int num){
	if(num%2==0){
		return 0;
	}else
	return 1;
}
