#include <iostream>
#include <string>
#include <utility> // Para std::move

// Función que toma una referencia L-value
void funcionLvalue(int& x) {
    std::cout << "L-value reference: " << x << std::endl;
}

// Función que toma una referencia R-value
void funcionRvalue(int&& x) {
    std::cout << "R-value reference: " << x << std::endl;
}

int main() {
    int a = 10;       // `a` es un L-value
    int b = a + 5;    // `a + 5` es un R-value temporal

    // Usando la función con una referencia L-value
    funcionLvalue(a); // Compila, porque `a` es un L-value

    // Usando la función con una referencia R-value
    funcionRvalue(20);     // Compila, porque `20` es un R-value
    funcionRvalue(a + 5);  // Compila, porque `a + 5` es un R-value

    // Si intentamos pasar un L-value a la función que espera un R-value
    // funcionRvalue(a); // Error: `a` es un L-value, no un R-value

    // Usando std::move para convertir un L-value en un R-value
    funcionRvalue(std::move(a)); // std::move convierte `a` en un R-value

    // Ejemplo de semántica de movimiento con std::string
    std::string texto = "Hola, mundo!";
    std::cout << "Antes de mover: texto = " << texto << std::endl;

    // `std::move` convierte `texto` en un R-value, moviendo el contenido
    std::string nuevoTexto = std::move(texto);
    std::cout << "Después de mover:" << std::endl;
    std::cout << "texto = " << texto << std::endl;         // `texto` está vacío
    std::cout << "nuevoTexto = " << nuevoTexto << std::endl; // `nuevoTexto` contiene "Hola, mundo!"

    return 0;
}
