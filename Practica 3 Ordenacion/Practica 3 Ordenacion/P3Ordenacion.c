#define _CRT_SECURE_NO_DEPRECATE
#include <stdlib.h>
#include <stdio.h>

void insercion(double[], int);

int main()
{
	int n, j;
	double m[50];
	printf("cuantos numeros?\n");
	scanf("%d", &n);
	printf("\n\n");
	for (j = 0; j <= 50 && j < n; j++)
	{
		printf("introduce un numero:\n");
		scanf("%lf", &m[j]);
	}
	printf("\n\n Numeros Ordenados de menor a mayor:\n");
	insercion(m, n);
	system("pause");
	return 0;
}



void insercion(double m[], int n_elementos)
{
	int i, k;
	double x;
	//desde el segundo elemento
	for (i = 1; i < n_elementos; i++)
	{
		x = m[i];
		k = i - 1;
		//para k=-1 se ha alcanzado el extremo izquierdo
		while (k >= 0 && x < m[k])
		{
			m[k + 1] = m[k]; //hacer hueco para insertar
			k--;
		}
		m[k + 1] = x; //insertar x en su lugar
	}
	for (i = 0; i <= 50 && i < n_elementos; i++)
	{
		printf("%g,  ", m[i]);
	}
	printf("\n");
}