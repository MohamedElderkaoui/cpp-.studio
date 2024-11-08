#include <iostream>

int main() {
    int edad;

    std::cout << "Ingrese su edad: ";
    std::cin >> edad;

    if (edad < 18) {
        std::cout << "Eres menor de edad." << std::endl;
    } else if (edad == 18) {
        std::cout << "Acabas de cumplir 18 años." << std::endl;
    } else {
        std::cout << "Eres mayor de edad." << std::endl;
    }

    // Usando operador ternario
    std::string permiso = (edad >= 18) ? "Puedes votar." : "No puedes votar.";
    std::cout << permiso << std::endl;

    return 0;
}
