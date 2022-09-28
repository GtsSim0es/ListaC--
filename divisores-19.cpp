#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void div(int num) { 
int i, res, c;

c = 2;
for(i=2; i<((int)floor(sqrt(num)))+1; i++)
{
   if(num % i == 0)
   {
      c += (num/i == i) ? 1 : 2;
   }
}
 printf("numero de divisores e %d",c);
}

int main() {

int num; 

printf("Informe numero para ver quantos divisores são possiveis: "); 

scanf("%i", &num); 

div(num); 

    return 0;

}
