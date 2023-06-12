#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

void mostrarMenu() {
    cout << "Opciones de acción:" << endl;
    cout << "1. Ataque normal" << endl;
    cout << "2. Ataque fuerte (con enfriamiento)" << endl;
    cout << "3. Curación" << endl;
}

void realizarAtaqueNormal(string jugador, int& vida_jugador, int ataque) {
    cout << jugador << " realiza un ataque normal." << endl;
    vida_jugador -= ataque;
}

void realizarAtaqueFuerte(string jugador, int& vida_jugador, int& cooldown, int ataque) {
    if (cooldown == 0) {
        cout << jugador << " realiza un ataque fuerte." << endl;
        vida_jugador -= (ataque * 2);
        cooldown = 3; // Establecer el enfriamiento a 3 turnos
    }
    else {
        cout << jugador << " no puede realizar un ataque fuerte. Está en enfriamiento." << endl;
    }
}

void realizarCuracion(string jugador, int& vida_jugador, int curacion) {
    cout << jugador << " se cura." << endl;
    vida_jugador += curacion;
}

int main() {
    setlocale(LC_ALL, "es_MX.UTF-8");
    string jugador1, jugador2;
    int vida_jugador1 = 100;
    int vida_jugador2 = 100;
    int ataque_jugador1 = 20;
    int ataque_jugador2 = 20;
    int curacion_jugador1 = 30;
    int curacion_jugador2 = 30;
    int cooldown_jugador1 = 0;
    int cooldown_jugador2 = 0;
    int turno = 1;

    cout << "=== JUEGO DE BATALLA ===" << endl;
    cout << "Jugador 1, introduce tu nombre: ";
    cin >> jugador1;
    cout << "Jugador 2, introduce tu nombre: ";
    cin >> jugador2;

    while (vida_jugador1 > 0 && vida_jugador2 > 0) {
        cout << endl << "=== Turno " << turno << " ===" << endl;

        mostrarMenu();

        int opcion_jugador1, opcion_jugador2;
        cout << jugador1 << ", elige una opción (1-3): ";
        cin >> opcion_jugador1;
        cout << jugador2 << ", elige una opción (1-3): ";
        cin >> opcion_jugador2;
        // Jugador 1 realiza su acción
        if (opcion_jugador1 == 1) {
            realizarAtaqueNormal(jugador1, vida_jugador2, ataque_jugador1);
        }
        else if (opcion_jugador1 == 2) {
            realizarAtaqueFuerte(jugador1, vida_jugador2, cooldown_jugador1, ataque_jugador1);
        }
        else if (opcion_jugador1 == 3) {
            realizarCuracion(jugador1, vida_jugador1, curacion_jugador1);
        }

        // Jugador 2 realiza su acción
        if (opcion_jugador2 == 1) {
            realizarAtaqueNormal(jugador2, vida_jugador1, ataque_jugador2);
        }
        else if (opcion_jugador2 == 2) {
            realizarAtaqueFuerte(jugador2, vida_jugador1, cooldown_jugador2, ataque_jugador2);
        }
        else if (opcion_jugador2 == 3) {
            realizarCuracion(jugador2, vida_jugador2, curacion_jugador2);
        }

        // Actualizar el enfriamiento de los ataques fuertes
        if (cooldown_jugador1 > 0) {
            cooldown_jugador1--;
        }
        if (cooldown_jugador2 > 0) {
            cooldown_jugador2--;
        }

        cout << "Puntos de vida restantes:" << endl;
        cout << jugador1 << ": " << vida_jugador1 << endl;
        cout << jugador2 << ": " << vida_jugador2 << endl;

        turno++;
    }

    cout << endl << "=== FIN DEL JUEGO ===" << endl;
    if (vida_jugador1 <= 0 && vida_jugador2 <= 0) {
        cout << "¡Es un empate!" << endl;
    }
    else if (vida_jugador1 <= 0) {
        cout << jugador2 << " ha ganado la batalla. ¡Felicidades!" << endl;
    }
    else {
        cout << jugador1 << " ha ganado la batalla. ¡Felicidades!" << endl;
    }

    return 0;
}