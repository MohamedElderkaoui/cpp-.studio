#include <iostream>
#include <vector>

int main() {
    // Declaración e inicialización
    std::vector<int> numeros = {1, 2, 3, 4, 5};

    // Agregar y quitar elementos
    numeros.push_back(6);
    numeros.pop_back();

    // Acceder a elementos
    std::cout << "Primer elemento: " << numeros.front() << std::endl;
    std::cout << "Último elemento: " << numeros.back() << std::endl;
    std::cout << "Elemento en índice 2: " << numeros.at(2) << std::endl;

    // Redimensionar y reservar
    numeros.resize(10, 0); // Ajusta el tamaño a 10, rellena con ceros
    numeros.reserve(20);    // Reserva espacio para al menos 20 elementos

    // Iterar y mostrar elementos
    std::cout << "Elementos: ";
    for (const auto& num : numeros) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Limpiar y verificar estado
    numeros.clear();
    if (numeros.empty()) {
        std::cout << "El vector está vacío." << std::endl;
    }

    return 0;
}
