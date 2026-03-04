#include<iostream>
using namespace std;

class Persona {
protected:
    string nombre;
    int edad;

public:
    void cargar();
    void imprimir();
};

void Persona::cargar() {
    cout<<"Ingrese nombre: ";
    cin>>nombre;
    cout<<"Ingrese edad: ";
    cin>>edad;
}

void Persona::imprimir() {
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}

class Empleado : public Persona {
private:
    float sueldo;

public:
    void cargarSueldo();
    void imprimirSueldo();
};

void Empleado::cargarSueldo() {
    cout<<"Ingrese sueldo: ";
    cin>>sueldo;
}

void Empleado::imprimirSueldo() {
    cout<<"Sueldo: "<<sueldo<<endl;
}

int main() {

    Persona persona1;
    persona1.cargar();
    persona1.imprimir();

    cout<<"-----------"<<endl;

    Empleado empleado1;
    empleado1.cargar();
    empleado1.cargarSueldo();
    empleado1.imprimir();
    empleado1.imprimirSueldo();

    return 0;
}
