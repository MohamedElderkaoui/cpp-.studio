
#include <iostream> // Para flujo de datos
#include <string>   // Para cadenas (aunque no es necesario en este caso)

using namespace std;

// Función para intercambiar dos valores
void intercambio(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int var1 = 10;
    int var2 = 20;

    cout << "Antes del intercambio: var1 = " << var1 << ", var2 = " << var2 << endl;

    intercambio(var1, var2);

    cout << "Después del intercambio: var1 = " << var1 << ", var2 = " << var2 << endl;

    return 0;
}
// g++ -o trabajo_intercampo trabajo_intercampo.cpp