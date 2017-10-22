// practica 2.c
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

//DECLARACIONES DE FUNCIONES
int menu(); //declaracion de la funcion menu

int main()
{
	//DEFINICIONES DE VARIABLES
	int opcion; //opcion elegida del menu

	printf("PRACTICA 2 \n");
	printf("===========\n");
	opcion = menu(); //llama/invoca a la funcion menu

	while (opcion !=10) //sentencia repetitiva
	{
		switch (opcion) //sentencia condicional
		{
		case 1:
			printf("Ejercicio 1: desplazar\n"); //llama a la funcion printf
			//llamar a la funcion "desplazar"

			break;

		case 2:
			printf("Ejercicio 2: par o impar\n");
			//llamar a la funcion "parImpar"

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
			//printf("Opci�n no v�lida\n")
			printf("Opci%cn no v%clida\n"), 0xA2, 0xA0;
			system("pause"); //detenerse hasta pulsar una tecla
		}
	} 
	while (op < 1 || op > 10); //condicion
	
	return op;
}
