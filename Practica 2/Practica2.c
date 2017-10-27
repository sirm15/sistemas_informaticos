// practica 2.c
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

//DECLARACIONES DE FUNCIONES
int menu(); //declaracion de la funcion menu
int desplazar();
int ParImpar();

int main()
{
	//DEFINICIONES DE VARIABLES
	int opcion; //opcion elegida del menu
	int x=0, y=0, z=0;
	//int mod=0;
	printf("PRACTICA 2 \n");         //no se imprime	
	printf("===========\n");         //no se imprime
	opcion = menu(); //llama/invoca a la funcion menu

	while (opcion !=10) //sentencia repetitiva
	{
		switch (opcion) //sentencia condicional
		{
		case 1:
			printf("Ejercicio 1: desplazar\n"); //llama a la funcion printf
			//llamar a la funcion "desplazar"
			printf("Introduzca el numero que quiera desplazar a la derecha: \n");
			scanf("%d", &x);
			printf("Introduzca el numero de posiciones a desplazar: \n");//añadir el numero introducido en binario
			scanf("%d", &y);
			z = desplazar(x, y);
			printf("El resultado es: %d \n", z);//añadir el resultado en binario
			break;

		case 2:
			printf("Ejercicio 2: par o impar\n");
			//llamar a la funcion "parImpar"
			printf("Introduzca el numero que quiera analizar: \n");
			scanf("%d", &x);//guardo el numero a analizar en x
			y = ParImpar(x);//y va a ser igual al valor que devuelva ParImpar cuando realice su trabajo con la variable x
			y==(0) ? printf("El numero introducido es par. \n") : printf("El numero introducido es impar. \n");
			/*if (mod==0)
			{
				printf("El numero introducido es par. \n");
			}
			else
			{
				printf("El numero introducido es impar. \n");
			}*/
			break;

		case 3:
			printf("Ejercicio 3: operaciones logicas y a nivel de bits\n");
			//llamar a la funcion "operacionesLogicasBit"

			break;

		case 4:
			printf("Ejercicio 4: poner a cero un bit\n");
			//llamar a la funcion "ponerACeroBit"

			break;

		case 5:
			printf("Ejercicio 5: factorial\n");
			//llamar a la funcion Factorial

			break;

		case 6:
			printf("Ejercicio 6: numero de bits\n");
			//llamar a la funcion "numeroBits"

			break;

		case 7:
			printf("Ejercicio 7: cambiar bits\n");
			// Llamar a la funci�n "cambiarBits"

			break;

		case 8:
			printf("Ejercicio 8: intercambiar\n");
			// Llamar a la funci�n "intercambiar"

			break;

		case 9:
			printf("Ejercicio 9: media aritmetica\n");
			// Llamar a la funci�n "mediaAritmetica"

			break;

		default:
			printf("ERROR: Opcion Incorrecta.\n");
			break;
		}
		system("pause"); //llamar a la funcion "system"
		opcion = menu(); //llamar a la funcion "menu"
	}
}
//DEFINICIONES DE FUNCIONES
int menu() //definicion de la funcion "menu"
{
	int op;
	do //sentencia repetitiva
	{
		system("cls");
		printf("\n"
			"\t01.- Ejercicio 1\n"
			"\t02.- Ejercicio 2\n"
			"\t03.- Ejercicio 3\n"
			"\t04.- Ejercicio 4\n"
			"\t05.- Ejercicio 5\n"
			"\t06.- Ejercicio 6\n"
			"\t07.- Ejercicio 7\n"
			"\t08.- Ejercicio 8\n"
			"\t09.- Ejercicio 9\n"
			"\t10.- Salir\n"
			"\n"
			"Elija una opcion: ");

		scanf("%d", &op); //llamar a la funcion "scanf"
		if (op < 1 || op > 10) //sentencia condicional
		{
			//printf("Opción no válida\n");
			printf("Opci%cn no v%clida\n"), 0xA2, 0xA0;
			system("pause"); //detenerse hasta pulsar una tecla
		}
	} 
	while (op < 1 || op > 10); //condicion
	
	return op;
}

int desplazar(int n, int nPos)
{
	int nDesplazado;
	nDesplazado = n >> nPos;
	return nDesplazado;
}

int ParImpar(int n)//n va a ser igual a la variable x, que es con la que he indicado que se tiene que realizar la funcion
{
	int resto;//creo una nueva variable solo para esta funcion
	resto = n % 2;//opero con las variables locales de la funcion ParImpar
	return resto;//la funcion devuelve el valor de resto, que gracias a y=ParImpar(x) se va a asignar a la variable y de la funcion main
}
