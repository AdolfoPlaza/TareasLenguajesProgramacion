#include<stdio.h>

void main(){
	
	int dias;
	int horas;
	int minutos;
	printf("Ingrese dias:\n");
	scanf("%d", &dias);
	printf("Ingrese horas:\n");
	scanf("%d", &horas);
	printf("Ingrese minutos:\n");
	scanf("%d", &minutos);
	int segundos1 = dias*86400;
	int segundos2 = horas*3600;
	int segundos3 = minutos*60;
	printf("dias a segundos: %d\n", segundos1);
	printf("horas a segundos: %d\n", segundos2);
	printf("minutos a segundos: %d", segundos3);
	
}
