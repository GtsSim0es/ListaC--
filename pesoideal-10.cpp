#include <stdlib.h>
#include <stdio.h>

float pesoideal (float, char);

main (){
	float alt;
	char genero;	
	
	
	printf("Qual a o seu Genero (M)Masculino F(Feminino): ");
	scanf("%c", &genero);
	
	printf("Qual a sua Altura?: ");
	scanf("%f", &alt);
	
	
	printf("Seu peso ideal e: %.2f", pesoideal(alt, genero));
}

float pesoideal (float alt, char genero){
	if(genero=='M'){
		return 72.7*alt-58;
	}
	if(genero=='F'){
		return 62.1*alt-44.7;
	}
	printf("Insira um genero existente");
	return 0;
}
