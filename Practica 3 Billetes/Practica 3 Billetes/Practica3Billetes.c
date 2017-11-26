#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
void cuenta_billetes_monedas(int, int[], int[]); //int cantidad, int array valor, int array numero
int main()
{
	int valor[9] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };
	int numero[9];
	int cantidad;
	printf("Practica 3, ejercicio 2\n");
	printf("Introduce una cantidad de euros (sin centimos): ");
	scanf("%d", &cantidad);
	if (cantidad <= 0)
	{
		printf("ERROR: La cantidad debe ser mayor que cero.\n");
		system("pause");
		return -1;
	}
	cuenta_billetes_monedas(cantidad, valor, numero);
	system("pause");
	return 0;
}
//Completar aquí la definición de la función a realizar

void cuenta_billetes_monedas(int euros, int billetes[], int numbilletes[])
{
	int i = 0;
	while (euros > 0)
	{
		numbilletes[i] = euros / billetes[i];
		euros = euros %  billetes[i];
	}

	//imprimir array

	printf("\n**** LISTADO DE LOS NUMEROS LEIDOS ******\n\n");

	for (i = 0; i < 9; i++)
	{
		printf(" %d, ", numbilletes[i]);
		printf("\n\n");
	}
	//se queda en bucle, revisar impresion y DEPURAR	
}
