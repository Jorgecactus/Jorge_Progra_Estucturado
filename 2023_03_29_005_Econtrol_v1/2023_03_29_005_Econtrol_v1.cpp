// 2023_03_29_005_Econtrol_v1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Jorge Delgadillo
//Veremos las estructuras de control
//Decisiones
//Bucles
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
    //Estructura de control 1
    //IF
    //Syntaxis
    int edad = 0;
    std::cout << "que edad tienes?" << std::endl;
    std::cin >> edad;
    if(edad >= 18)
    {
       std::cout << " bienvenido al club de los adultos " << std::endl;
    }
    if(edad < 18)
    {
        std::cout << " saquese al club de los pequeñines";
    }
    //IF-ELSE
    //syntaxis
    float temperatura = 0;
    std::cout << "cunatos grados centrigados tienes de temperatura? \n";
    std::cin >> temperatura;
    if (temperatura >= 36 && temperatura <= 38)
    {
        std::cout << "usted esta en perfectas condiciones \n";
    }
    else
    {
        std::cout << "si sigue consiente vaya al medico \n";
    }
    //switch case
    //syntaxis
    int opc = 0;
    std::cout << "Hola usuario presiona una tecla del 1 al 4 para leer la frase de tu personaje favorito \n";
    std::cin >> opc;
    switch (opc)
    {
    case 1:
        std::cout << "super!!!!\n";
        break;
    case 2:
        std::cout << "detras de ti imbesil\n";
        break;
    case 3:
        std::cout << "serie seria golpe serio\n";
        break;
    case 4:
        std::cout << "Mitaladro es el talador que perforara el cielo";
        break;
    default:
        std::cout << "nel mi chavo esa no la conozco\n";
        break;

    }
}
