#include<iostream>
#include<string>
using namespace std;

class Estudiante {
private:
    string nombre;
    int edad;
    float calificacion;

public:
    void setNombre(string n);
    void setEdad(int e);
    void setCalificacion(float c);

    string getNombre();
    int getEdad();
    float getCalificacion();
};

void Estudiante::setNombre(string n)
{
    nombre = n;
}

void Estudiante::setEdad(int e)
{
    edad = e;
}

void Estudiante::setCalificacion(float c)
{
    calificacion = c;
}

string Estudiante::getNombre()
{
    return nombre;
}

int Estudiante::getEdad()
{
    return edad;
}

float Estudiante::getCalificacion()
{
    return calificacion;
}

int main()
{
    Estudiante est;

    est.setNombre("Juan");
    est.setEdad(20);
    est.setCalificacion(8.5);

    cout << "Nombre: " << est.getNombre() << endl;
    cout << "Edad: " << est.getEdad() << endl;
    cout << "Calificacion: " << est.getCalificacion() << endl;

    return 0;
}
