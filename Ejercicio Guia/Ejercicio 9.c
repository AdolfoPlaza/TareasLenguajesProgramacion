#include<stdio.h>

void main(){
	float num1;
	float num2;
	float num3;
	float num4;
	printf("Ingrese primer numero:\n");
	scanf("%f", &num1);
	printf("Ingrese segundo numero:\n");
	scanf("%f", &num2);
	printf("Ingrese tercer numero:\n");
	scanf("%f", &num3);
	printf("Ingrese cuarto numero:\n");
	scanf("%f", &num4);
	float suma = num1 + num2 + num3 + num4;
	float media = suma/4;
	printf("La media de los numeros es: %f", media);
	
}
