#include <stdio.h>
#include <stdlib.h>

float som(int num) { 
	float s = 1;
	for(float n = 1; n <= num; n++){
		s = s + (num*num + 1)/(num+3);
	}
	return s;
}

int main() {

float num; 

printf("Informe um numero: "); 
scanf("%f", &num); 

printf("S = %f", som(num));
 

return 0;

}
