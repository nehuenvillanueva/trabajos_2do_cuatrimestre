#include<iostream>
using namespace std;

class Socio {
private:
    string nombre;
    int antiguedad;

public:
    Socio();
    string retornarNombre();
    int retornarAntiguedad();
};

Socio::Socio() {
    cout<<"Ingrese nombre: ";
    cin>>nombre;
    cout<<"Ingrese antigüedad: ";
    cin>>antiguedad;
}

string Socio::retornarNombre() {
    return nombre;
}

int Socio::retornarAntiguedad() {
    return antiguedad;
}

class Club {
private:
    Socio socio1, socio2, socio3;

public:
    void mayorAntiguedad();
};

void Club::mayorAntiguedad() {
    Socio mayor = socio1;

    if(socio2.retornarAntiguedad() > mayor.retornarAntiguedad())
        mayor = socio2;

    if(socio3.retornarAntiguedad() > mayor.retornarAntiguedad())
        mayor = socio3;

    cout<<"Socio con mayor antigüedad: "
        <<mayor.retornarNombre()<<endl;
}

int main() {
    Club club1;
    club1.mayorAntiguedad();
    return 0;
}
