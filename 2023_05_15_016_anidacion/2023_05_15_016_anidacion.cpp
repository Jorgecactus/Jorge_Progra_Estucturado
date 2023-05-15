// 2023_05_15_016_anidacion.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//JORGE ALEJANDRO DELGADILLO

#include <iostream>

int main()
{
    //realizar conteos anidados
    for (int i = 0; i < 10; i++) { //conteo externo
        std::cout << i << " ";
        for (int j = 0; j < 10; j++) { //conteo interno
            std::cout << j << "";
        }
        std::cout << std::endl;
    }
}