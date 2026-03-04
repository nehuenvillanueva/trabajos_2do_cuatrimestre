#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Libro {
private:
    string titulo;
    string autor;
    int anio;
public:
    Libro(string t,string a,int an);
    int retornarAnio();
    void imprimir();
};

Libro::Libro(string t,string a,int an)
{
    titulo=t;
    autor=a;
    anio=an;
}

int Libro::retornarAnio()
{
    return anio;
}

void Libro::imprimir()
{
    cout<<titulo<<" "<<autor<<" "<<anio<<"\n";
}

int main()
{
    vector<Libro> libros;
    libros.push_back(Libro("Libro1","Autor1",1999));
    libros.push_back(Libro("Libro2","Autor2",1980));
    libros.push_back(Libro("Libro3","Autor3",2010));

    Libro aux(" "," ",0);

    for(int i=0;i<libros.size()-1;i++)
    {
        for(int j=i+1;j<libros.size();j++)
        {
            if(libros[i].retornarAnio() > libros[j].retornarAnio())
            {
                aux=libros[i];
                libros[i]=libros[j];
                libros[j]=aux;
            }
        }
    }

    for(int i=0;i<libros.size();i++)
        libros[i].imprimir();

    return 0;
}
