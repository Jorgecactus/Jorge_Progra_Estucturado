// 2023_05_03_CJI_012.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    int opc;
    int vidas = 3;
    bool continuar = true;
    char respuesta;
    std::cout << "opciones 1- vucle de juego infinito 2- contador sel 0 al 100\n"<< std::endl;
    std::cin >> opc;
    switch (opc)
    {
    case 1:
        std::cout << "Bien pelearemos asta que pierdas tus tres vidas \n"<< std::endl;
        vidas - 1;
        

        break;
        system("cls");
    case 2:

        for (int i = 0; i<=100; i++)  
        {
            std::cout << "El contador va en: " << i << std::endl;
        }

        break;
    }
}
