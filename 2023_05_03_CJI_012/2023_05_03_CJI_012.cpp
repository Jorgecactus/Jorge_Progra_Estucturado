// 2023_05_03_CJI_012.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    int opc;
    bool continuar = true;
    bool vida = true;
    int aux = 3;
    while (continuar) {

        std::cout << "opciones 1- vucle de juego infinito 2- contador sel 0 al 100\n" << std::endl;
        std::cin >> opc;
        switch (opc)
        {
        case 1:
            vida = true;
            aux = 3;
            while (vida) {
                std::cout << "tienes " << aux << " vidas\n" << std::endl;
                aux = aux - 1;
                if (aux <= -1) {
                    vida = false;
                }

            }

            break;

        case 2:

            for (int i = 0; i <= 100; i++)
            {
                std::cout << "El contador va en: " << i << std::endl;
            }

            break;
        default:
            std::cout << "esta opcion no la conosco" << std::endl;
                break; 
        }
        std::cout << "quieres continuar 1)si 0)no\n" << std::endl;
        std::cin >> continuar;
    }
}
