
#include <iostream>
#include <memory>

// Punteros a funciones
void imprimir(int x) {
    std::cout << "Valor de x: " << x << std::endl;
}

// Función que recibe un puntero como parámetro
void modificarValor(int* ptr) {
    *ptr = 20;  // Modifica el valor al que apunta el puntero
}

// Paso de parámetros por referencia usando punteros
void cambiarValorPorReferencia(int* ptr) {
    *ptr = 30;  // Cambia el valor directamente en la memoria
}

int main() {
    // Declaración de punteros
    int num = 10;
    int* ptr = &num;  // El puntero apunta a la dirección de memoria de num

    // Almacenar direcciones en punteros
    std::cout << "Dirección de 'num': " << &num << std::endl;  // Dirección de num
    std::cout << "Valor de 'num' usando puntero: " << *ptr << std::endl;  // De-referenciación: Imprime el valor al que apunta ptr

    // Ubicación de memoria dinámica
    int* ptrDinamico = new int;  // Asigna memoria dinámica para un entero
    *ptrDinamico = 100;  // Asigna un valor
    std::cout << "Valor en memoria dinámica: " << *ptrDinamico << std::endl;

    // Liberar memoria dinámica
    delete ptrDinamico;
    ptrDinamico = nullptr;  // Es importante evitar apuntar a memoria liberada

    // Aritmética de punteros
    int arr[3] = {1, 2, 3};
    int* ptrArray = arr;
    
    std::cout << "Valor del primer elemento del arreglo: " << *ptrArray << std::endl;  // 1
    std::cout << "Valor del segundo elemento: " << *(ptrArray + 1) << std::endl;  // 2

    // Paso de parámetros por referencia con punteros
    std::cout << "Valor de 'num' antes de modificar: " << num << std::endl;
    modificarValor(&num);  // Paso de dirección de 'num'
    std::cout << "Valor de 'num' después de modificar con puntero: " << num << std::endl;

    // Constantes y punteros
    const int* ptrConstante = &num;  // Puntero a constante: no se puede cambiar el valor al que apunta
    // *ptrConstante = 50;  // Esto daría error: el valor apuntado es constante
    std::cout << "Valor de 'num' a través de puntero constante: " << *ptrConstante << std::endl;

    // Punteros a funciones
    void (*punteroFuncion)(int) = imprimir;
    punteroFuncion(5);  // Llama a la función 'imprimir' a través del puntero

    // Punteros inteligentes (std::unique_ptr y std::shared_ptr)
    // Puntero inteligente único
    std::unique_ptr<int> uniquePtr = std::make_unique<int>(200);
    std::cout << "Valor con unique_ptr: " << *uniquePtr << std::endl;

    // Puntero inteligente compartido
    std::shared_ptr<int> sharedPtr1 = std::make_shared<int>(300);
    std::shared_ptr<int> sharedPtr2 = sharedPtr1;  // Ambos comparten la propiedad del puntero
    std::cout << "Valor con shared_ptr: " << *sharedPtr1 << ", " << *sharedPtr2 << std::endl;

    // Problemas con punteros: uso incorrecto de memoria
    int* ptrInvalido = nullptr;  // Evitar acceder a memoria no válida
    // std::cout << *ptrInvalido << std::endl;  // Esto causaría un fallo de segmentación

    return 0;
}
