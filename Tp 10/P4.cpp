#include<iostream>
#include<string>
#include<vector>
using namespace std;

class CuentaBancaria {
private:
    int numero;
    string titular;
    double saldo;
public:
    CuentaBancaria(int n,string t,double s);
    int retornarNumero();
    void depositar(double monto);
    void retirar(double monto);
    void imprimir();
};

CuentaBancaria::CuentaBancaria(int n,string t,double s)
{
    numero=n;
    titular=t;
    saldo=s;
}

int CuentaBancaria::retornarNumero()
{
    return numero;
}

void CuentaBancaria::depositar(double monto)
{
    saldo+=monto;
}

void CuentaBancaria::retirar(double monto)
{
    saldo-=monto;
}

void CuentaBancaria::imprimir()
{
    cout<<"Cuenta: "<<numero<<" Titular: "<<titular<<" Saldo: "<<saldo<<"\n";
}

int main()
{
    vector<CuentaBancaria> cuentas;
    cuentas.push_back(CuentaBancaria(1,"Juan",1000));
    cuentas.push_back(CuentaBancaria(2,"Ana",2000));

    cuentas[0].depositar(500);
    cuentas[0].retirar(200);

    for(int i=0;i<cuentas.size();i++)
        cuentas[i].imprimir();

    return 0;
}
