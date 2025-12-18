//4. Confeccionar una clase que represente un empleado. Definir como atributos su
//nombre y su sueldo. Confeccionar los métodos para la carga, otro para imprimir sus
//datos y por último uno que imprima un mensaje si debe pagar impuestos (si el sueldo
//supera a 3000)
#include <iostream>
using namespace std;
class empleados {
private:
char nombre[40];
int sueldo;
public:
void carga();
void imprimir();
};
void empleados::carga(){
    cout <<"ingrese nombre:";
    cin.getline(nombre,40);
    cout <<"\n";
    cout <<"porfavor ingrese su sueldo:";
    cin >>sueldo;
    cout <<"\n";
}
void empleados::imprimir(){
    if (sueldo>3000){
        cout <<"debe pagar impuestos";
    }else {
        cout <<"no debe pagar impuestos";
    }
}
int main()
{
empleados empleado;

empleado.carga( );
empleado.imprimir();

return 0;
}
