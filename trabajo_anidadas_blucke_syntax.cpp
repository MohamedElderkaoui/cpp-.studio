#include <iostream> // Se debe incluir la librería correcta para manejar la entrada/salida de datos

using namespace std; // Usamos el espacio de nombres std

int main() { // La función principal se debe llamar "main" y no "principal"
    
    const int MIN_NUM = 1; // Definición de constantes para los números mínimo y máximo
    const int MAX_NUM = 10;

    // Bucle principal para cada número de la tabla de multiplicar
    for (int i = MIN_NUM; i <= MAX_NUM; i++) { 
        cout << "Tabla del " << i << ":\n"; // Imprime el encabezado de la tabla de multiplicar

        // Bucle para mostrar la multiplicación de ese número
        for (int j = MIN_NUM; j <= MAX_NUM; j++) {
            cout << i << " x " << j << " = " << i * j << "\n"; // Muestra cada resultado de la multiplicación
        }

        cout << "\n"; // Agrega una línea en blanco después de cada tabla de multiplicar
    }

    return 0; // Devuelve 0 para indicar que el programa terminó exitosamente
}
