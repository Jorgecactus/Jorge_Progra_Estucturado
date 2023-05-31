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
    std::string Charmander_a[2] = { "arañazo","gruñido",};
    std::string Bulbasaur_a[2] = { "placaje","gruñido", };
    std::string Squirtle_a[2] = { "placaje","látigo", };
    int CHARMANDER_D[2] = { 30,-10 };
    int BULBASAUR_D[2] = { 30,-10 };
    int SQUIRTLE_D[2] = { 30,-10 };
    int posion = 50;
    int vida[3] = { 100,100,100 };
    int opc = 0;
    std::cout << "HOLA NUEVO ENTRENADOR HOY ES TU INICIO PARA TU GRAN AVENTURA VEO QUE TU Y TU AMIGO NO ESPERABAN NI UN DIA MÁS" << std::endl;
    std::cout << "COMO ES DEVIDO LES ENTREGARE SU PRIMER POKEMON" << std::endl;
    std::cout << "CUAL SERA TU COMPAÑERO DE VIAJE J1 TENGO A 1)CHARMANDER 2)BULBASAUR 3)SQUIRTLE" << std::endl;
    std::cin >> opc;
    switch (opc)
    {
    case 1:
        std::cout << "ya veo J1 eljiste a CHARMANDER\n" << std::endl;
        std::cout << "J2 Cual elijes entre 2)BULBASAUR 3)SQUIRTLE?\n" << std::endl;
        switch (opc)
        {
        case 1:
            std::cout << "ya veo J2 eljiste a BULBASAUR\n" << std::endl;

            break;
        case 2:
            std::cout << "ya veo J2 eljiste a SQUIRTLE\n" << std::endl;

            break;
        }
        break;
    case 2:

        break;
    case 3:

        break;
    }
}

