#include <iostream>
#include "conta.hpp"
#include <string>
#include <fstream>

using namespace std;


ContaCorrente::ContaCorrente()
{

}

ContaCorrente::ContaCorrente(string nome,int CPF,float saldo){
    this->nome = nome;
    this->CPF = CPF;
    this->saldo = saldo;
}

//getters
string ContaCorrente::getNome()
{
    return nome;
}
int ContaCorrente::getCPF()
{
    return CPF;
}
float ContaCorrente::getSaldo()
{
    return saldo;
}

//setters
void ContaCorrente::setNome(string nome)
{
    this-> nome=nome;
}
void ContaCorrente::setCPF(int CPF)
{
    this-> CPF= CPF;
}
void ContaCorrente::setSaldo(float saldo)
{
    this ->  saldo=saldo;
}

//metodos
float ContaCorrente::calcularMediaConta(ContaCorrente x[]){
    float saldototal = 0;
    for (int i = 0; i < 5; i++)
    {
        saldototal+=x[i].getSaldo();
    }
    return saldototal/5;
}

void ContaCorrente::ImprimirPessoaComMenosSaldo(ContaCorrente x[]){
    
    int aux;
    for (int i = 0; i < 5; i++)
    {
        if (x[i].getSaldo() < x[aux].getSaldo())
        {
            
            aux=i;
        }
    }
    
    cout<<"\nPessoa com menor saldo:";
    cout<<"\nNome: "<<x[aux].getNome();
    cout<<"\nCPF: "<<x[aux].getCPF();
    cout<<"\nSaldo: "<<x[aux].getSaldo();
}

void ContaCorrente::ImprimirPessoaComMaiorSaldo(ContaCorrente x[]){
    
    int aux;
    for (int i = 0; i < 5; i++)
    {
        if (x[i].getSaldo() > x[aux].getSaldo())
        {
           
            aux=i;
        }
    }
    
    cout<<"\nPessoa com maior saldo:";
    cout<<"\nNome: "<< x[aux].getNome();
    cout<<"\nCPF: "<< x[aux].getCPF();
    cout<<"\nSaldo: "<< x[aux].getSaldo();
    ofstream file("maior.txt");
    file<<"\nPessoa com maior saldo:";
    file<<"\nNome: "<< x[aux].getNome();
    file<<"\nCPF: "<< x[aux].getCPF();
    file<<"\nSaldo: "<< x[aux].getSaldo();

}
