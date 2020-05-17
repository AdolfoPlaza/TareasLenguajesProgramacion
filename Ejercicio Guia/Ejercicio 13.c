#include<stdio.h>
#include<math.h>

void main(){
	int codigo;
	int cantidad;
	int descuento;
	int iva=19;
	int precio;
	
	printf("Ingrese codigo del producto:");
    scanf("%d", &codigo);
    
	printf("Ingrese cantidad que desea comprar: ");
	scanf("%d", &cantidad);
	
	printf("Ingrese descuento: ");
	scanf("%d", &descuento);
	
	if(codigo==123456){
	 precio=15000;
	 int subtotal =  precio*cantidad;
	int totaliva = subtotal-((subtotal*descuento)/100);
	int total = totaliva+((totaliva*iva)/100);
	
	printf("----------LOS PEQUES----------\n");
	printf("codigo producto: %d\n", codigo);
	printf("%d \n",precio);
	printf("cantidad: %d\n", cantidad);
	printf("%d \n", subtotal);
	printf("descuento: %d\n", descuento);
	printf("%d \n", totaliva);
	printf("IVA: %d\n", iva);
	printf("Total: %d\n", total);	
	}else{
		printf("Codigo invalido");
	}
	
	
	
}
