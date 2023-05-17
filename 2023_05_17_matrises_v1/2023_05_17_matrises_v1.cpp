// 2023_05_17_matrises_v1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Jorge Alejabdro Delgadillo

#include <iostream>

int main()
{
    srand(time(NULL));//semillero - tama el reloj para generar un #aleatorio
    /*
    int edades[5][7];
    int filas = (sizeof(edades) / sizeof(edades[0]));
    std::cout << "Filas: " << filas << std::endl;
    int columnas = (sizeof(edades[0]) / sizeof(edades[0][0]));
    std::cout << "Columnas: " << columnas << std::endl;
    std::cout << sizeof (edades) << std::endl;
    std::cout << sizeof (edades[0]) << std::endl;
    std::cout << sizeof (edades[0][0]) << std::endl;
    //Imprimir el apendice de cada sizeof
    //Sizeof edades, edades[], edades[][].
    */
    //declara la matriz
    int mat1[3][3];
    int mat2[5][5];
    int mat3[10][12];
    int opc = 0;
    std::cout << "hola chavo en este programa veras unas cuantas matrizes pero cual quieres ver primero" << std::endl;
    std::cout << "quieres la 1)3x3 la 2)5x5 o la 3)10x10" << std::endl;
    std::cin >> opc;
    switch (opc) {
    case 1:
    //mat1[3][3]
    //ingrasar datos aleatorios ala matriz
        for (int i = 0; i < 3; i++) //ciclo para acceder a filas
        {
            for (int j = 0; j < 3; j++) //ciclo para acceder a columnas
            {
                mat1[i][j] = rand() % 10;
            }
        }
        //imprimirtoda la matriz 
        for (int i = 0; i < 3; i++) //ciclo para acceder a filas
        {
            for (int j = 0; j < 3; j++) //ciclo para acceder a columnas
            {
                std::cout << mat1[i][j] << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
        break;
    case 2:
        //mat2[5][5]
        for (int i = 0; i < 5; i++) 
        {
            for (int j = 0; j < 5; j++) 
            {
                mat2[i][j] = rand() % 10;
            }
        }
        for (int i = 0; i < 5; i++) 
        {
            for (int j = 0; j < 5; j++) 
            {
                std::cout << mat2[i][j] << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
        break;
    case 3:
        //mat3[10][10]
        for (int i = 0; i < 10; i++) 
        {
            for (int j = 0; j < 10; j++) 
            {
                mat3[i][j] = rand() % 10;
            }
        }
      
        for (int i = 0; i < 10; i++) 
        {
            for (int j = 0; j < 10; j++)
            {
                std::cout << mat3[i][j] << " ";
            }
            std::cout << std::endl;
        }
        break;
    default:
        std::cout << "no conosco esa opcion"<<std::endl;
        break;
    }
}