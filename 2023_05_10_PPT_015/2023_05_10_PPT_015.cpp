// 2023_05_10_PPT_015.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <string.h>
#include <random>

int main()
{
    std::string Pokemon[3] = { "CHARMANDER","BULBASAUR","SQUIRTLE" };
    int CHARMANDER_D[3] = { 15,20,30 };
    int BULBASAUR_D[3] = { 15,20,30 };
    int SQUIRTLE_D[3] = { 15,20,30 };
    int posion = 50;
    int opc;
    std::cout << "HOLA NUEVO ENTRENADOR HOY ES TU INICIO PARA TU GRAN AVENTURA VEO QUE TU Y TU AMIGO NO ESPERABAN NI UN DIA MÁS" << std::endl;
    std::cout << "COMO ES DEVIDO LES ENTREGARE SU PRIMER POKEMON" << std::endl;
    std::cout << "CUAL SERA TU COMPAÑERO DE VIAJE J1 TENGO A 1)CHARMANDER 2)BULBASAUR 3)SQUIRTLE" << std::endl;
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

