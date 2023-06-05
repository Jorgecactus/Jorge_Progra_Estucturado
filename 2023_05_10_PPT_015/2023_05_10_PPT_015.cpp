// 2023_05_10_PPT_015.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <string.h>
#include <random>
#include <locale.h>
#include <ctime>


int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");

    std::string Pokemon[3] = { "CHARMANDER","BULBASAUR","SQUIRTLE" };
    std::string Charmander_a[2] = { "arañazo","gruñido", };
    std::string Bulbasaur_a[2] = { "placaje","gruñido", };
    std::string Squirtle_a[2] = { "placaje","látigo", };
    int CHARMANDER_D[2] = { 30,-10 };
    int BULBASAUR_D[2] = { 30,-10 };
    int SQUIRTLE_D[2] = { 30,-10 };
    int posion = 50;
    int vida[3] = { 100,100,100 };
    int opc = 0;
    std::string J1;
    std::string J2;
    int PJ1 = 0;
    int PJ2 = 0;
    std::cout << "HOLA SOY EL PROFESOR GEORGE ANTES DE INICIAR CUAL ES TU NOMBRE\n"<<std::endl;
    getline(std::cin, J1);
    std::cout << "Y CUAL ES EL NOMBRE DE TU COMPAÑERO\n" <<std::endl;
    getline(std::cin, J2);
    std::cout << "HOY ES TU INICIO PARA TU GRAN AVENTURA VEO QUE TU Y TU AMIGO NO ESPERABAN NI UN DIA MÁS" << std::endl;
    std::cout << "COMO ES DEVIDO LES ENTREGARE SU PRIMER POKEMON" << std::endl;
    std::cout << "CUAL SERA TU COMPAÑERO DE VIAJE J1 TENGO A\n  \n 1)" << Pokemon[0] << "\n 2)" << Pokemon[1] << "\n 3)" << Pokemon[2] << std::endl;
    std::cout << J1 <<" ELIGE TU POKEMON\n"<<std::endl;
    std::cin >> PJ1;
    std::cout << J2 << " ELIGE TU POKEMON\n"<<std::endl;
    std::cin >> PJ2;

}