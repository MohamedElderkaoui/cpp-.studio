#include <iostream>
#include <vector>

int main() {
    // Declaración e inicialización
    std::vector<int> numeros = {1, 2, 3, 4, 5};

    // Agregar y eliminar elementos
    numeros.push_back(6); // Añade 6 al final
    numeros.pop_back();   // Elimina el último elemento

    // Acceso y modificación de elementos
    numeros[0] = 10;       // Modifica el primer elemento a 10
    std::cout << numeros.at(0) << std::endl; // Acceso seguro

    // Recorrer el vector y mostrar sus elementos
    for (int num : numeros) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Métodos y propiedades útiles
    std::cout << "Tamaño: " << numeros.size() << std::endl;
    std::cout << "Primer elemento: " << numeros.front() << std::endl;
    std::cout << "Último elemento: " << numeros.back() << std::endl;

    return 0;
}
