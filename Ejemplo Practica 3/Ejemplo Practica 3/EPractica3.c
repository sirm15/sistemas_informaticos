#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main()
{
	 int numeros[MAX], i;
		for (i = 0; i<MAX; i++) //si se modifica el codigo para i<=MAX , se produce una corrupcion de la memoria, 11 elementos en un array de 10
		 {
		 printf("Introduzca el elemento %d: ", i);
		 scanf(" %d", &numeros[i]);
		 }
	 printf("\n**** LISTADO DE LOS NUMEROS LEIDOS ******\n\n");

		 for (i = 0; i<MAX; i++) //si se modifica el codigo para i<=MAX , aparece un elemento basura, imprime 11 elementos de un array de 10
		 printf(" %d, ", numeros[i]);
	
		 printf("\n\n");
		 system("pause");
		 return 0;
	 }