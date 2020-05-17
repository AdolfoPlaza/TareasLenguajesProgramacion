#include<stdio.h>
#include<math.h>

void main(){
	
	float a;
	float b;
	float c;
	printf("Ingrese coeficiente a:\n");
	scanf("%f", &a);
	printf("Ingrese coeficiente b:\n");
	scanf("%f", &b);
	printf("Ingrese coeficiente c:\n");
	scanf("%f", &c);
	float discriminante = sqrt((b*b) - 4*a*c);
	float x1 = ((-b) + discriminante) /2*a;
	float x2 = ((-b) - discriminante) /2*a;
	printf("x1: %d\n", x1);
	printf("x2: %d", x2);
	
}
