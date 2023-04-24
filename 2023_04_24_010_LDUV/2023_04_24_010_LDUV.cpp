// 2023_04_24_010_LDUV.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//DE Jorge Alejandro Delgadillo Chávez


#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    std::string correo = "Dios@gmail.com";
    std::string contra = "GGEZ12";
    std::cout << "hola viajero\n"<<std::endl;
    std::cout << "inserte su correo y contraseña\n" << std::endl;
    std::cin >> correo;
    std::cin >> contra;
    if (correo == "Dios@gmail.com" && contra == "GGEZ12")
    {
        std::cout << "todo bien" << std::endl;
    }
    else
    {
        std::cout << "contraseña o correo incorrecto\n" << std::endl;
    }
   
}