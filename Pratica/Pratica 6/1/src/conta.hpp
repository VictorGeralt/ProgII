#include <iostream>
using namespace std;
#ifndef CONTA__HPP
#define CONTA__HPP

class ContaBancaria
{
int agencia;
int conta;
float saldo;

public:
    ContaBancaria(int ag, int cnt,float s);
    ContaBancaria(int ag, int cnt);
    ContaBancaria();



    int getAgencia();
    int getContaBancaria();
    float getSaldo();

    void setAgencia(int a);
    void setContaBancaria(int contaBancaria);
    void setSaldo(float saldo);

    void saque(float valor);

    void deposito(float valor);
};
#endif