#include<iostream>
#include<string>
using namespace std;

class Alumno {
private:
    string nombre;
    int edad;

public:
    Alumno();
    void imprimir();
    void mayorEdad();
};

Alumno::Alumno()
{
    cout << "Ingrese el nombre del alumno: ";
    cin >> nombre;
    cout << "Ingrese la edad: ";
    cin >> edad;
}

void Alumno::imprimir()
{
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}

void Alumno::mayorEdad()
{
    if (edad >= 18)
        cout << "Es mayor de edad." << endl;
    else
        cout << "No es mayor de edad." << endl;
}

int main()
{
    Alumno alumno1;
    alumno1.imprimir();
    alumno1.mayorEdad();
    return 0;
}
