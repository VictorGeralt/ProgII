#include <iostream>
#include "pais.hpp"
#include <string>

using namespace std;

int Pais::cont;

Pais::Pais(string n,string nc, double dim,string lp[5])
{
    nome= n;
    nomeCapital= nc;
    dimensao=dim;
    for(int i=0; i<5;i++)
    {
        listaPais[i]= lp[i];
    }
    cont++;
}

Pais::Pais()
{
    nome= "";
    nomeCapital= "";
    dimensao=0;
    cont++;
}

void Pais::setListaPais(string lp[])
{
    for(int i=0; i<5;i++)
    {
        this->listaPais[i]= lp[i];
    }
}

//getters
string Pais::getNome(){
    return nome; 
}

string Pais::getNomeCapital(){
    return nomeCapital;
}



int Pais::getDimensao(){
    return dimensao;
}

//setters
void Pais::setNome(string nome){
    this->nome=nome;
}

void Pais::setNomeCapital(string capital){
    this->nomeCapital=capital;
}


void Pais::setDimensao(int dimensao){
    this->dimensao=dimensao;
}

void Pais::verificarSePaisEIgual(Pais x){
if((x.getNome() == nome) && (x.getNomeCapital() == nomeCapital)){
    cout << "\nPaises Iguais";
} else {
   cout<< "\nPaises diferentes";
}

}

void Pais::verificarFronteiras(){
    for (size_t i = 0; i < 5; i++)
    {
        cout << "\n [" << i << "]=" + listaPais[i];
    }

}

void Pais::dadosdosPaises(Pais x){
    cout<<"\nNome: "<<x.getNome();
    cout<<"\nCapital: "<<x.getNomeCapital();
    cout<<"\nDimensao: "<<x.getDimensao()<<endl;
}