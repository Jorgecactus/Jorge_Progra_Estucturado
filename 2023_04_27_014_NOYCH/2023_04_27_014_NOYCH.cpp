// 2023_04_27_014_NOYCH.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// DE: Jorge Alejandro Delgadillo
//Realizar 3 operaciones
//Contar hasta 100
//Contar 10X10

#include <iostream>
#include <Windows.h>

int main()
{
  
    int opc = 0;
    int aux = 0;
                int i = 1000;
    while (true)
    {
        std::cout << "Hola que quieres hacer? 1.- contar de 0 a 1000 \n2.- Contar hasta 100 lento \n3.- Contar de 10 en 10\n ";
        std::cin >> opc;
        switch (opc)
        {
        case 1: // contandor de 1000 al 0
            std::cout << "Estas en el contador del 1000 al 0\n";
            std::cout << "con cual ciclo quiere hacer esto 1- for 2- while 3- do while\n";
            std::cin >> opc;
            switch (opc)
            {
            case 1:
                for (int i = 1000; i >= 0; i--)
                {
                    std::cout << "El contador va en: " << i << std::endl;

                }
                break;
            case 2:
                i = 1000;
                while (i > 0) {
                    std::cout << "El contadorva en " << i << "\n";
                    i--;
                }
            
            break;
            case 3:
                i = 1000;
                do {
                   
                    std::cout << i << std::endl;
                    i--;
                } while (i > 0);
                 
             break;
            default:
                std::cout << "no se cual es esa opcion\n" << std::endl;
                break;
            }
            system("pause");
            break;
        case 2: // Contar hasta 100
            std::cout << "Estas en el contador hasta 100\n";
            for (int i = 0; i <= 100; i++) 
            {
                std::cout << "El contador va en: " << i << std::endl;
                Sleep (100);
            }

            break;
        case 3: // Contar de 10 en 10
            std::cout << "Estas en el contador de 10 X 10\n";
            for (int i = 1; i <= 100;i++)
             
            {
                aux++;
                std::cout << " " << i << " ";
                if (aux == 10) {
                    std::cout << "\n";
                    aux = 0;
                }
            
            }
            break;
        default:
            std::cout << "supongo que no quieres nada adios\n" << std::endl;
            break;
        }
        system("pause");
        system("cls");
    }


}