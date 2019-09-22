#include <iostream>
#include "Empregado.hpp"
#include <string>

using namespace std;

    Empregado::Empregado(){}
    

    Empregado::Empregado(string primeironome,double salario,string sobrenome){
        
        this->primeironome=primeironome;
        if (salario<0){
            salario=0;
        }else{
        this->salario=salario;}
        this->sobrenome=sobrenome;

    }


    void Empregado::setprimeironome(string primeironome){
    this->primeironome=primeironome;
    }
    void Empregado::setsobrenome(string sobrenome){
    this->sobrenome=sobrenome;
    }
    void Empregado::setSalario(double salario){
     this->salario=salario;
    }


    string Empregado::getprimeironome(){
        return primeironome;
    }
    string Empregado::getsobrenome(){
        return sobrenome;
    }
    double Empregado::getSalario(){
        return salario;
    }

    void Empregado::imprimirEmpregado(){
        
        cout<<"\n-------------\n";
        cout<<"Nome: "<<getprimeironome()<<" "<<getsobrenome();
        cout<<"\nSalario: "<<getSalario();

    }
    void Empregado::aumento(){
        this->salario=getSalario()*(1.1);
    }
    void Empregado::calcularGanhoAnual(){
        cout<<"\nGanho anual: "<<getSalario()*12;
    }