#include<iostream>
#include<vector>
using namespace std;

class Rectangulo {
private:
    double base, altura;
public:
    Rectangulo(double b,double a);
    double area();
    double perimetro();
    void imprimir();
};

Rectangulo::Rectangulo(double b,double a)
{
    base=b;
    altura=a;
}

double Rectangulo::area()
{
    return base*altura;
}

double Rectangulo::perimetro()
{
    return 2*(base+altura);
}

void Rectangulo::imprimir()
{
    cout<<"Area: "<<area()<<" Perimetro: "<<perimetro()<<"\n";
}

int main()
{
    vector<Rectangulo> rectangulos;
    rectangulos.push_back(Rectangulo(5,3));
    rectangulos.push_back(Rectangulo(4,2));

    for(int i=0;i<rectangulos.size();i++)
        rectangulos[i].imprimir();

    return 0;
}
