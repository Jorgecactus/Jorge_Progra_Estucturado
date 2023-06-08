// 2023_05_15_016_arreglos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Jorge Alejandro Delgadillo

#include <iostream>
#include <string>

int main()
{
    std::string titulo[5];
    std::string autor[5];
    int fecha[5];
    //captura de datos
    std::cout << "Hola campeon registra tus libros favoritos\n" << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << "indresar el titulo del libro " << i + 1 << std::endl;
        if (i > 0) {
            std::cin.ignore();
        }
        getline(std::cin, titulo[i]);
        std::cout << "indresar el autor del libro " << i + 1 << std::endl;
        getline(std::cin, autor[i]);
        std::cout << "indresar la fecha de publicacion del libro aaaammdd " << i + 1 << std::endl;
        std::cin >> fecha[i];
    }
    //funcion de muestreo de la informacion
    std::cout << "ya veo tus libros son\n ";
    for (int j = 0; j < 5; j++)
    {
        std::cout << j + 1 << ".- " << titulo[j] << "\nEl autor es: " << autor[j] << "\nPublicado en el dia " << fecha[j] << std::endl;
    }

}