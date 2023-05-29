// 2023_05_29_Lista_Enlazadas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Jorge Alejandro Delgadillo

#include <iostream>
#include <stdio.h>
#include <string>
#include <locale>
#include <windows.h>

class nodo 
{
public:
	std::string nombre;
	int vida =0;
	int edad=0;
	int ataque=0;
	nodo* next =0;

};

int main()
{
	nodo* cabeza = NULL;
	nodo* cuello = NULL;
	nodo* pecho = NULL;
	nodo* abdomen = NULL;
	nodo* brazos = NULL;
	nodo* piernas = NULL;
	nodo* pies = NULL;

	cabeza = new nodo();
	cuello = new nodo();
	pecho = new nodo();
	abdomen = new nodo();
	brazos = new nodo();
	piernas = new nodo();
	pies = new nodo();

	cabeza->edad = 30;
	cabeza->nombre = "Pedro";
	cabeza->vida = 100;
	cabeza->ataque = 15;
	cabeza->next = cuello;

	cuello->edad = 28;
	cuello->nombre = "Luis";
	cuello->vida = 80;
	cuello->ataque = 25;
	cuello->next = pecho;

	pecho->edad = 23;
	pecho->nombre = "Paco";
	pecho->vida = 80;
	pecho->ataque = 25;
	pecho->next = abdomen;

	abdomen->edad = 100;
	abdomen->nombre = "Dios";
	abdomen->vida = 500;
	abdomen->ataque = 50;
	abdomen->next = brazos;

	brazos->edad = 18;
	brazos->nombre = "Luz";
	brazos->vida = 80;
	brazos->ataque = 25;
	brazos->next = piernas;

	piernas->edad = 20;
	piernas->nombre = "Pablo";
	piernas->vida = 120;
	piernas->ataque = 35;
	piernas->next = pies;

	pies->edad = 23;
	pies->nombre = "Adam";
	pies->vida = 100;
	pies->ataque = 35;
	pies->next = NULL;

	//imprimir la lista enlazada
	while (cabeza != NULL) 
	{
		std::cout << cabeza->nombre << " " << cabeza->edad  << " " << cabeza->vida << " " << cabeza->ataque << std::endl;
		cabeza = cabeza->next;
	}

}