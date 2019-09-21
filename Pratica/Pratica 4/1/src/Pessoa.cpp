#include <iostream>
#include "Pessoa.hpp"

using namespace std;

    void Pessoa::setNome(string nome){
        this->nome = nome;
    }
    void Pessoa::setPeso(float peso){
        this->peso = peso;
    }
    void Pessoa::setSexo(char sexo){
        this->sexo = sexo;
    }
    void Pessoa::setAltura(float altura){
        this->altura = altura;
    }

    string Pessoa::getNome(){
        return nome;
    }

    float Pessoa::getPeso(){
        return peso;
    }

    char Pessoa::getSexo(){
        return sexo;
    }
    
    float Pessoa::getAltura(){
        return altura;
    }

    void Pessoa::imprimir(){
        cout<<"-----------\n";
        cout<<"Nome :"<<nome<<endl;
        cout<<"sexo :"<<sexo<<endl;
        cout<<"Altura :"<<altura<<endl;
        cout<<"Peso :"<<peso<<endl;
    }