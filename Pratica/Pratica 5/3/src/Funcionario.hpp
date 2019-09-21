#include <iostream>
#include <string>
#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

using namespace std;

class Funcionario
{
public:
   
    string departamento;
    double salario;
    string dataEntrada;
    string RG;

    void setDepartamento(string departamento);
    void setSalario(double salario);
    void setDataEntrada(string dataEntrada);
    void setRG(string RG);

    string getDepartamento();
    double getSalario();
    string getDataEntrada();
    string getRG();

    void imprimirFuncionario();
    float recebeAumento(float aumento);
    void calcularGanhoAnual();
    
    Funcionario();
    Funcionario(string departamento,double salario,string dataEntrada,string RG);

};
#endif
