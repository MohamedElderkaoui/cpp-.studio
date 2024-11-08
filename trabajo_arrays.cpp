#include <iostream>
#include <array>
#include <vector>

int main() {
    // Array estático de tamaño fijo
    int numeros[5] = {1, 2, 3, 4, 5};

    // std::array
    std::array<int, 5> array_numeros = {1, 2, 3, 4, 5};

    // std::vector
    std::vector<int> vector_numeros = {1, 2, 3, 4, 5};

    // Mostrar elementos de cada tipo de array
    for (int num : numeros) std::cout << num << " ";
    std::cout << std::endl;

    for (int num : array_numeros) std::cout << num << " ";
    std::cout << std::endl;

    for (int num : vector_numeros) std::cout << num << " ";
    std::cout << std::endl;

    return 0;
}
