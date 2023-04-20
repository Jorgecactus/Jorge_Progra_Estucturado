// 2023_04_20_Mayor_y_Menor_v1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Jorge Alejandro Delgadillo Chávez

#include <iostream>

int main()
{
    int num1 = 0;
    int num2 = 0;
    std::cout << "Hola en este programa podremos identificar entre dos numeros cual es el menor y cual es el mayor\n" << std::endl;
    std::cout << "indrese el primer numero\n" << std::endl;
    std::cin >> num1;
    std::cout << "inserte el segundo numero\n" << std::endl;
    std::cin >> num2;
    if (num1 < num2) {
        std::cout << "entonces el numero " << num1 << " es el menor" << std::endl;
        std::cout << "y entonses el numero " << num2 << " es el mayor" << std::endl;
    }
    if (num1 > num2) {
        std::cout << "entonces el numero " << num2 << " es el menor" << std::endl;
        std::cout << "y entonses el numero " << num1 << " es el mayor" << std::endl;
    }
    if (num1 = num2) {
        std::cout << "los dos son iguales" << std::endl;
    }

}