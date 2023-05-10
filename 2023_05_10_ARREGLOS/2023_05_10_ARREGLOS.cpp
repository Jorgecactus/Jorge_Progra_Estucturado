// 2023_05_10_ARREGLOS.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Jorge Alejandro Delgadillo Chávez

#include <iostream>
#include <string>

int main()
{
    //PERSONAJES DE DBZ
    std::string nombre[5] = { "goku","vegeta","picolo","bills","cell" };
    std::string procedencia[5] = { "sayan/humano","sayayin", "namekiano", "dios de la destruccion","androide" };
    int ki[5] = { 5,4,3,2,1 };
    for (int i = 0; i <= 4; i++)
        //mostrar datos de un areglo
    {
        std::cout << "nombre del x personaje " << i << ":" << nombre[i] << std::endl;
    }
    // nombres de personitas
    // edades
    std::string nombres[5];
    int edad[5];
    for (int j = 0; j <= 4; j++)
    {
        std::cout << "hola me puedes dar tu nombre?" << std::endl;
        getline(std::cin, nombres[j]);
        std::cout << "y tu edad?" << std::endl;
        std::cin >> edad[j];
    }
    for (int k = 0; k <= 4; k++)
    {
        std::cout << "nombre es " << nombres[k] << " y su edad " << edad[k] << std::endl;
    }
}