#include <iostream>
#include <string>
#include <vector>
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