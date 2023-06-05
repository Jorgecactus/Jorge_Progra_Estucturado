// 2023_04_24_011_AQ.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//DE JORGE ALEJANDRO DELGADILLO CHÁVEZ

#include <iostream>

int main()
{

    int respuesta = 0;
    std::cout << "HOLA HOY INTENTARÉ ADIVINAR TU PERSONAJE FAVORITO DE LA TRIPULACIÓN DE LOS SOMBREROS DE PAJA\n" << std::endl;
    std::cout << "bueno empecemos\n" << std::endl;
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
                respuesta = 0;
                std::cout << "así que el rey de los piratas e ja lo adivine\n" << std::endl;
            }
            else {
                std::cout << "¿tu personaje es un esqueleto?\n" << std::endl;
                std::cout << "1)si 2)no\n" << std::endl;
                std::cin >> respuesta;
                if (respuesta == 1) {
                    respuesta = 0;
                    std::cout << "¿tu personaje es Brook?\n" << std::endl;
                    std::cout << "1)si 2)no\n" << std::endl;
                    std::cin >> respuesta;
                    
                }
                if (respuesta == 1) {
                    respuesta = 0;
                    std::cout << "ya veo el músico muerto más vivo del mar\n" << std::endl;
                }
                else {
                    std::cout << "¿es médico tu personaje?\n" << std::endl;
                    std::cout << "1)si 2)no\n" << std::endl;
                    std::cin >> respuesta;
                    if (respuesta == 1) {
                        respuesta = 0;
                        std::cout << "¿tu personaje es Tony Tony Chopper?\n" << std::endl;
                        std::cout << "1)si 2)no\n" << std::endl;
                        std::cin >> respuesta;
                        if (respuesta == 1) {
                            respuesta = 0;
                            std::cout << "el toniki más adorable del mar perdón reno\n" << std::endl;
                        }
                        else {
                            std::cout << "tu personaje creo que no está en la tripulación de los sombreros de paja\n" << std::endl;
                        }
                    }
                }
            }
        }

        break;
    case 2:
        if (respuesta == 2) {
            respuesta = 0;

            std::cout << "¿en ese caso tu personaje comió una fruta del diablo?\n" << std::endl;
            std::cout << "1)si 2)no\n" << std::endl;
            std::cin >> respuesta;
            if (respuesta == 1) {
                respuesta = 0;
                std::cout << "¿tu personaje es Nico Robin?\n" << std::endl;
                std::cout << "1)si 2)no\n" << std::endl;
                std::cin >> respuesta;
                if (respuesta == 1) {
                    respuesta = 0;
                    std::cout << "la hermosa Robin la segunda persona que podrá leer y descubrir el secreto de los poneglyphs\n" << std::endl;
                }
                else {
                    std::cout << "tu personaje creo que no está en la tripulación de los sombreros de paja\n" << std::endl;
                }
            }
            else {
                respuesta = 0;
                std::cout << "¿en ese caso tu personaje usa alguna arma para luchar?\n" << std::endl;
                std::cout << "1)si 2)no\n" << std::endl;
                std::cin >> respuesta;
                if (respuesta == 1) {
                    respuesta = 0;
                    std::cout << "¿tu personaje es el gran Usopp?\n" << std::endl;
                    std::cout << "1)si 2)no\n" << std::endl;
                    std::cin >> respuesta;
                    if (respuesta == 1) {
                        respuesta = 0;
                        std::cout << "Jajaja el gran capitan Usopp con mas de 1000000 soldados que no tendrá miedo en utilizarlos\n" << std::endl;
                    }
                    else {
                        respuesta = 0;
                        std::cout << "¿tu personaje usa una varita entre comillas mágica?\n" << std::endl;
                        std::cout << "1)si 2)no\n" << std::endl;
                        std::cin >> respuesta;
                        if (respuesta == 1) {
                            respuesta = 0;
                            std::cout << "¿tu personaje es Nami?\n" << std::endl;
                            std::cout << "1)si 2)no\n" << std::endl;
                            std::cin >> respuesta;
                            if (respuesta == 1) {
                                respuesta = 0;
                                std::cout << "nuestra gran navegante la cual creará el mapa del mundo\n" << std::endl;
                            }
                            else {
                                std::cout << "tu personaje creo que no está en la tripulación de los sombreros de paja\n" << std::endl;
                            }
                        }
                        else {
                            std::cout << "¿tu personaje usa espadas para pelear?\n" << std::endl;
                            std::cout << "1)si 2)no\n" << std::endl;
                            std::cin >> respuesta;
                            if (respuesta == 1) {
                                respuesta = 0;
                                std::cout << "¿tu personaje es Zorro Roronoa" << std::endl;
                                std::cout << "1)si 2)no\n" << std::endl;
                                std::cin >> respuesta;
                                if (respuesta == 1) {
                                    respuesta = 0;
                                    std::cout << "el cazador de piratas que ironía pero todos sabemos que se convertirá en el mejor espadachin del mundo\n" << std::endl;
                                }
                                else {
                                    std::cout << "tu personaje creo que no está en la tripulación de los sombreros de paja\n" << std::endl;
                                }
                                
                            }
                            else {
                                respuesta = 0;
                                std::cout << "¿tu personaje usa una daga giratoria?\n" << std::endl;
                                std::cout << "1)si 2)no\n" << std::endl;
                                std::cin >> respuesta;
                                if (respuesta == 1) {
                                    respuesta = 0;
                                    std::cout << "¿tu personaje es Nefatari Vivi?\n" << std::endl;
                                    std::cout << "1)si 2)no\n" << std::endl;
                                    std::cin >> respuesta;
                                    if (respuesta == 1) {
                                        respuesta = 0;
                                        std::cout << "nuestra gran reina salvada por nuestro grupo de piratas héroes no te hagas ni te acordabas de ella\n" << std::endl;
                                    }
                                    else {
                                        std::cout << "tu personaje creo que no está en la tripulación de los sombreros de paja\n" << std::endl;
                                    }
                                }
                                
                            }
                            

                        }
                    }               
                 
                }
                else {
                    respuesta = 0;
                    std::cout << "¿tu personaje puede atacar con ataques elementales?\n" << std::endl;
                    std::cout << "1)si 2)no\n" << std::endl;
                    std::cin >> respuesta;
                    if (respuesta == 1) {
                        respuesta = 0;
                        std::cout << "¿tu personaje es Sanji?\n" << std::endl;
                        std::cout << "1)si 2)no\n" << std::endl;
                        std::cin >> respuesta;
                        if (respuesta == 1) {
                            respuesta = 0;
                            std::cout << "Nuestro cocinero favorito me pregunto de donde saca tanto cigarro\n" << std::endl;
                        }
                        else {
                            respuesta = 0;
                            std::cout << "¿tu personaje es Jinbe?\n" << std::endl;
                            std::cout << "1)si 2)no\n" << std::endl;
                            std::cin >> respuesta;
                            if (respuesta == 1) {
                                respuesta = 0;
                                std::cout << "El primer hijo del mar el salvador y el salvado por luffy\n" << std::endl;

                            }
                            else {
                                respuesta = 0;
                                std::cout << "¿tu personaje es Franky?\n" << std::endl;
                                std::cout << "1)si 2)no\n" << std::endl;
                                std::cin >> respuesta;
                                if (respuesta == 1) {
                                    respuesta = 0;
                                    std::cout << "como olvidar nuestro cyborg pervertido supergenial\n" << std::endl;
                                }
                                else {
                                    std::cout << "tu personaje creo que no está en la tripulación de los sombreros de paja\n" << std::endl;
                                }
                            }

                        }
                    }
                }
            }
        }
        break;
    default:
        std::cout << "tu personaje creo que no está en la tripulación de los sombreros de paja\n" << std::endl;
        break;
    }
    
}