// 2023_03_22_003_inout_v1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Jorge Delgadillo
//En este programa apranderemos a usar bibliotecas
//Reforzaremos el hablar con el usuario
//Recibiremos datos del usuario

//sintaxys para agregar librerias 
//# obligado y ponerla entre <>
//
#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    bool pregunta = false;
    int n_tacos = 0;
    float costo = 0;
    char taqueria;
    std::string carne;
    std::cout << "Hola Bienvenido a tu programa...";
    std::cout << "Lea y responda con verdadero o falso: \n" <<
        "Anoche ceno tacos al pastor? 0)No 1)Si" << std::endl;
    //recibir respuesta del usuario
    std::cin >> pregunta;

    std::cout << "Ya veo entonces es " << pregunta << " que cenastes tacos" <<
        std::endl;
    std::cout << "Cuantos tacos? " <<std::endl;
    std::cin >> n_tacos;
    std::cout << "Baia baia entonces te comistes " << n_tacos << std::endl;
    std::cout << "Cuanto te costaron los tacos? " << std::endl;
    std::cin >> costo;
    std::cout << "Ya veo te costaron " << costo << std::endl;
    std::cout << "De que eran los tacos? " << std::endl;
    std::cin >> carne;
    std::cout << "Eran de " << carne << " si se antojan unos" << std::endl;
    std::cout << "Como se llama la taqueria?" << std::endl;
    std::cin >> taqueria;
    std::cout << " Ya se donde es luego bamos" << std::endl;
}
