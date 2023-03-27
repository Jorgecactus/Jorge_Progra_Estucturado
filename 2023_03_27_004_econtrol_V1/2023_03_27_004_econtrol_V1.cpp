// 2023_03_27_004_econtrol_V1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "es_MX.UFT-8");
    std::string nombre;
    std::string apellido;
    int edad = 0;
    int fecha = 0;
    float estatura = 0;
    float peso = 0;
    bool fiebre = 0;
    bool dormir = 0;
    bool dolor = 0;
    char sexo = 0;
    float IMC = 0;
    std::cout << "Hola muy buenas soy el doctor Pericles. Te atendere pero antes\n¿Cual es tu nombre?" << std::endl;
    getline(std::cin, nombre);
    std::cout << "\nDeacuerdo " << nombre << "\n¿Cual es tu apellido?" << std::endl;
    std::cin >> apellido;
    std::cout << "\nDia de sita" << std::endl;
    std::cin >> fecha;
    std::cout << "\nEntendido \n¿Cual es tu género? \nH)hombre M)mujer N)no quieres decirlo" << std::endl;
    std::cin >> sexo;
    std::cout << "\n¿Cuantos años tienes?" << std::endl;
    std::cin >> edad;
    std::cout << "\nDeacuerdo " << nombre << std::endl;
    std::cout << "\n¿Tienes fiebre? 0)NO 1)SI" << std::endl;
    std::cin >> fiebre;
    std::cout << "\n¿Sientes dolor? 0)NO 1)SI" << std::endl;
    std::cin >> dolor;
    std::cout << "\n¿has dormido bien estos dias? 0)NO 1)SI" << std::endl;
    std::cin >> dormir;
    std::cout << "\nDeacuerdo " << nombre << " lo sigiente es ver tu indice de masa corporal o abrebiado IMC para esto contesta estas preguntas";
    std::cout << "\n¿Cuanto mides?" << std::endl;
    std::cin >> estatura;
    std::cout << "\n¿Cuanto pesas?" << std::endl;
    std::cin >> peso;

    IMC = (peso / (estatura * estatura));

    std::cout << "tu IMC es de " << IMC << std::endl;

    std::cout << "Bueno " << nombre << " " << apellido << " de " << edad << " del genero " << sexo << " tu IMC es de " << IMC;
}