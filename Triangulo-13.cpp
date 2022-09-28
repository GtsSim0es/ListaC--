#include <stdio.h>
#include <stdlib.h>

int triangulo(int, int, int);

int main() {
    int x, y, z;

    printf("Digite o valor de x: ");
    scanf("%d", &x);
    
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    
    printf("Digite o valor de z: ");
    scanf("%d", &z);
    
    triangulo(x,y,z);

    return 0;
}

triangulo(int a, int b, int c){
	
	if(a + b > c && a + c > b && b + c > a){
        printf("Os 3 lados formam um triangulo!\n");
        if(a == b && a == c)
            printf("Equilatero\n");
        else
            if(a == b || a == c || b == c)
                printf("Isosceles\n");
            else
                printf("Escaleno\n");
    }
    else
        printf("Os 3 lados NAO formam um trinagulo!\n");
        
    return 0;
}
