#include<stdio.h>


void main(){
	float precio;
	float descuento;
	printf("Ingrese precio\n");
	scanf("%f", &precio);
	printf("Ingrese descuento\n");
	scanf("%f", &descuento);
	float resultado = precio - ((precio*descuento) /100);
	printf("El precio total es: %f", resultado);
	
}
