#include <stdio.h>
#include <stdlib.h>

void tab(int num) { 
int i, res;

for(i=0;i<=9;i++){
	res = (i+1)*num;
	printf("%i * %i = %i \n", i+1, num, res); 
}
}

int main() {

int num; 

printf("Informe numero para tabuada: "); 

scanf("%i", &num); 

tab(num); 

    return 0;

}
