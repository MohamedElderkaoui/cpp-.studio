
#include <iostream>
#include <array>
#include <vector>

int main() {
    // Array tridimensional estático
    int cubo_estatico[2][2][3] = {
        {
            {1, 2, 3},
            {4, 5, 6}
        },
        {
            {7, 8, 9},
            {10, 11, 12}
        }
    };

    // Array tridimensional con std::array (tamaño fijo)
    std::array<std::array<std::array<int, 3>, 2>, 2> cubo_array = {{
        {{
            {1, 2, 3},
            {4, 5, 6}
        }},
        {{
            {7, 8, 9},
            {10, 11, 12}
        }}
    }};

    // Array tridimensional dinámico con std::vector
    std::vector<std::vector<std::vector<int>>> cubo_vector = {
        {
            {1, 2, 3},
            {4, 5, 6}
        },
        {
            {7, 8, 9},
            {10, 11, 12}
        }
    };

    // Mostrar elementos de cubo_estatico
    std::cout << "Array tridimensional estático:" << std::endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 3; ++k) {
                std::cout << cubo_estatico[i][j][k] << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    // Mostrar elementos de cubo_array
    std::cout << "Array tridimensional con std::array:" << std::endl;
    for (const auto& matriz : cubo_array) {
        for (const auto& fila : matriz) {
            for (int valor : fila) {
                std::cout << valor << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    // Mostrar elementos de cubo_vector
    std::cout << "Array tridimensional con std::vector:" << std::endl;
    for (const auto& matriz : cubo_vector) {
        for (const auto& fila : matriz) {
            for (int valor : fila) {
                std::cout << valor << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    return 0;
}
