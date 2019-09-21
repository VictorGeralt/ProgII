#include <iostream>
#include "Paciente.hpp"
#include <string>

    Paciente::Paciente(string nome, float peso,char sexo,string endereco,string CPF){
     setNome(nome);
     setPeso(peso);
     setSexo(sexo);
     setEndereco(endereco);
     setCPF(CPF);
    }
    Paciente::Paciente(){}

    void Paciente::setNome(string nome){
        this->nome=nome;
    }
    
    void Paciente::setPeso(float peso){
        this->peso=peso;
    }
    
    void Paciente::setSexo(char sexo){
        this->sexo=sexo;
    }
    
    void Paciente::setEndereco(string endereco){
        this->endereco=endereco;
    }
    
    void Paciente::setCPF(string CPF){
        this->CPF=CPF;
    }
    

    string Paciente::getNome(){
        return this->nome;
    }
    float Paciente::getPeso(){
        return this->peso;
    }
    char Paciente::getSexo(){
        return this->sexo;
    }
    string Paciente::getEndereco(){
        return this->endereco;
    }
    string Paciente::getCPF(){
        return this->CPF;
    }

    void Paciente::imprimir(){
        cout<<"Nome    : "<<getNome()<<endl;
        cout<<"Peso    : "<<getPeso()<<endl;
        cout<<"Sexo    : "<<getSexo()<<endl;
        cout<<"endereco:"<<getEndereco()<<endl;
        cout<<"CPF     :"<<getCPF()<<endl;
    }