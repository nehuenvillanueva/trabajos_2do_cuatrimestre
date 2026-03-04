#include<iostream>
using namespace std;

class Persona {
private:
    string nombre;
    int edad;

public:
    Persona();  
    void imprimir();
    void esMayorEdad();
};

Persona::Persona() {
    cout<<"Ingrese nombre: ";
    cin>>nombre;
    cout<<"Ingrese edad: ";
    cin>>edad;
}

void Persona::imprimir() {
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}

void Persona::esMayorEdad() {
    if(edad >= 18)
        cout<<"Es mayor de edad"<<endl;
    else
        cout<<"No es mayor de edad"<<endl;
}

int main() {
    Persona p1;
    p1.imprimir();
    p1.esMayorEdad();
    return 0;
}
