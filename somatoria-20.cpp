#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int som(int num) { 
	return num+num;
}

int main() {

int num; 

printf("Informe numero para se somar: "); 

scanf("%i", &num); 

printf("Soma= %i", som(num)); 
 

return 0;

}
