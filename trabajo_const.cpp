﻿

#include <iostream>
using namespace std;

int main()
{
    const string nombre = "Juan";
    int edad = 21;
    double salario;

    

    cout << "Introduce la edad del empleado: ";
    cin >> edad;
    cout << "Introduce el salario del empleado: ";
    cin >> salario;

    cout << "Datos del empleado:" << endl;
    cout << "Nombre: " << nombre << ". Edad: " << edad << ". Salario: " << salario << endl;

    return 0;
}