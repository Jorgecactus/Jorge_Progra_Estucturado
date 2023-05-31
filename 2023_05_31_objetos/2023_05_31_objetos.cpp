// 2023_05_31_objetos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Jorge Delgadillo
// Syntaxis de objetos
//ENUM - STRUCT

#include <iostream>
#include <string>
#include <locale>
#include <windows.h>

struct Juego_Mesa
{
    std::string nombre,autor;
    int num_jug =0;
}guardados[10];

enum armas {shorty = 100, knife, shutgun, sniper};
enum charizard { envite_igneo=150, vuelo=80, terremoto=100, lanzallamas=100 };

int main()
{

    Juego_Mesa guardados[10];
    guardados[0].nombre = "dodos riding dinos";
    guardados[0].autor = "caravana gamelab";
    guardados[0].num_jug = 6;
    std::cout << guardados[0].nombre << std::endl;
    std::cout << guardados[0].autor << std::endl;
    std::cout << guardados[0].num_jug << "\n" << std::endl;

    armas arma1 = shorty;
    std::cout << arma1 << std::endl;

    charizard ataque1 = envite_igneo;
    charizard ataque2 = vuelo;
    charizard ataque3 = terremoto;
    charizard ataque4 = lanzallamas;
    std::cout << ataque1 << std::endl;
    std::cout << ataque2 << std::endl;
    std::cout << ataque3 << std::endl;
    std::cout << ataque4 << std::endl;

}