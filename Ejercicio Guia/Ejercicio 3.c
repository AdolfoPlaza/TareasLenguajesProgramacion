#include<stdio.h>

void main(){
	
	int dolar;
	printf("Ingrese cantidad de dolares\n");
	scanf("%d", &dolar);
	float resultado= (float) dolar*0.92;
	printf("Dolar estadounidense\t\tEuro\n");
	printf("%d\t\t=\t\t", dolar);
	printf("%f", resultado);
	
}
