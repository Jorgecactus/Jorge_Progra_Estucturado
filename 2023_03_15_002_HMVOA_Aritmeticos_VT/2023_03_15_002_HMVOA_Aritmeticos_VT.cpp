// 2023_03_15_002_HMOPVAR_Aritmeticos_V1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Jorge Delgadillo
//Hola mundo, Variables, Operadores Aritmeticos
//
#include <iostream>

int main()
{
    std::cout << "Hello World!\n";//Comunicarnos con el usuario
    //Con cout me cominico con el usuario
    //Con \n y  con std::endl doy un salto de linea
    std::cout << "Hola \nchiquitines " << std::endl;
    //Tipos de variables boll, int, float, char, string
    //sintaxys para nombrar variables
    //tipo de variables - Nombre de variables - inicialización
    bool continuar = true;
    int vida = 100;
    float ataque = 18.5;
    char nombre[15] = "Jorge";
    std::string namertag = "Don_cactus";
    //<< es concatenar o sumar texto
    std::cout << "Hola " << nombre << " bienvenido al mundo de " << namertag
         <<std::endl;
    std::cout << std::endl;
    //Operadores Aritmeticos
    //+ - * / ^2 raiz
    vida = vida - ataque;
    std::cout << "tu vida restante es: " << vida << std::endl;
    float vida_aux = 0;
    vida_aux = vida - ataque;
    std::cout << "tu vida_aux restante es: " << vida_aux << std::endl; 

}