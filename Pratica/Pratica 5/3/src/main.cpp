#include <iostream>
#include "Funcionario.hpp"
#include <string>

using namespace std;

int main(){
    string departamento;
    double salario,aumento;
    string dataEntrada;
    string RG;

    cout<<"Digite seu departamento: ";
    cin>>departamento;
    cout<<"Digite seu salario: ";
    cin>>salario;
    cout<<"Digite a data de entrada no banco: ";
    cin>>dataEntrada;
    cout<<"Digite seu RG: ";
    cin>>RG;
    cout<<"Digite o aumento do seu salario: ";
    cin>>aumento;

    Funcionario f(departamento,salario,dataEntrada,RG);

    f.recebeAumento(aumento);
    f.imprimirFuncionario();
    f.calcularGanhoAnual();
    
}