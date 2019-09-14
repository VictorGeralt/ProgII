#include <iostream>
#include "conta.hpp"
#include <string>
#include <vector>

using namespace std;


ContaCorrente::ContaCorrente()
{

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
    float saldototal;
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
        if (x[i].getSaldo() < x[i+1].getSaldo())
        {
            
            aux=i;
        }else{
           
            aux=i+1;
        }
    }
    
    cout<<"Pessoa com menor saldo:";
    cout<<"Nome: "<<x[aux].getNome();
    cout<<"CPF: "<<x[aux].getCPF();
    cout<<"Saldo: "<<x[aux].getSaldo();
}

void ContaCorrente::ImprimirPessoaComMaiorSaldo(ContaCorrente x[]){
    
    int aux;
    for (int i = 0; i < 5; i++)
    {
        if (x[i].getSaldo() > x[i+1].getSaldo())
        {
           
            aux=i;
        }else{
            
            aux=i+1;
        }
    }
    
    cout<<"Pessoa com maior saldo:";
    cout<<"Nome: "<< x[aux].getNome();
    cout<<"CPF: "<< x[aux].getCPF();
    cout<<"Saldo: "<< x[aux].getSaldo();
}
