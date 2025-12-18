//2. Desarrollar un programa que cargue los lados de un triángulo e implemente los
//siguientes métodos: inicializar los atributos, imprimir el valor del lado mayor y otro
//método que muestre si es equilátero o no.
#include <iostream>
using namespace std;
class Triangulo {
private:
int lado1;
int lado2;
int lado3;
public:
void inicializar();
void imprimirvalores();
void esequilatero();
};
void Triangulo::inicializar()
{
cout <<"ingrese el lado n°1 del triangulo:";
cin >>lado1;
cout <<"\n";
cout <<"ingrese el lado n°2 del triangulo:";
cin >>lado2;
cout <<"\n";
cout <<"ingrese el lado n°3 del triangulo:";
cin >>lado3;
cout <<"\n";
}
void Triangulo::imprimirvalores()
{
cout <<"Lado n°1:";
cout <<lado1;
cout <<"\n";
cout <<"Lado n°2:";
cout <<lado2;
cout <<"\n";
cout <<"Lado n°3:";
cout <<lado3;
cout <<"\n";
}
void Triangulo::esequilatero(){
if (lado1==lado2 && lado2==lado3 && lado1==lado3)
{
cout <<"El triangulo es equilatero.";
}
else
{
cout <<"El triangulo no es equilatero.";
cout <<"\n";
}
}
int main()
{
Triangulo Triangulo1;
Triangulo1.inicializar();
Triangulo1.imprimirvalores();
Triangulo1.esequilatero();

return 0;
}
