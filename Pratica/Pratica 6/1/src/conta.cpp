#include <iostream>
#include "conta.hpp"

using namespace std;

ContaBancaria::ContaBancaria(int ag, int cnt, float s)
{
    agencia = ag;
    conta = cnt;
    saldo= s;
}

ContaBancaria::ContaBancaria(int ag, int cnt)
{
    agencia = ag;
    conta = cnt;
    saldo= 0.0;
}

ContaBancaria::ContaBancaria()
{
}

//getters
int ContaBancaria::getAgencia()
{
    return agencia;
}
int ContaBancaria::getContaBancaria()
{
    return conta;
}
float ContaBancaria::getSaldo()
{
    return saldo;
}

//setters
void ContaBancaria::setAgencia(int a)
{
    this-> agencia=a;
}
void ContaBancaria::setContaBancaria(int conta)
{
    this-> conta = conta;
}

//metodos
void ContaBancaria::saque(float valor)
{
    if(saldo >= valor)
        saldo-=valor;
}

void ContaBancaria::deposito(float valor)
{
    saldo +=valor;
}
