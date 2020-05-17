#include<stdio.h>

void main(){
	
	float pi=3.1416;
	int radio;
	printf("Ingrese le radio de la circunferencia:\n");
	scanf("%d", &radio);
	float perimetro = (float) 2*pi*radio;
	float area = (float) (radio*radio)*pi;
	float volumen = ((radio*radio*radio)*pi*4)/3;
	printf("El perimetro de la circunferencia es: %f\n", perimetro);
	printf("El area de la circunferencia es: %f\n", area);
	printf("El volumen de la esfera es: %f\n", volumen);
	
}
