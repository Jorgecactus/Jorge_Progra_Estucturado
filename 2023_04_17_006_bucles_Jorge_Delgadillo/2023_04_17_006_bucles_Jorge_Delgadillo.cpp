// 2023_04_17_006_bucles_Jorge_Delgadillo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Hacer un programa que te solicite el numero de peleadores en una arena y te de el número de batallas que se tendrán para obtener a 1 ganador dependiendo del sistema de combate.
// 1. - Royal Rumble
// 2. - Eliminatoria directa
// 3. - Grupos, semifinal y final
//
//

#include <iostream>
#include <locale.h>

int main()
{
    int competidores;
    int opc = 0;
    int rr = 0;
    int ED = 0;
    int G = 0;
    int S = 0;
    int F = 0;
    std::cout << "Holla amigo hoy tendras la oportunidad de peliar por tu vida\n" << std::endl;
    std::cout << "Contra cuantos seres capases como tu quieres peliar hoy?\n" << std::endl;
    std::cin >> competidores;
    std::cout << "En que tipo de batalla quieres intentar ganar?\n tenemos tres opciones pera tu aventura\n1)partida rapida todos contra todos (royal rumble)\n2)battle royal (eliminatoria directa)\n3)batalla por equipos(grupos,semifinal y final)\n" << std::endl;
    std::cin >> opc;
        switch (opc) {
        case 1:

            for (int i = 1; i < competidores; i++) {
                rr = (competidores - i) + rr;
            }
            std::cout << "partida rapida todos contra todos\n" << std::endl;
            std::cout << "tendremos " << rr << " batallas en total te deseo suerte la ocuparas" <<std::endl;
            break;
        case 2:
            
            ED = (competidores - 1);

            std::cout << "battle royal\n" << std::endl;
            std::cout << "Que bueno me pregunto cuantas peleas seran en total " << ED << " a veo te deceo suerte la ocuparas " << std::endl;

            break;
        case 3:

            G = (competidores / 4);
            for (int t = 1; t < G; t++) {
                rr = (G - t) + rr ;

            }
            F = rr * 4;
            S = F + 3;

            std::cout << "batalla por equipos\n" << std::endl;
            std::cout << "battallas por equipo e cuantas battallas " << S << " en ese caso que el mejor equipo gane" << std::endl;
            break;

        }
}