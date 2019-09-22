#include <iostream>
#include "Pais.hpp"
#include <string>

Pais::Pais(){
    
}


Pais::Pais(string nome,float dimensao,int populacao){
    this->nome=nome;
    this->dimensao=dimensao;
    this->populacao=populacao;
}

    string Pais::getNome(){
        return nome;
    }
    float  Pais::getDimensao(){
        return dimensao;
    }
    int  Pais::getPopulacao(){
        return populacao;
    }

    void Pais::imprimirPais(){
        cout<<"\nNome: "<<getNome();
        cout<<"\nDimensao: "<<getDimensao();
        cout<<"\nPopulacao: "<<getPopulacao();
    }