/* funcion que valida si la casilla elegida es correcta o no
debe validar si la casilla esta vacia o no
llama a la funcion
retorna si esta vacia
si lo esta pone un simbolo del jugador en la casilla
si no se vuelve a empezar

print el tablerp --> imprimir cada una de las posiciciones con los simbolos que halla en el


LOS SIMBOLOS DE LOS JUGADORES VAN A SER X Y 0*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>


int main(void)

{

	int jugador = 0, ganador = 0, eleccion = 0, fila = 0, columna = 0, linea = 0;



	char board[3][3] = {

		{ '1','2','3' },

		{ '4','5','6' },

		{ '7','8','9' }

	};





	for (int i = 0; i<9 && ganador == 0; i++)

	{

		printf("\n\n");

		printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);

		printf("---|---|---\n");

		printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);

		printf("---|---|---\n");

		printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);



		jugador = i % 2 + 1;



		do

		{

			printf("\nJugador %d, Porfavor, introduce la posicion donde desee poner su %c: ",

				jugador, (jugador == 1) ? 'X' : 'O');

			scanf("%d", &eleccion);





			fila = --eleccion / 3;

			columna = eleccion% 3;

		} while (eleccion<0 || eleccion>9 || board[fila][columna]>'9');



		board[fila][columna] = (jugador == 1) ? 'X' : 'O';





		if ((board[0][0] == board[1][1] && board[0][0] == board[2][2]) ||

			(board[0][2] == board[1][1] && board[0][2] == board[2][0]))

			ganador = jugador;

		else

			for (linea = 0; linea <= 2; linea++)

				if ((board[linea][0] == board[linea][1] && board[linea][0] == board[linea][2]) ||

					(board[0][linea] == board[1][linea] && board[0][linea] == board[2][linea]))

					ganador = jugador;





	}



	printf("\n\n");
	printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);

	printf("---|---|---\n");

	printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);

	printf("---|---|---\n");

	printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);





	if (ganador == 0)

		printf("Empate.\Lo importante es participar.\n");

	else

		printf("El jugador %d es el \n \t GANADOR!!\n", ganador);


	system ("pause");
	return 0;
	
}


