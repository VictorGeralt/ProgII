#include <iostream>
#include <string>
#include <fstream>

using namespace std;
#ifndef CONTA__HPP
#define CONTA__HPP

class ContaCorrente
{
string nome;
int CPF;
float saldo;

public:
   
    ContaCorrente();
    ContaCorrente(string nome,int CPF,float saldo);
   

    string getNome();
    int getCPF();
    float getSaldo();
    

    void setNome(string nome);
    void setCPF(int CPF);
    void setSaldo(float saldo);

    float calcularMediaConta(ContaCorrente x[]);

    void ImprimirPessoaComMenosSaldo(ContaCorrente x[]);

    void ImprimirPessoaComMaiorSaldo(ContaCorrente x[]);
};
#endif