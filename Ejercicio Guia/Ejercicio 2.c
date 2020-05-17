#include<stdio.h>

void main(){
	
	int ladoA;
	int ladoB;
	printf("Ingrese lado a de rectangulo:\n");
	scanf("%d", &ladoA);
	printf("Ingrese lado b de rectangulo:\n");
	scanf("%d", &ladoB);
	float perimetro = (float) 2 * (ladoA+ladoB);
	float area = (float) (ladoA*ladoB);
	printf("El perimetro del rectangulo es: %f\n", perimetro);
	printf("EL area del rectangulo es: %f", area);
	
	
	
}
