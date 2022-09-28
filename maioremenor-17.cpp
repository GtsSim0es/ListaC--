#include <stdio.h>
#include <stdlib.h>

int main() {
int num, i, maior = 0, menor; 
	
printf("Informe o numero 1: "); 
scanf("%d", &num); 
menor = num;
maior = num;

for(i=1; i<=50; i++){

printf("Informe o numero %i: ", i+1); 
scanf("%d", &num); 

if(num >maior){
	maior = num;
}

if (num<menor){
	menor = num;
}

}

printf("\nMaior = %i\n", maior); 
printf("Menor = %i\n", menor); 

return 0;

}
