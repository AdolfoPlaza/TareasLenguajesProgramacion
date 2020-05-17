#include<stdio.h>

void main(){
	
	int segundos;
	printf("Ingrese una cantidad de segundos deseada\n");
	scanf("%d", &segundos);
	float dias = (float) segundos/86400;
	float horas = (float) segundos/3600;
	float minutos = (float) segundos/60;
	printf("segundos a dias: %f\n", dias);
	printf("segundos a horas: %f\n", horas);
	printf("segundo a minutos: %f\n", minutos);
	
}
