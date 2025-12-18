//3. Desarrollar una clase que represente un Cuadrado y tenga los siguientes métodos:
//cargar el valor de su lado, imprimir su perímetro y su superficie.
#include <iostream>
using namespace std;
class cuadrado {
private:
int lado;
int perimetro;
int superficie;
public:
void carga();
void printsp();
};
void cuadrado::carga()
{
cout <<"ingrese el lado del cuadrado:";
cin >>lado;
cout <<"\n";
}
void cuadrado::printsp()
{
    perimetro=lado*4;
    cout <<"el perimetro del cuadrado es de:";
    cout <<perimetro;
    cout <<"\n";
    superficie=lado*lado;
    cout <<"el area del cuadrado es de:";
    cout <<superficie;
    cout <<"\n";
}
int main()
{
cuadrado cuadrado1;
cuadrado1.carga();
cuadrado1.printsp();

return 0;
}
