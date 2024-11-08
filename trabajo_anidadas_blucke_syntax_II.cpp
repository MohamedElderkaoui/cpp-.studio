#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Semilla para generar números aleatorios diferentes en cada ejecución
    srand(static_cast<unsigned int>(time(0)));

    const int MIN_NUM = 1;  // Número mínimo que puede ser generado
    const int MAX_NUM = 100; // Número máximo que puede ser generado
    int numeroAleatorio = rand() % (MAX_NUM - MIN_NUM + 1) + MIN_NUM; // Número aleatorio entre MIN_NUM y MAX_NUM
    int intentoUsuario;
    int intentosMaximos = 5;  // Número máximo de intentos permitidos

    cout << "Bienvenido al juego de adivinanza!" << endl;
    cout << "He generado un número entre " << MIN_NUM << " y " << MAX_NUM << ".\n";
    cout << "Tienes " << intentosMaximos << " intentos para adivinarlo.\n";

    // Bucle que da al jugador múltiples intentos para adivinar el número
    for (int intento = 1; intento <= intentosMaximos; intento++) {
        cout << "Intento " << intento << ": Ingresa tu suposición: ";
        cin >> intentoUsuario;

        // Verificar si el número ingresado es correcto
        if (intentoUsuario == numeroAleatorio) {
            cout << "¡Felicidades! Has adivinado el número en " << intento << " intentos.\n";
            break;  // Salir del bucle si el número es adivinando
        } else if (intentoUsuario < numeroAleatorio) {
            cout << "El número es más grande. Intenta nuevamente.\n";
        } else {
            cout << "El número es más pequeño. Intenta nuevamente.\n";
        }

        // Si el jugador se quedó sin intentos
        if (intento == intentosMaximos) {
            cout << "Lo siento, has alcanzado el número máximo de intentos. El número correcto era " << numeroAleatorio << ".\n";
        }
    }

    return 0;
}
