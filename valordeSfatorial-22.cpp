#include <stdio.h>
#include <stdlib.h>

float som(int num) { 
	float s = 1;
	for(float n = 1; n <= num; n++){
		float i = 1;
		while(i<n){
			num *= i;
			i++ ;
		}
		s = s + 1/n;
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
