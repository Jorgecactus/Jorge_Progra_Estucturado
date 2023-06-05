// 2023_06_05_FMP.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Jorge Alejandro Delghadillo

#include <iostream>

//prosedimiento para imprimir la matriz
void relleno(int** pepe, int a, int b)
{
	srand((unsigned)time(NULL));//semmillero para generar numeros aleatorios 
	for (int i = 0; i < a;i++)
	{
		for (int j = 0 ; j < b; j++)
		{
			pepe[i][j]=rand()%101;//101 datos que son de 0 a 100
			std::cout << "|" << pepe[i][j];
		}
		std::cout << std::endl;
	}
	std::cout << "Vamos a ver a pepe " << pepe << std::endl;
}

int main()
{
	int filas = 0;
	int columnas = 0;
	std::cout << "filas?\n";
	std::cin >> filas;
	std::cout << "columnas?\n";
	std::cin >> columnas;
	//creación de una matriz dinámica
	int** matriz = new int* [filas];
	for (int i = 0; i < filas; i++)
	{
		matriz[i] = new int[columnas];
	}
	//relleno de matriz
	//Nombre de función(parametro1, parametro2, parametro3);
	relleno(matriz, filas, columnas);

	delete[]matriz;
	matriz = NULL;
	std::cout << "Vamos a ver la matriz " << matriz << std::endl;
}