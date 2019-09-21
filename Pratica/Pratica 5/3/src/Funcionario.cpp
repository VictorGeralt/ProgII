#include <iostream>
#include "Funcionario.hpp"
#include <string>

using namespace std;

    Funcionario::Funcionario(){}
    

    Funcionario::Funcionario(string departamento,double salario,string dataEntrada,string RG){
        
        this->departamento=departamento;
        this->salario=salario;
        this->dataEntrada=dataEntrada;
        this->RG=RG;

    }


    void Funcionario::setDepartamento(string departamento){
        this->departamento=departamento;
    }
    void Funcionario::setSalario(double salario){
         this->salario=salario;
    }
    void Funcionario::setDataEntrada(string dataEntrada){
        this->dataEntrada=dataEntrada;
    }
    void Funcionario::setRG(string RG){
        this->RG=RG;
    }

    string Funcionario::getDepartamento(){
        return departamento;
    }
    double Funcionario::getSalario(){
        return salario;
    }
    string Funcionario::getDataEntrada(){
        return dataEntrada;
    }
    string Funcionario::getRG(){
        return RG;
    }

    void Funcionario::imprimirFuncionario(){
        
        cout<<"\n-------------\n";
        cout<<"Nome: "<<getDepartamento();
        cout<<"\nSalario: "<<getSalario();
        cout<<"\nData de entrada no banco: "<<getDataEntrada();
        cout<<"\nRG: "<<getRG();
    }
    float Funcionario::recebeAumento(float aumento){
        this->salario=getSalario()+aumento;
        return 0;
    }
    void Funcionario::calcularGanhoAnual(){
        cout<<"\nGanho anual: "<<(getSalario()*12)+getSalario()+(getSalario()/3);
    }