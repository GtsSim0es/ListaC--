#include <stdio.h>
#include <stdlib.h>

int crescente(int, int, int);

int main(){
int a, b,c;

printf (" NUMERO 1 : \n");
scanf (" %i", & a);

printf (" NUMERO 2 : \n");
scanf (" %i", & b);

printf (" NUMERO 3 : \n");
scanf (" %i", & c);

crescente(a,b,c);

return 0;

}

int crescente(int a, int b, int c){
	if (a > c) {
		int cres = c;
		c = a;
		a = cres;
	}

	if (a > b) {
		int cres = b;
		b = a;
		a = cres;
}

	if (b > c) {
		int cres = c;
		c = b;
		b = cres;
	}
	
	printf("%d %d %d", a, b, c);
	return 0;
}


