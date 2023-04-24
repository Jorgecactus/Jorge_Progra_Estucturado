// 2023_04_24_LV_009.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//DE Jorge Alejandro Delgadillo Chávez

#include <iostream>

int main()
{
    int num1 = 0;
    int num2 = 0;
    int opc = 0;
    int R = 0;
    std::cout << "HOLA EATE ES UN PROGRAMA DE UNA CALCULADORA INSETRETE EL PRIMER NUMERO \n" << std::endl;
    std::cout << "inserte los numeros porfavor\n" << std::endl;
    std::cin >> num1;
    std::cin >> num2;
    std::cout << "bueno que quieres hacer con estos dos numeros\n" << std::endl;
    std::cout << "1)SUMAR 2)RESTAR 3)MULTIPLICAR 4)DIVIDIR 5)SACAR SU VALOR AVSOLUTO 6)SABER CUAL ES EL AMYOR Y CUAl EL MENOR\n";
    std::cin >> opc;
    switch (opc) {
    case 1:
        R = (num1 + num2);
        std::cout << "en ese caso la resuesta es " << R << std::endl;
        
        break;

    case 2:
        R = (num1 - num2);
        std::cout << "en ese caso la resuesta es " << R << std::endl;
        break;

    case 3:
        R = (num1 * num2);
        std::cout << "en ese caso la resuesta es " << R << std::endl;
        break;

    case 4:
        R = (num1 / num2);
        std::cout << "en ese caso la resuesta es " << R << std::endl;
        break;

    case 5:
        if (num1 >= 0) {
            std::cout << "En ese caso el valor avsoluto es " << num1 << std::endl;
        }
        if (num1 <= 0) {
            num1 = (num1 * -1);
            std::cout << "en ese caso el valor avsoluto es " << num1 << std::endl;
        }

        if (num2 >= 0) {
            std::cout << "En ese caso el valor avsoluto es " << num2 << std::endl;
        }
        if (num2 <= 0) {
            num2 = (num2 * -1);
            std::cout << "en ese caso el valor avsoluto es " << num2 << std::endl;
        }
        break;

    case 6:
        if (num1 < num2) {
            std::cout << "entonces el numero " << num1 << " es el menor" << std::endl;
            std::cout << "y entonses el numero " << num2 << " es el mayor" << std::endl;
        }
        if (num1 > num2) {
            std::cout << "entonces el numero " << num2 << " es el menor" << std::endl;
            std::cout << "y entonses el numero " << num1 << " es el mayor" << std::endl;
        }
        if (num1 == num2) {
            std::cout << "los dos son iguales" << std::endl;
        }
        break;
     
    }
}