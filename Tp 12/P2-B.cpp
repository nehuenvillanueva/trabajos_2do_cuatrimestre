#include<iostream>
using namespace std;

class Vector {
private:
    int vec[5];

public:
    Vector();
    void imprimir();
    void imprimir(int hasta);
    void imprimir(int desde,int hasta);
};

Vector::Vector() {
    for(int i=0;i<5;i++) {
        cout<<"Ingrese valor: ";
        cin>>vec[i];
    }
}

void Vector::imprimir() {
    for(int i=0;i<5;i++)
        cout<<vec[i]<<" ";
    cout<<endl;
}

void Vector::imprimir(int hasta) {
    for(int i=0;i<=hasta && i<5;i++)
        cout<<vec[i]<<" ";
    cout<<endl;
}

void Vector::imprimir(int desde,int hasta) {
    for(int i=desde;i<=hasta && i<5;i++)
        cout<<vec[i]<<" ";
    cout<<endl;
}
