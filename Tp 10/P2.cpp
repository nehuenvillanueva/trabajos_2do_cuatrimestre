#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Persona {
private:
    string nombre;
    int edad;
public:
    Persona(string n,int e);
    int retornarEdad();
    void imprimir();
};

Persona::Persona(string n,int e)
{
    nombre=n;
    edad=e;
}

int Persona::retornarEdad()
{
    return edad;
}

void Persona::imprimir()
{
    cout<<"Nombre: "<<nombre<<" Edad: "<<edad<<"\n";
}

int main()
{
    vector<Persona> personas;
    personas.push_back(Persona("Ana",25));
    personas.push_back(Persona("Luis",18));
    personas.push_back(Persona("Pedro",30));

    Persona aux(" ",0);

    for(int i=0;i<personas.size()-1;i++)
    {
        for(int j=i+1;j<personas.size();j++)
        {
            if(personas[i].retornarEdad() > personas[j].retornarEdad())
            {
                aux=personas[i];
                personas[i]=personas[j];
                personas[j]=aux;
            }
        }
    }

    for(int i=0;i<personas.size();i++)
        personas[i].imprimir();

    return 0;
}
