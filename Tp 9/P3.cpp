#include<iostream>
using namespace std;

class Operaciones {
private:
    int num1, num2;

public:
    Operaciones(int a, int b);
    void suma();
    void resta();
    void multiplicacion();
    void division();
};

Operaciones::Operaciones(int a, int b)
{
    num1 = a;
    num2 = b;
}

void Operaciones::suma()
{
    cout << "Suma: " << num1 + num2 << endl;
}

void Operaciones::resta()
{
    cout << "Resta: " << num1 - num2 << endl;
}

void Operaciones::multiplicacion()
{
    cout << "Multiplicacion: " << num1 * num2 << endl;
}

void Operaciones::division()
{
    cout << "Division: " << num1 / num2 << endl;
}

int main()
{
    int a, b;

    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;

    Operaciones op(a, b);

    op.suma();
    op.resta();
    op.multiplicacion();
    op.division();

    return 0;
}
