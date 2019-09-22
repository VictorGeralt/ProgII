#include <iostream>
#include <string>
#ifndef Empregado_HPP
#define Empregado_HPP

using namespace std;

class Empregado
{
private:
    string primeironome;
    double salario;
    string sobrenome;
 public:

    void setprimeironome(string primeironome);
    void setSalario(double salario);
    void setsobrenome(string sobrenome);
   

    string getprimeironome();
    double getSalario();
    string getsobrenome();
    string getRG();

    void imprimirEmpregado();
    void aumento();
    void calcularGanhoAnual();
    
    Empregado();
    Empregado(string primeironome,double salario,string sobrenome);

};
#endif
