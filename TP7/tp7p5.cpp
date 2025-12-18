//5. Implementar la clase operaciones. Se deben cargar dos valores enteros, calcular su
//suma, resta, multiplicación y división, cada una en un método, imprimir dichos
//resultados.
#include <iostream>
using namespace std;
class operaciones {
private:
int valor1;
int valor2;
public:
void carga();
int suma(int a, int b);
int resta(int a, int b);
int div(int a, int b);
int mult(int a, int b);
void print();
};
void operaciones::carga(){
    cout <<"ingrese el primer valor:";
    cin >>valor1;
    cout <<"\n";
    cout <<"ingrese su segundo valor:";
    cin >>valor2;
}
int operaciones::suma(int a, int b){
    return(a+b);
}
int operaciones::resta(int a, int b){
    return(a-b);
}
int operaciones::div(int a, int b){
    return(a/b);
}
int operaciones::mult(int a, int b){
    return(a*b);
}
void operaciones::print(){
    cout <<"division:"<<div(valor1, valor2);
    cout <<"\n";
    cout <<"suma:"<<suma(valor1, valor2);
    cout <<"\n";
    cout <<"resta:"<<resta(valor1, valor2);
    cout <<"\n";
    cout <<"multiplicacion:"<<mult(valor1, valor2);
    cout <<"\n";
}
int main()
{
operaciones op1;

op1.carga();
op1.print();

return 0;
}
