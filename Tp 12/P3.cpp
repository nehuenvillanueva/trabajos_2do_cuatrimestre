#include<iostream>
using namespace std;

class Punto {
private:
    int x;
    int y;

public:
    Punto();
    Punto(int x1,int y1);
    void imprimir();
};

Punto::Punto() {
    x = 0;
    y = 0;
}

Punto::Punto(int x1,int y1) {
    x = x1;
    y = y1;
}

void Punto::imprimir() {
    cout<<"Coordenada x: "<<x<<endl;
    cout<<"Coordenada y: "<<y<<endl;
}

int main() {
    Punto p1;
    Punto p2(5,8);

    p1.imprimir();
    p2.imprimir();

    return 0;
}
