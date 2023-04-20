// 2023_04_19_Vslor_absoluto_v1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//De Jorge Alejandro Delgadillo

#include <iostream>

int main()
{
	int num = 0;
	std::cout << "Hola este prog5rama es para sacar el valor absoluto de un numero entero\n" << std::endl;
	std::cout << "Inserte su numero\n" << std::endl;
	std::cin >> num;
	if (num >= 0) {
		std::cout << "En ese caso el valor avsoluto es " << num << std::endl;
	}
	if (num <= 0) {
		num = (num * -1);
		std::cout << "en ese caso el valor avsoluto es " << num << std::endl;
	}


}