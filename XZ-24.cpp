#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int som(int num, int num2) { 
printf("X1-%i 2-%i", num, num2);
	return pow(num, num2);
}

int main() {

int num, num2; 

printf("Informe o valor para X: "); 
scanf("%i", &num); 

printf("Informe o valor para Z: "); 
scanf("%i", &num2); 

printf("X^Z = %i", som(num, num2));
 

return 0;

}
