// 2023_04_24_011_AQ.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//DE JORGE ALEJANDRO DELGADILLO CHÁVEZ

#include <iostream>

int main()
{

    int respuesta = 0;
    std::cout << "HOLA HOY INTENTARE ADIVINAR TU PERSONAJE FAVORITO DE LA TRIPULACION DE LOS SOMBREROS DE PAJA\n" << std::endl;
    std::cout << "bueno empesemos\n" << std::endl;
    std::cout << "¿tu personaje tiene sombrero?\n" << std::endl;
    std::cout << "1)si 2)no\n" << std::endl;
    std::cin >> respuesta;
    switch (respuesta)
    {
    case 1:
        if (respuesta == 1) {
            std::cout << "¿tu personaje puede ser Monki D. Luffy?\n" << std::endl;
            std::cout << "1)si 2)no\n" << std::endl;
            std::cin >> respuesta;
            if (respuesta == 1) {
                std::cout << "asi que el rey de los piratas e ja lo adivine\n" << std::endl;
            }
            else {
                std::cout << "¿tu personaje es un esqueleto?\n" << std::endl;
                std::cout << "1)si 2)no\n" << std::endl;
                std::cin >> respuesta;
                if (respuesta == 1) {
                    std::cout << "¿tu personaje es Brook?\n" << std::endl;
                    std::cout << "1)si 2)no\n" << std::endl;
                    std::cin >> respuesta;
                    if (respuesta == 1) {
                        std::cout << "ya veo el musico muerto mas vivo del mar\n" << std::endl;
                    }
                    else {
                        std::cout << "¿es medico tu personaje?\n" << std::endl;
                        std::cout << "1)si 2)no\n" << std::endl;
                        std::cin >> respuesta;
                        if (respuesta == 1) {
                            std::cout << "¿tu personaje es Tony Tony Chopper?\n" << std::endl;
                            std::cout << "1)si 2)no\n" << std::endl;
                            std::cin >> respuesta;
                            if (respuesta == 1) {
                                std::cout << "el toniki mas adorable del mar perdon reno\n" << std::endl;
                            }
                            else {
                                std::cout << "creo que tu personaje no esta en la tripulacion de los sombrero de paja\n" << std::endl;
                            }
                        }
                    }
                }

            }
        }

        break;
    case 2:
        if (respuesta == 2) {

            std::cout << "¿en ese caso tu personaje comio una fruta del diavlo?\n" << std::endl;
            std::cout << "1)si 2)no\n" << std::endl;
            std::cin >> respuesta;
            switch (respuesta) {
            if (respuesta == 1) {
                std::cout << "¿tu personaje es Nico Robin?\n" << std::endl;
                std::cout << "1)si 2)no\n" << std::endl;
                std::cin >> respuesta;
                    if (respuesta == 1) {
                        std::cout << "la hermosa Robin la segunda persona que pordra leler y descubrir el sectreto de los poneglifs\n" << std::endl;
                    }
                   
                        if (respuesta == 2) {

                            std::cout << "¿en ese caso tu personaje usa alguna arma para luchar?\n" << std::endl;
                            std::cout << "1)si 2)no\n" << std::endl;
                            std::cin >> respuesta;
                            if (respuesta == 1) {
                                std::cout << "¿tu personaje es el gran Usopp?\n" << std::endl;
                                std::cout << "1)si 2)no\n" << std::endl;
                                std::cin >> respuesta;
                                if (respuesta == 1) {
                                    std::cout << "Jajaja el gran capitan Usopp con mas de 1000000 soldados que no tendra miedo en utilisarlos\n" << std::endl;
                                }
                                else {
                                    std::cout << "¿tu personaje usa una varita entre comiyas magica?\n" << std::endl;
                                    std::cout << "1)si 2)no\n" << std::endl;
                                    std::cin >> respuesta;
                                    if (respuesta == 1) {
                                        std::cout << "¿tu personaje es Nami?\n" << std::endl;
                                        std::cout << "1)si 2)no\n" << std::endl;
                                        std::cin >> respuesta;
                                        if (respuesta == 1) {
                                            std::cout << "nuestra gran navegante la cual creara el mapa del mundo\n" << std::endl;
                                        }
                                        else {
                                            std::cout << "¿tu personaje usa espadas para pelear?\n" << std::endl;
                                            std::cout << "1)si 2)no\n" << std::endl;
                                            std::cin >> respuesta;
                                            if (respuesta == 1) {
                                                std::cout << "¿tu personaje es Zorro Roronoa" << std::endl;
                                                std::cout << "1)si 2)no\n" << std::endl;
                                                std::cin >> respuesta;
                                                if (respuesta == 1) {
                                                    std::cout << "el cazador de piratas que ironia pero todos sbemos que se conbertira en el mejor espadachin del mundo\n" << std::endl;
                                                }
                                                else {
                                                    std::cout << "creo que tu personaje no esta en la tripulacion de los sombreo de paja\n" << std::endl;
                                                }
                                            }
                                        }

                                    }

                                }
                            }
                        }
                }
            }

        }
        break;

    }
}