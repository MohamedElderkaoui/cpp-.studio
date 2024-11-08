#include <iostream>
#include <array>
#include <vector>

int main() {
    // Array bidimensional estático
    int matriz_estatica[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // Array bidimensional con std::array (tamaño fijo)
    std::array<std::array<int, 3>, 2> matriz_array = {{
        {1, 2, 3},
        {4, 5, 6}
    }};

    // Array bidimensional dinámico con std::vector
    std::vector<std::vector<int>> matriz_vector = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Recorrer y mostrar elementos de matriz estática
    std::cout << "Matriz estática:" << std::endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << matriz_estatica[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Recorrer y mostrar elementos de matriz con std::array
    std::cout << "Matriz con std::array:" << std::endl;
    for (const auto& fila : matriz_array) {
        for (int valor : fila) {
            std::cout << valor << " ";
        }
        std::cout << std::endl;
    }

    // Recorrer y mostrar elementos de matriz con std::vector
    std::cout << "Matriz con std::vector:" << std::endl;
    for (const auto& fila : matriz_vector) {
        for (int valor : fila) {
            std::cout << valor << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
