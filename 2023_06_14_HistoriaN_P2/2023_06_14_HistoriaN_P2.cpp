#include <iostream>
#include <string>
#include <random>
#include <locale.h>

using namespace std;

int main() {

    setlocale(LC_ALL, "es_MX.UTF-8");
    srand(time(NULL));
    string nombre;
    int opcion;
    int turno = 1;
    bool finalBueno = false;
    bool finalNeutral = false;
    bool finalMalo = false;

    cout << "=== LA MUERTE ===" << endl;
    cout << "Bienvenido(a) a esta oscura y misteriosa historia." << endl;
    cout << "Antes de comenzar, por favor, introduce tu nombre: ";
    cin >> nombre;

    cout << endl << "¡Hola, " << nombre << "! Te encuentras en una encrucijada con la Muerte frente a ti." << endl;
    cout << "La Muerte te ha desafiado a un juego de decisiones que determinarán tu destino." << endl;
    cout << "Tu viaje comienza ahora. Elige sabiamente." << endl;

    while (turno <= 10) {
        cout << endl << "=== Turno " << turno << " ===" << endl;
        cout << "Tienes varias opciones:" << endl;
        cout << "1. Hacer un pacto con la Muerte." << endl;
        cout << "2. Desafiar a la Muerte a un juego." << endl;
        cout << "3. Huir y buscar una ruta de escape." << endl;
        cout << "Elige una opción (1-3): ";
        cin >> opcion;

        if (opcion == 1) {
            cout << endl << "Decides hacer un pacto con la Muerte." << endl;
            cout << "La Muerte acepta tu pacto, pero a cambio te pide tu alma al final de tu vida." << endl;

            char aceptar;
            cout << "¿Aceptas el pacto? (s/n): ";
            cin >> aceptar;

            if (aceptar == 's' || aceptar == 'S') {
                cout << endl << "Has sellado tu destino y has asegurado una vida próspera, pero tu alma está condenada." << endl;
                finalBueno = true;
                break;
            }
            else {
                cout << endl << "Rechazas el pacto y decides buscar otra opción para desafiar a la Muerte." << endl;
            }
        }
        else if (opcion == 2) {
            cout << endl << "Decides desafiar a la Muerte a un juego." << endl;
            cout << "La Muerte sonríe ante tu desafío y acepta jugar contigo." << endl;

            int juego;
            cout << "Tienes tres opciones de juego: " << endl;
            cout << "1. Ajedrez." << endl;
            cout << "2. Póker." << endl;
            cout << "3. Adivinar el número que la Muerte está pensando." << endl;
            cout << "Elige una opción (1-3): ";
            cin >> juego;

            if (juego == 1) {
                cout << endl << "Decides desafiar a la Muerte a una partida de ajedrez." << endl;
                cout << "A pesar de tu habilidad, la Muerte es imbatible y te derrota." << endl;
                finalMalo = true;
                break;
            }
            else if (juego == 2) {
                cout << endl << "Decides desafiar a la Muerte a una partida de póker." << endl;
                cout << "La suerte está de tu lado y logras ganarle a la Muerte en una emocionante partida." << endl;
                cout << "Como ganador, obtienes una segunda oportunidad en la vida." << endl;
                finalBueno = true;
                break;
            }
            else if (juego == 3) {
                cout << endl << "Decides adivinar el número que la Muerte está pensando." << endl;
                cout << "La Muerte piensa en un número y tú intentas adivinar." << endl;

                int numero;
                cout << "Introduce un número del 1 al 10: ";
                cin >> numero;

                int numeroMuerte = rand() % 10 + 1;

                if (numero == numeroMuerte) {
                    cout << endl << "Sorprendentemente, adivinas el número exacto y la Muerte queda impresionada." << endl;
                    cout << "Como recompensa, obtienes una vida eterna llena de aventuras." << endl;
                    finalBueno = true;
                    break;
                }
                else {
                    cout << endl << "Tu intento falla y la Muerte te reclama como suya." << endl;
                    finalMalo = true;
                    break;
                }
            }
            else {
                cout << endl << "Opción inválida. Por favor, elige una opción válida (1-3)." << endl;
            }
        }
        else if (opcion == 3) {
            cout << endl << "Decides huir y buscar una ruta de escape." << endl;
            cout << "Corres desesperadamente tratando de escapar de la Muerte." << endl;

            int ruta;
            cout << "Tienes dos rutas para elegir: " << endl;
            cout << "1. El oscuro bosque." << endl;
            cout << "2. El laberinto subterráneo." << endl;
            cout << "Elige una opción (1-2): ";
            cin >> ruta;

            if (ruta == 1) {
                cout << endl << "Decides adentrarte en el oscuro bosque en busca de una ruta de escape." << endl;
                cout << "La Muerte te persigue, pero logras encontrar un antiguo hechizo de protección." << endl;
                cout << "El hechizo te permite evadir a la Muerte y escapar de su alcance." << endl;
                finalBueno = true;
                break;
            }
            else if (ruta == 2) {
                cout << endl << "Optas por adentrarte en el laberinto subterráneo en busca de una ruta de escape." << endl;
                cout << "El laberinto es peligroso y confuso, y te pierdes en su complejidad." << endl;
                cout << "Desafortunadamente, no encuentras una salida y caes en las manos de la Muerte." << endl;
                finalMalo = true;
                break;
            }
            else {
                cout << endl << "Opción inválida. Por favor, elige una opción válida (1-2)." << endl;
            }
        }
        else {
            cout << endl << "Opción inválida. Por favor, elige una opción válida (1-3)." << endl;
        }

        turno++;
    }

    cout << endl << "=== FINAL DE LA HISTORIA ===" << endl;
    if (finalBueno) {
        cout << "¡Felicidades, " << nombre << "! Has logrado un final positivo y has evitado a la Muerte." << endl;
    }
    else if (finalNeutral) {
        cout << "Has llegado al final de tu historia sin grandes victorias ni derrotas." << endl;
    }
    else if (finalMalo) {
        cout << "Lamentablemente, " << nombre << ", tu camino ha llegado a un final trágico." << endl;
    }
    else {
        cout << "Tu historia ha quedado inconclusa y tu destino permanece incierto." << endl;
    }

    return 0;
}