#include<iostream>
#include<string>
using namespace std;

class Empleado {
private:
    string nombre;
    float sueldo;

public:
    Empleado();
    void imprimir();
    void pagarImpuestos();
};

Empleado::Empleado()
{
    cout << "Ingrese el nombre del empleado: ";
    cin >> nombre;
    cout << "Ingrese el sueldo: ";
    cin >> sueldo;
}

void Empleado::imprimir()
{
    cout << "Nombre: " << nombre << endl;
    cout << "Sueldo: " << sueldo << endl;
}

void Empleado::pagarImpuestos()
{
    if (sueldo > 3000)
        cout << "Debe pagar impuestos." << endl;
    else
        cout << "No debe pagar impuestos." << endl;
}

int main()
{
    Empleado emp1;
    emp1.imprimir();
    emp1.pagarImpuestos();
    return 0;
}
