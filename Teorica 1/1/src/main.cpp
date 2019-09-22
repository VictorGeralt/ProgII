#include <iostream>
#include "Empregado.hpp"
#include <string>

using namespace std;

int main(){
    string primeironome;
    double salario;
    string sobrenome;

    cout<<"Digite seu primeiro nome: ";
    cin>>primeironome;
    cout<<"Digite seu sobrenome: ";
    cin>>sobrenome;
    cout<<"Digite seu salario: ";
    cin>>salario;    

    Empregado e(primeironome,salario,sobrenome);

    cout<<"Digite seu primeiro nome: ";
    cin>>primeironome;
    cout<<"Digite seu sobrenome: ";
    cin>>sobrenome;
    cout<<"Digite seu salario: ";
    cin>>salario;    

    Empregado f(primeironome,salario,sobrenome);

    e.imprimirEmpregado();
    e.calcularGanhoAnual();

    f.imprimirEmpregado();
    f.calcularGanhoAnual();
    
    f.aumento();
    e.aumento();

    cout<<"\nApos aumento: ";

    e.imprimirEmpregado();
    e.calcularGanhoAnual();
    
    f.imprimirEmpregado();
    f.calcularGanhoAnual();
    
}