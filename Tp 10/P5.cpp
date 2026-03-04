#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Empleado {
private:
    string nombre;
    double salario;
    string departamento;
public:
    Empleado(string n,double s,string d);
    double retornarSalario();
    void imprimir();
};

Empleado::Empleado(string n,double s,string d)
{
    nombre=n;
    salario=s;
    departamento=d;
}

double Empleado::retornarSalario()
{
    return salario;
}

void Empleado::imprimir()
{
    cout<<nombre<<" "<<salario<<" "<<departamento<<"\n";
}

int main()
{
    vector<Empleado> empleados;
    empleados.push_back(Empleado("Juan",50000,"Ventas"));
    empleados.push_back(Empleado("Ana",70000,"IT"));
    empleados.push_back(Empleado("Luis",45000,"RRHH"));

    Empleado aux(" ",0," ");

    for(int i=0;i<empleados.size()-1;i++)
    {
        for(int j=i+1;j<empleados.size();j++)
        {
            if(empleados[i].retornarSalario() < empleados[j].retornarSalario())
            {
                aux=empleados[i];
                empleados[i]=empleados[j];
                empleados[j]=aux;
            }
        }
    }

    for(int i=0;i<empleados.size();i++)
        empleados[i].imprimir();

    return 0;
}
