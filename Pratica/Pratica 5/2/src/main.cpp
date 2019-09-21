#include <iostream>
#include "calculadora.hpp"

using namespace std;

int main(){

    double n1,n2;
    char operador;

    cout<<"digite o primeiro numero: ";
    cin>>n1;

    cout<<"digite o operador: ";
    cin>>operador;

    cout<<"digite o segundo numero: ";
    cin>>n2;

    Calculadora calculadora= Calculadora(n1,operador,n2);

    calculadora.resultado();
    return 0;
}