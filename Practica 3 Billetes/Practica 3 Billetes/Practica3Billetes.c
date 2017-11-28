#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
void cuenta_billetes_monedas(int, int[], int[]); //int cantidad, int array valor, int array numero
int main()
{
	int valor[9] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };
	int numero[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
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
	int i = -1;
	while (euros > 0)
	{
		i++;
		numbilletes[i] = euros / billetes[i];
		euros = euros %  billetes[i];
	}

	//imprimir array

	printf("\n**** NUMERO DE BILLETES ******\n\n");

	for (i = 0; i < 7; i++)
	{
		if (numbilletes[i] == 0)
		{
		}
		else
		{
			if (numbilletes[i] == 1)
			{
				printf(" %d billete de %d euros. ", numbilletes[i], billetes[i]);
				printf("\n\n");
			}
			else
			{
				printf(" %d billetes de %d euros. ", numbilletes[i], billetes[i]);
				printf("\n\n");
			}
		}
	}
	printf("\n**** NUMERO DE MONEDAS ******\n\n");

	for (i = 7; i < 8; i++)
	{
		if (numbilletes[i] == 0)
		{
		}
		else {
			if (numbilletes[i] == 1)
			{
				printf(" %d moneda de %d euros. ", numbilletes[i], billetes[i]);
				printf("\n\n");
			}
			else
			{
				printf(" %d monedas de %d euros. ", numbilletes[i], billetes[i]);
				printf("\n\n");
			}
		}
	}
	for (i = 8; i < 9; i++)
	{
		if (numbilletes[i] == 0)
		{
		}
		else {
			if (numbilletes[i] == 1)
			{
				printf(" %d moneda de %d euro. ", numbilletes[i], billetes[i]);
				printf("\n\n");
			}
			else
			{
				printf(" %d monedas de %d euro. ", numbilletes[i], billetes[i]);
				printf("\n\n");
			}
		}
	}
}