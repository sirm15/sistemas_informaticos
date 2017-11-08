// practica 2.c
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double numx, numy;

//DECLARACIONES DE FUNCIONES
int menu(); //declaracion de la funcion menu
int desplazar();//¿necesario poner int?
int ParImpar();//""
void operacionesLogicasBits();
int ponerACeroBit();
long factorial();
int cambiarBit();
double mediaAritmetica();

int main()
{
	//DEFINICIONES DE VARIABLES
	int opcion; //opcion elegida del menu
	int x=0, y=0, z=0, i=0;
	long factnum, factres;
	double cambiados;
	double num1 = 0, num2 = 0, num3 = 0, num4 = 0, res;
	//int mod=0;
	printf("PRACTICA 2 \n");         //no se imprime	
	printf("===========\n");         //no se imprime
	opcion = menu(); //llama/invoca a la funcion menu

	while (opcion !=10) //sentencia repetitiva
	{
		switch (opcion) //sentencia condicionals
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
			operacionesLogicasBits();
			break;

		case 4:
			printf("Ejercicio 4: poner a cero un bit\n");
			//llamar a la funcion "ponerACeroBit"
			printf("Introduzca un numero: \n");
			scanf("%d", &x);
			printf("Posicion del bit a poner a cero: \n");//añadir el numero introducido en binario
			scanf("%d", &y);
			z = ponerACeroBit(x, y);
			printf("El numero resultante es: %d \n", z);//añadir el resultado en binario
			break;

		case 5:
			printf("Ejercicio 5: factorial\n");
			//llamar a la funcion Factorial
			printf("Introduzca un numero: \n");
			scanf("%ld", &factnum);
			factres = factorial(factnum);
			if (factres != -1)
			{
				printf("El factorial resultante es: %d \n", factres); //el ultimo factorial correcto es el de 12!
			}
			else
			{
				printf("No es posible calcular el factorial.\n");
			}
			break;

		case 6:
			printf("Ejercicio 6: numero de bits\n");
			//llamar a la funcion "numeroBits"
			six : printf("Introduce un numero: ");
			scanf("%d", &x);
			z = numeroBits(x);
			if (z != -1)
			{
				printf("Se necesitan %d bits para representar el numero %d en binario.\n", z, x);
				break;
			}
			else
			{
				printf("Introduce un numero entero positivo.\n");
				goto six;  //goto para permitir volver a elegir numero sin volver a elegir caso en el menu
			}
			

		case 7:
			printf("Ejercicio 7: cambiar bits\n");
			// Llamar a la funci�n "cambiarBits"
			seven : printf("Introduzca un numero entero positivo: \n");
			scanf("%d", &x);
			if (x < 0)
			{
				goto seven;
			}
			printf("Posicion a partir de la cual quiere invertir los bits. \n");
			scanf("%d", &y);
			printf("¿ Cuantos bits quiere modificar a partir de la posicion %d ?\n",y);
			scanf("%d", &z);
			i = cambiarBit(x, y, z);
			if (i != -1)
			{
				printf("El numero resultante es %d\n", i);
			}
			else
			{
				printf("ERROR. Vuelva a comenzar.\n");
				goto seven;  //goto para permitir volver a elegir numero sin volver a elegir caso en el menu
			}
			break;

		case 8:
			printf("Ejercicio 8: intercambiar\n");
			// Llamar a la funci�n "intercambiar"
			printf("Introduzca variable x: \n");
			scanf("%lf", &numx);
			printf("Introduzca variable y: \n");
			scanf("%lf", &numy);
			intercambiar();
			printf("Valores intercambiados: Primero: %lf. Segundo: %lf.\n", numx, numy);
			break;

		case 9:
			printf("Ejercicio 9: media aritmetica\n");
			// Llamar a la funci�n "mediaAritmetica"
			printf("Introduzca el primer numero:\n");
			scanf("%ld", &num1);
			printf("Introduzca el segundo numero:\n");
			scanf("%ld", &num2);
			printf("Introduzca el tercer numero:\n");
			scanf("%ld", &num3);
			printf("Introduzca el cuarto numero:\n");
			scanf("%ld", &num4);
			res = mediaAritmetica(num1, num2, num3, num4);
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
			printf("Opci%cn no v%clida\n", 0xA2, 0xA0);
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

void operacionesLogicasBits()
{
	int a = 8, b = 0, c = 15, d = 93, e, r1, r2, r3, r4, r5, r6;
	r1 = a && b || c && !d;//0
	r2 = !a || b && c || d;//1
	r3 = a < b || !c > d;//0
	r4 = a + b > d - c;//0
	r5 = a && b && !c || !(a && b) && c;//1
	a = 0x12; b = 0x56; c = 0x9a; d = 0x0f; e = 0360;
	r1 = a & b | c;//154
	r2 = c & 0177;//26
	r3 = ~a | b ^ c;//-19??-->101
	r4 = e & c;//144
	r5 = r4 & ~077;//128
	r6 = (a & d) << 4 | (a & e) >> 4;//33
}

int ponerACeroBit(int n, int nPosBit)
{
	int resultado, mascara;
	mascara  = 1 << (nPosBit -1);		//tiene que ser menos uno porque sino pondrias a cero el bit siguente
	mascara = ~mascara;					//a la posicion que has elegido, es decir, si eliges poner a cero el tercer
	resultado = n & mascara;			//bit, y desplazas el uno en la mascara tres posiciones a la derecha estas
	return resultado;					//modificando el 4 bit //A NO SER QUE EL PRIMER BIT SEA 0 Y NO 1//
}

long factorial(long n)
{
	long i = 0, factorial = 1;
	if (n < 0 || n > 16) return -1;
	else
	{
		for ( i = n; i > 1 ; i--)
		{
			factorial = factorial * i;
		}
	}
	return factorial;
}

int numeroBits(int n) {
	int exp=0;
	/*for (exp = 1; exp < 1000; exp++)
	{
		if (((pow(2, exp - 1)) < n || n < (pow(2, exp))))
		{
			return exp;
		}	
	}
	*/
	if (n < 0) return -1;
	else
	{
		while (pow(2, exp) <= n)
		{
			exp++;
		}
		return exp;
	}
}

int cambiarBit(int numero, int posInicial, int nBits) {
	int respuesta, mascara = 0/*, a = posInicial*/;
	if (posInicial < 0 || nBits <= 0 || nBits > posInicial)
	{
		return -1;
	}
	else
	{	
		/*for (a = posInicial; nBits; a--)
		{
			mascara = mascara | (1 << a);
		}*/

		while (nBits != 0)
		{
			mascara = mascara | (1 << posInicial);
			posInicial--;
			nBits--;
		}

		respuesta = numero ^ mascara;
		return respuesta;
	}
}

double mediaAritmetica(double numero1, double numero2, double numero3, double numero4)
{

}

intercambiar() {
	double numz;
	numz = numx;
	numx = numy;
	numy = numz;
}