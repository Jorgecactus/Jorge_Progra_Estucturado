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
    int ac1 = 0;
    int movJ1 = 0;
    int movJ2 = 0;
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
    std::cout << "OK, " << J1 << " ELIGISTE A " << Pokemon[PJ1-1] << " Y " << J2 << " ELIGIO A " << Pokemon[PJ2-1] << std::endl;
    std::cout << "BUENO DESPUES DE ELEGIR A SU POKEMON QUE LES PARESE TENER UN COMBATE POKEMON PARA QUE VEAN UN POCO DE LO QUE LES ESPERAEN SU VIAJE "<<J1<<" y "<<J2<<std::endl;
    std::cout << "LISTO PARA SU COMBATE?" << std::endl;
    system("PAUSE");
    system("CLS");
    std::cout << "GET READY TO DE RUMBLE" << std::endl;
    while (vida[PJ1 - 1] > 0 && vida[PJ2 - 1] > 0)
    {
        std::srand(std::time(0));
        int random1 = std::rand() % 11;
        int random2 = std::rand() % 11;
        if (random1 > random2) {
            std::cout << J1 << " " << Pokemon[PJ1 - 1] << "    LP: " << vida[PJ1 - 1] << "\n" << std::endl;
            std::cout << J2 << " " << Pokemon[PJ2 - 1] << "    LP: " << vida[PJ2 - 1] << "\n" << std::endl;
            std::cout << J1 << " 1. LUCHAR\n2. POSION\n" << std::endl;
            std::cin >> ac1;
            switch (ac1)
            {
            case 1:
                std::cout << J1 << " QUE HARAS\n";
                if (PJ1 - 1 == 0) {
                    for (int a = 0; a < 2; a++) {
                        std::cout << a + 1 << ". " << Charmander_a[a] << std::endl;
                    }
                    std::cin >> movJ1;
                    std::cout << "CARMANDER UTILIZO " << Charmander_a[movJ1-1] << std::endl;
                    if (movJ1 == 2) {
                        BULBASAUR_D[0] - 10;
                        SQUIRTLE_D[0] - 10;
                    }
                    else {
                        vida[PJ2 - 1] = vida[PJ2 - 1] - (CHARMANDER_D[0] + random1);
                    }
                    system("PAUSE");
                    system("CLS");

                }
                else if (PJ1 - 1 == 1) {
                    for (int a = 0; a < 2; a++) {
                        std::cout << a + 1 << ". " << Bulbasaur_a[a] << std::endl;
                    }
                    std::cin >> movJ1;
                    std::cout << "BULBASAUR UTILIZO " << Bulbasaur_a[movJ1 - 1] << std::endl;
                    if (movJ1 == 2) {
                        CHARMANDER_D[0] - 10;
                        SQUIRTLE_D[0] - 10;
                    }
                    else {
                        vida[PJ2 - 1] = vida[PJ2 - 1] - (BULBASAUR_D[0] + random1);
                    }
                    system("PAUSE");
                    system("CLS");
                }
                else if (PJ1 - 1 == 2) {
                    for (int a = 0; a < 2; a++) {
                        std::cout << a + 1 << ". " << Squirtle_a[a] << std::endl;
                    }
                    std::cin >> movJ1;
                    std::cout << "CARMANDER UTILIZO " << Squirtle_a[movJ1 - 1] << std::endl;
                    if (movJ1 == 2) {
                        CHARMANDER_D[0] - 10;
                        SQUIRTLE_D[0] - 10;
                    }
                    else {
                        vida[PJ2 - 1] = vida[PJ2 - 1] - (SQUIRTLE_D[0] + random1);
                    }
                    system("PAUSE");
                    system("CLS");
                }
                break;
            case 2:
                vida[PJ1 - 1] = vida[PJ1 - 1] + posion;
                break;
                std::cout << J1 << " " << Pokemon[PJ1 - 1] << "    LP: " << vida[PJ1 - 1] << "\n" << std::endl;
                std::cout << J2 << " " << Pokemon[PJ2 - 1] << "    LP: " << vida[PJ2 - 1] << "\n" << std::endl;
                std::cout << J2 << " 1. LUCHAR\n2. POSION\n" << std::endl;
                std::cin >> ac1;
                switch (ac1)
                {
                case 1:
                    std::cout << J2 << " QUE HARAS\n";
                    if (PJ2 - 1 == 0) {
                        for (int a = 0; a < 2; a++) {
                            std::cout << a + 1 << ". " << Charmander_a[a] << std::endl;
                        }
                        std::cin >> movJ2;
                        std::cout << "CARMANDER UTILIZO " << Charmander_a[movJ2 - 1] << std::endl;
                        if (movJ2 == 2) {
                            BULBASAUR_D[0] - 10;
                            SQUIRTLE_D[0] - 10;
                        }
                        else {
                            vida[PJ1 - 1] = vida[PJ1 - 1] - (CHARMANDER_D[0] + random1);
                        }
                        system("PAUSE");
                        system("CLS");

                    }
                    else if (PJ2 - 1 == 1) {
                        for (int a = 0; a < 2; a++) {
                            std::cout << a + 1 << ". " << Bulbasaur_a[a] << std::endl;
                        }
                        std::cin >> movJ2;
                        std::cout << "BULBASAUR UTILIZO " << Bulbasaur_a[movJ2 - 1] << std::endl;
                        if (movJ2 == 2) {
                            CHARMANDER_D[0] - 10;
                            SQUIRTLE_D[0] - 10;
                        }
                        else {
                            vida[PJ1 - 1] = vida[PJ1 - 1] - (BULBASAUR_D[0] + random1);
                        }
                        system("PAUSE");
                        system("CLS");
                    }
                    else if (PJ2 - 1 == 2) {
                        for (int a = 0; a < 2; a++) {
                            std::cout << a + 1 << ". " << Squirtle_a[a] << std::endl;
                        }
                        std::cin >> movJ2;
                        std::cout << "CARMANDER UTILIZO " << Squirtle_a[movJ2 - 1] << std::endl;
                        if (movJ2 == 2) {
                            CHARMANDER_D[0] - 10;
                            SQUIRTLE_D[0] - 10;
                        }
                        else {
                            vida[PJ1 - 1] = vida[PJ1 - 1] - (SQUIRTLE_D[0] + random1);
                        }
                        system("PAUSE");
                        system("CLS");
                    }
                    break;
                case 2:
                    vida[PJ2 - 1] = vida[PJ2 - 1] + posion;
                    break;
                }
            }
           
        }
        else if (random1 < random2) {
            std::cout << J1 << " " << Pokemon[PJ1 - 1] << "    LP: " << vida[PJ1 - 1] << "\n" << std::endl;
            std::cout << J2 << " " << Pokemon[PJ2 - 1] << "    LP: " << vida[PJ2 - 1] << "\n" << std::endl;
            std::cout << J2 << " 1. LUCHAR\n2. POSION\n" << std::endl;
            std::cin >> ac1;
            switch (ac1)
            {
            case 1:
                std::cout << J2 << " QUE HARAS\n";
                if (PJ2 - 1 == 0) {
                    for (int a = 0; a < 2; a++) {
                        std::cout << a + 1 << ". " << Charmander_a[a] << std::endl;
                    }
                    std::cin >> movJ2;
                    std::cout << "CARMANDER UTILIZO " << Charmander_a[movJ2 - 1] << std::endl;
                    if (movJ2 == 2) {
                        BULBASAUR_D[0] - 10;
                        SQUIRTLE_D[0] - 10;
                    }
                    else {
                        vida[PJ1 - 1] = vida[PJ1 - 1] - (CHARMANDER_D[0] + random1);
                    }
                    system("PAUSE");
                    system("CLS");

                }
                else if (PJ2 - 1 == 1) {
                    for (int a = 0; a < 2; a++) {
                        std::cout << a + 1 << ". " << Bulbasaur_a[a] << std::endl;
                    }
                    std::cin >> movJ2;
                    std::cout << "BULBASAUR UTILIZO " << Bulbasaur_a[movJ2 - 1] << std::endl;
                    if (movJ2 == 2) {
                        CHARMANDER_D[0] - 10;
                        SQUIRTLE_D[0] - 10;
                    }
                    else {
                        vida[PJ1 - 1] = vida[PJ1 - 1] - (BULBASAUR_D[0] + random1);
                    }
                    system("PAUSE");
                    system("CLS");
                }
                else if (PJ2 - 1 == 2) {
                    for (int a = 0; a < 2; a++) {
                        std::cout << a + 1 << ". " << Squirtle_a[a] << std::endl;
                    }
                    std::cin >> movJ2;
                    std::cout << "CARMANDER UTILIZO " << Squirtle_a[movJ2 - 1] << std::endl;
                    if (movJ2 == 2) {
                        CHARMANDER_D[0] - 10;
                        SQUIRTLE_D[0] - 10;
                    }
                    else {
                        vida[PJ1 - 1] = vida[PJ1 - 1] - (SQUIRTLE_D[0] + random1);
                    }
                    system("PAUSE");
                    system("CLS");
                }
                break;
            case 2:
                vida[PJ2 - 1] = vida[PJ2 - 1] + posion;
                break;
                std::cout << J1 << " " << Pokemon[PJ1 - 1] << "    LP: " << vida[PJ1 - 1] << "\n" << std::endl;
                std::cout << J2 << " " << Pokemon[PJ2 - 1] << "    LP: " << vida[PJ2 - 1] << "\n" << std::endl;
                std::cout << J1 << " 1. LUCHAR\n2. POSION\n" << std::endl;
                std::cin >> ac1;
                switch (ac1)
                {
                case 1:
                    std::cout << J1 << " QUE HARAS\n";
                    if (PJ1 - 1 == 0) {
                        for (int a = 0; a < 2; a++) {
                            std::cout << a + 1 << ". " << Charmander_a[a] << std::endl;
                        }
                        std::cin >> movJ1;
                        std::cout << "CARMANDER UTILIZO " << Charmander_a[movJ1 - 1] << std::endl;
                        if (movJ1 == 2) {
                            BULBASAUR_D[0] - 10;
                            SQUIRTLE_D[0] - 10;
                        }
                        else {
                            vida[PJ2 - 1] = vida[PJ2 - 1] - (CHARMANDER_D[0] + random1);
                        }
                        system("PAUSE");
                        system("CLS");

                    }
                    else if (PJ1 - 1 == 1) {
                        for (int a = 0; a < 2; a++) {
                            std::cout << a + 1 << ". " << Bulbasaur_a[a] << std::endl;
                        }
                        std::cin >> movJ1;
                        std::cout << "BULBASAUR UTILIZO " << Bulbasaur_a[movJ1 - 1] << std::endl;
                        if (movJ1 == 2) {
                            CHARMANDER_D[0] - 10;
                            SQUIRTLE_D[0] - 10;
                        }
                        else {
                            vida[PJ2 - 1] = vida[PJ2 - 1] - (BULBASAUR_D[0] + random1);
                        }
                        system("PAUSE");
                        system("CLS");
                    }
                    else if (PJ1 - 1 == 2) {
                        for (int a = 0; a < 2; a++) {
                            std::cout << a + 1 << ". " << Squirtle_a[a] << std::endl;
                        }
                        std::cin >> movJ1;
                        std::cout << "CARMANDER UTILIZO " << Squirtle_a[movJ1 - 1] << std::endl;
                        if (movJ1 == 2) {
                            CHARMANDER_D[0] - 10;
                            SQUIRTLE_D[0] - 10;
                        }
                        else {
                            vida[PJ2 - 1] = vida[PJ2 - 1] - (SQUIRTLE_D[0] + random1);
                        }
                        system("PAUSE");
                        system("CLS");
                    }
                    break;
                case 2:
                    vida[PJ1 - 1] = vida[PJ1 - 1] + posion;
                    break;
                }
            }

        }
    }
}