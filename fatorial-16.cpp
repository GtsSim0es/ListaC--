#include <stdio.h>
#include <stdlib.h>

void fat(int num) { 

int i, f=1; 

for (i=1; i<=num; i++) { 
f *= i; 
}
printf("Fatorial = %d\n", f); 

}

int main(int argc, const char * argv[]) {

int num; 

printf("Informe numero para fatorial: "); 

scanf("%d", &num); 

fat(num); 

    return 0;

}
