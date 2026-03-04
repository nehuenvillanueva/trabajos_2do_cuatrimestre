#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Alumno {
private:
    string nombre;
    double nota1, nota2, nota3;
public:
    Alumno(string n,double n1,double n2,double n3);
    void imprimir();
};

Alumno::Alumno(string n,double n1,double n2,double n3)
{
    nombre=n;
    nota1=n1;
    nota2=n2;
    nota3=n3;
}

void Alumno::imprimir()
{
    cout<<"Nombre: "<<nombre<<"\n";
    cout<<"Nota1: "<<nota1<<"\n";
    cout<<"Nota2: "<<nota2<<"\n";
    cout<<"Nota3: "<<nota3<<"\n\n";
}

int main()
{
    vector<Alumno> alumnos;
    alumnos.push_back(Alumno("Juan",7,8,9));
    alumnos.push_back(Alumno("Ana",10,9,8));

    for(int i=0;i<alumnos.size();i++)
        alumnos[i].imprimir();

    return 0;
}
