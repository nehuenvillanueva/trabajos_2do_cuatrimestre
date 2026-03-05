#include<iostream>
using namespace std;

class Sumatoria {
private:
    int valor;
    int suma;

public:
    Sumatoria();
    ~Sumatoria();
};

Sumatoria::Sumatoria()
{
    suma = 0;

    do {
        cout << "Ingrese un valor (0 para finalizar): ";
        cin >> valor;
        suma = suma + valor;
    } while (valor != 0);
}

Sumatoria::~Sumatoria()
{
    cout << "La suma total es: " << suma << endl;
}

int main()
{
    Sumatoria s;
    return 0;
}
