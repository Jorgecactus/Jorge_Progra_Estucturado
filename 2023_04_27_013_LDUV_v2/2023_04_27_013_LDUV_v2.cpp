// 2023_04_27_013_LDUV_v2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

#include <iostream>
#include <locale.h>
#include <string> 

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    bool aux = true;
    std::string name;
    std::string nameU = "Jorge";
    std::string contra;
    std::string contraU = "dios12";

    while (aux)//Mientras que la evaluación sea verdadera se ejecutara lo que esta dentro
    {
        std::cout << "hola Cual es tu nombre? \n";
        getline(std::cin, name);
        if (name == nameU)//Si el nombre ingresado y el guardado son iguales dar bienvenida
        {
            std::cout << "bienvenido de vuelta " << name << " \n";
            std::cout << "Para confirmar que eres tu ingresa tu contraseña: \n";
            getline(std::cin, contra);
            if (contra == contraU)//Si el nombre es bueno entonces solicitar contraseña
            {
                std::cout << "pero cuanto gusto de volverte a ver\n";
                system("pause");
            }
            else //Si el usuario se equivoca en la contraseña repite todo el proceso
            {
                std::cout << "Que se me hace que no eres tu \n";
                system("pause");
            }
        }
        else //Si no son iguales darle una patada
        {
            std::cout << "Saquese no lo conozco " << std::endl;
            system("pause");
        }
        system("cls");
    }
}