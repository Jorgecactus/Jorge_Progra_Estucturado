// 2023_05_29_MD_018.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <locale>
#include <windows.h>
#include <random>

int main()
{
    int mat1[2][3];
    int x = 0;
    int y = 0;
    int mat2[10][10];
    
    std::cout << "Hola chavo en este programa haras tu propia Matriz pero solo de 3*2algo sensillo empesemos\n"<<std::endl;
    std::cout << "primareo dame los datos que quieres poner en la matriz\n" << std::endl;
    for (int i = 0; i < 2; i++)//ciclo para acceder a filas
    {
        for (int j = 0; j < 3; j++)//Ciclo para acceder a columnas
        {
            std::cout << "inserte los datos que quiera en\n " << i + 1<< " "<<j+1 <<std::endl;
            std::cin >> mat1[i][j];
        }
    }
    for (int i = 0; i < 2; i++)//ciclo para acceder a filas
    {
        for (int j = 0; j < 3; j++)//Ciclo para acceder a columnas
        {
            std::cout <<" " << mat1[i][j];
            Sleep(100);
        }
        std::cout<<std::endl;
    }
    system("pause");
    system("CLs");
   

    std::cout << "bamos a crear una matris random bro\n" << std::endl;
    std::cout << "cuantas filas\n" << std::endl;
    std::cin >> x;
    std::cout << "cuantas colubnas\n" << std::endl;
    std::cin >> y;

        for (int i = 0; i < x; i++)//ciclo para acceder a filas
        {
            for (int j = 0; j < y; j++)//Ciclo para acceder a columnas
            {

             mat2[i][j] = rand() % 10;

            }
            std::cout << std::endl;
        }
        for (int i = 0; i < x; i++)//ciclo para acceder a filas
        {
            for (int j = 0; j < y; j++)//Ciclo para acceder a columnas
            {

                std::cout << " " << mat2[i][j];
                Sleep(100);

            }
            std::cout << std::endl;
        }
        system("pause");
        system("CLs");
}
